/*
 * Hello Minecraft! Launcher
 * Copyright (C) 2020  huangyuhui <huanghongxun2008@126.com> and contributors
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */
package com.tungsten.fclcore.auth.yggdrasil;

import com.google.gson.*;

import java.lang.reflect.Type;
import java.util.LinkedHashMap;
import java.util.Map;

import static java.util.Collections.unmodifiableMap;

public class PropertyMapSerializer implements JsonSerializer<Map<String, String>>, JsonDeserializer<Map<String, String>> {

    @Override
    public Map<String, String> deserialize(JsonElement json, Type typeOfT, JsonDeserializationContext context) throws JsonParseException {
        Map<String, String> result = new LinkedHashMap<>();
        for (JsonElement element : json.getAsJsonArray())
            if (element instanceof JsonObject) {
                JsonObject object = (JsonObject) element;
                result.put(object.get("name").getAsString(), object.get("value").getAsString());
            }

        return unmodifiableMap(result);
    }

    @Override
    public JsonElement serialize(Map<String, String> src, Type typeOfSrc, JsonSerializationContext context) {
        JsonArray result = new JsonArray();
        src.forEach((k, v) -> {
            JsonObject object = new JsonObject();
            object.addProperty("name", k);
            object.addProperty("value", v);
            result.add(object);
        });
        return result;
    }
}

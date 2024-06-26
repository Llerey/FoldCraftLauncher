/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "lwjgl/common_tools.h"
DISABLE_WARNINGS()
#include "stb_easy_font.h"
ENABLE_WARNINGS()

EXTERN_C_ENTER

JNIEXPORT jint JNICALL Java_org_lwjgl_stb_STBEasyFont_nstb_1easy_1font_1width(JNIEnv *__env, jclass clazz, jlong textAddress) {
    char *text = (char *)(uintptr_t)textAddress;
    UNUSED_PARAMS(__env, clazz)
    return (jint)stb_easy_font_width(text);
}

JNIEXPORT jint JNICALL Java_org_lwjgl_stb_STBEasyFont_nstb_1easy_1font_1height(JNIEnv *__env, jclass clazz, jlong textAddress) {
    char *text = (char *)(uintptr_t)textAddress;
    UNUSED_PARAMS(__env, clazz)
    return (jint)stb_easy_font_height(text);
}

JNIEXPORT jint JNICALL Java_org_lwjgl_stb_STBEasyFont_nstb_1easy_1font_1print(JNIEnv *__env, jclass clazz, jfloat x, jfloat y, jlong textAddress, jlong colorAddress, jlong vertex_bufferAddress, jint vbuf_size) {
    char *text = (char *)(uintptr_t)textAddress;
    unsigned char *color = (unsigned char *)(uintptr_t)colorAddress;
    void *vertex_buffer = (void *)(uintptr_t)vertex_bufferAddress;
    UNUSED_PARAMS(__env, clazz)
    return (jint)stb_easy_font_print(x, y, text, color, vertex_buffer, vbuf_size);
}

JNIEXPORT void JNICALL Java_org_lwjgl_stb_STBEasyFont_stb_1easy_1font_1spacing(JNIEnv *__env, jclass clazz, jfloat spacing) {
    UNUSED_PARAMS(__env, clazz)
    stb_easy_font_spacing(spacing);
}

EXTERN_C_EXIT

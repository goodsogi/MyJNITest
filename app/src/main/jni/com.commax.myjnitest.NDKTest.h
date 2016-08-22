//
// Created by 박정규 on 2016. 8. 22..
//
#include <jni.h>

#ifndef MYJNITEST_COM_COMMAX_MYJNITEST_NDKTEST_H
#define MYJNITEST_COM_COMMAX_MYJNITEST_NDKTEST_H

#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_jeanboy_demo_jnitest_NdkTest
 * Method:    getString
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_commax_myjnitest_NDKTest_getStringFromNative
        (JNIEnv *, jclass);

/*
 * Class:     com_jeanboy_demo_jnitest_NdkTest
 * Method:    doAdd
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_commax_myjnitest_NDKTest_doAddWithNative
        (JNIEnv *, jclass, jint, jint);

#ifdef __cplusplus
}
#endif
#endif

//
// Created by 박정규 on 2016. 8. 22..
//

#include "com.commax.myjnitest.NDKTest.h"


JNIEXPORT jstring JNICALL Java_com_commax_myjnitest_NDKTest_getStringFromNative
        (JNIEnv *env, jclass type) {

    return env->NewStringUTF("hello world!!!");
}

/*
 * Class:     com_jeanboy_demo_jnitest_NdkTest
 * Method:    doAdd
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_commax_myjnitest_NDKTest_doAddWithNative
        (JNIEnv *env, jclass type, jint param1, jint param2) {

    return param1 + param1;
}

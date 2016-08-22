package com.commax.myjnitest;

/**
 * Created by Next on 2016/8/12.
 */
public class NDKTest {
    static {
        System.loadLibrary("NDKTest");
    }

    public static native String getStringFromNative();
    public static native int doAddWithNative(int param1,int param2);
}

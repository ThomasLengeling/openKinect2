/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class openKinectv2_Device */

#ifndef _Included_openKinectv2_Device
#define _Included_openKinectv2_Device
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     openKinectv2_Device
 * Method:    initJNI
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_openKinectv2_Device_initJNI
  (JNIEnv *, jobject);

/*
 * Class:     openKinectv2_Device
 * Method:    openJNI
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_openKinectv2_Device_openJNI
  (JNIEnv *, jobject);

/*
 * Class:     openKinectv2_Device
 * Method:    stopJNI
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_openKinectv2_Device_stopJNI
  (JNIEnv *, jobject);

/*
 * Class:     openKinectv2_Device
 * Method:    version
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_openKinectv2_Device_version
  (JNIEnv *, jobject);

/*
 * Class:     openKinectv2_Device
 * Method:    jniGetDepthData
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_openKinectv2_Device_jniGetDepthData
  (JNIEnv *, jobject);
    
/*
 * Class:     openKinectv2_Device
 * Method:    jniGetDepthData
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_openKinectv2_Device_jniGetIrData
(JNIEnv *, jobject);

/*
 * Class:     openKinectv2_Device
 * Method:    jniGetDepthData
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_openKinectv2_Device_jniGetColorData
(JNIEnv *, jobject);
    
    
JNIEXPORT void JNICALL Java_openKinectv2_Device_jniChangeA
    (JNIEnv *, jobject, jfloat value);
    
JNIEXPORT void JNICALL Java_openKinectv2_Device_jniChangeR
    (JNIEnv *, jobject, jfloat value);
    
JNIEXPORT void JNICALL Java_openKinectv2_Device_jniChangeG
    (JNIEnv *, jobject, jfloat value);
    
JNIEXPORT void JNICALL Java_openKinectv2_Device_jniChangeB
    (JNIEnv *, jobject, jfloat value);
    
JNIEXPORT void JNICALL Java_openKinectv2_Device_jniDepth
    (JNIEnv *, jobject, jboolean mapDepth);
    
JNIEXPORT void JNICALL Java_openKinectv2_Device_jniGamma
    (JNIEnv *, jobject, jfloat Gamma);
    
JNIEXPORT void JNICALL Java_openKinectv2_Device_jniMin
    (JNIEnv *, jobject, jfloat  min);
    
JNIEXPORT void JNICALL Java_openKinectv2_Device_jniMax
    (JNIEnv *, jobject, jfloat max);
    
    

#ifdef __cplusplus
}
#endif
#endif
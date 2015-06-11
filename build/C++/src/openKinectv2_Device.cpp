#include "openKinectv2_Device.h"


JNIEXPORT void JNICALL Java_openKinectv2_Device_openJNI(JNIEnv* env, jobject obj)
{
    std::cout<<"init kinect 2.1"<<std::endl;
    
    LibFreenect2::Device * kinect = new LibFreenect2::Device();
    
    kinect->open();
    
   // jclass cls = env->GetObjectClass(obj);
    jclass cls = env->FindClass("openKinectv2/Device");
    jfieldID fid = env->GetFieldID(cls, "ptr", "J");
    env->SetLongField(obj, fid, (jlong)kinect);
    env->DeleteLocalRef(cls);
}

JNIEXPORT void JNICALL Java_openKinectv2_Device_stopJNI(JNIEnv* env, jobject obj)
{
    jclass cls = env->FindClass("openKinectv2/Device");
    jfieldID fid = env->GetFieldID(cls, "ptr", "J");
    LibFreenect2::Device * kinect = (LibFreenect2::Device *) env->GetLongField(obj, fid);
    kinect->stop();
    env->DeleteLocalRef(cls);
}

/*non-static method*/
JNIEXPORT jstring JNICALL Java_openKinectv2_Device_stringFromJNI(JNIEnv* env, jobject obj)
{
    printf("native method called");
    
    return env->NewStringUTF("I'm JNI");
}

/*static method*/
JNIEXPORT void JNICALL Java_openKinectv2_Device_nativePrint(JNIEnv* env, jobject obj)
{
    jclass cls = (jclass)obj;
    jmethodID methodID = env->GetStaticMethodID(cls, "print", "()V");
    env->CallStaticVoidMethod(cls, methodID);
}
#include <jni.h>
#include <string>

extern "C" {
    jstring
    Java_tw_ray_gles_MainActivity_stringFromJNI(
        JNIEnv *env, jobject /* this */);

    int
    Java_tw_ray_gles_MainActivity_main(
        JNIEnv *env, jobject /* this */, int argc, jstring argv);

}

JNIEXPORT int JNICALL
Java_tw_ray_gles_MainActivity_main(
        JNIEnv *env,
        jobject /* this */, int argc, jstring argv)
{


    return 0;
}

JNIEXPORT jstring JNICALL
Java_tw_ray_gles_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */)
{
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}



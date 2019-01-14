#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_changba_test_testc_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT void JNICALL
Java_com_changba_test_testc_MainActivity_javaCallC(JNIEnv *env, jobject instance, jstring in_,
                                                   jobject callback) {
    const char *in = env->GetStringUTFChars(in_, 0);

    // TODO

    env->ReleaseStringUTFChars(in_, in);
}
#ifdef __ANDROID__
#include <jni.h>
#include "quickjs/quickjs.h"
#include "bridge_dispatch.h"

JNIEXPORT void JNICALL
Java_app_cash_zipline_QuickJs_bridgeInitAllNative(JNIEnv* env, jclass clazz, jlong jsContext) {
    init_all(env);
    if (jsContext) {
        register_all((JSContext*)jsContext);
    }
}
#endif

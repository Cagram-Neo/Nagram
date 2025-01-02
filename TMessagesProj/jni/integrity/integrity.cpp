#include "meth.h"
#include "openat.h"
#include "read_cert.h"
#include "SHA1.h"

static const char *SIGN = "3A0F57FE06485D0B90D0ACD990E3A30328E3988D";

extern "C" {
int verifySign(JNIEnv *env) {
    return JNI_OK;
}
}
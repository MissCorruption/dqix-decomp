#include <globaldefs.h>

struct Struct_ov015_0218bae8 { void* unknown_0_; int unknown_4_; int unknown_8_; };
extern "C" void* func_ov015_0218bae8(struct Struct_ov015_0218bae8* arg0, int arg1);

struct Struct_ov015_02193160 {
    char unknown_0_[0x3c];
    struct Struct_ov015_0218bae8 unknown_3c_;
};

// USA: func_ov015_02193160
extern "C" ARM void* func_ov015_02193160(struct Struct_ov015_02193160 *arg0, unsigned char arg1, int *arg2) {
    int var0 = *arg2;
    while (var0 < arg0->unknown_3c_.unknown_8_) {
        void *var1 = func_ov015_0218bae8(&arg0->unknown_3c_, var0);
        if (!var1)
            goto notfound;
        if (arg1 == *((unsigned char *)var1 + 0xa)) {
            *arg2 = var0;
            return var1;
        }
        var0++;
    }
notfound:
    return NULL;
}

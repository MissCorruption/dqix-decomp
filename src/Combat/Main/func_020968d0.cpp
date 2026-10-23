#include <globaldefs.h>

struct Struct_02028460_3 { int unknown_0_; int unknown_4_; int unknown_8_; };
extern "C" int Vector3fix_Distance(struct Struct_02028460_3* arg0, struct Struct_02028460_3* arg1);

extern "C" void __clear(void* arg0, int arg1);

struct Struct_020968d0 {
    unsigned char unknown_0_[0x220];
    unsigned char unknown_220_;
    unsigned char unknown_221_;
    unsigned char unknown_222_;
    unsigned char unknown_223_;
    unsigned char unknown_224_;
};

// USA: func_020968d0
extern "C" ARM int func_020968d0(struct Struct_020968d0* arg0, int* arg1) {
    int var0, var1, var2, var3;
    int var4;
    struct Struct_02028460_3 var5, var6;
    int var7;
    float var8;

    if (arg0->unknown_224_ == 0) {
        return 0;
    }

    var7 = (int)arg0->unknown_220_ << 12;
    if (arg0->unknown_220_ != 0) var8 = 0.5f + (float)var7;
    else var8 = (float)var7 - 0.5f;
    var0 = (int)var8;

    var7 = (int)arg0->unknown_221_ << 12;
    if (arg0->unknown_221_ != 0) var8 = 0.5f + (float)var7;
    else var8 = (float)var7 - 0.5f;
    var1 = (int)var8;

    var7 = (int)arg0->unknown_222_ << 12;
    if (arg0->unknown_222_ != 0) var8 = 0.5f + (float)var7;
    else var8 = (float)var7 - 0.5f;
    var2 = (int)var8;

    var7 = (int)arg0->unknown_223_ << 12;
    if (arg0->unknown_223_ != 0) var8 = 0.5f + (float)var7;
    else var8 = (float)var7 - 0.5f;
    var3 = (int)var8;

    __clear(&var5, 0xc);
    var5.unknown_0_ = var0;
    var5.unknown_4_ = var1;
    __clear(&var6, 0xc);
    var6.unknown_0_ = var2;
    var6.unknown_4_ = var3;

    var4 = Vector3fix_Distance(&var5, &var6);
    if (arg1 != NULL) *arg1 = var4;
    if (var4 < 0x8000) return 0;
    return 1;
}

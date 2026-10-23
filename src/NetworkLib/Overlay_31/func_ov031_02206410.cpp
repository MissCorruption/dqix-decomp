#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Struct_ov031_0220528c;
struct Struct_ov031_02206410_3 {
    unsigned char unknown_0_[0xf8];
    int unknown_f8_;
    unsigned char* unknown_fc_;
    unsigned short unknown_100_;
    unsigned char unknown_102_[0xa];
    Struct_ov031_0220528c* unknown_10c_;
};
struct Struct_ov031_02206410 {
    unsigned char unknown_0_[0xa];
    unsigned short unknown_a_;
    unsigned char unknown_c_[0x5c];
    Struct_ov031_02206410_3* unknown_68_;
    unsigned char unknown_6c_[7];
    signed char unknown_73_;
    unsigned short unknown_74_;
    unsigned short unknown_76_;
    void* unknown_78_;
};
struct Struct_ov031_02206410_2 {
    unsigned char unknown_0_[0xd];
    unsigned char unknown_d_;
    unsigned char unknown_e_[2];
    void* unknown_10_;
    int unknown_14_;
    void* unknown_18_;
    int unknown_1c_;
    unsigned short unknown_20_;
    unsigned char unknown_22_[2];
    unsigned short unknown_24_;
    unsigned short unknown_26_;
    void* unknown_28_;
};
extern "C" void* func_ov031_02205134(void*, void*, int);
extern "C" int func_ov031_0220528c(Struct_ov031_0220528c*, void*);
extern "C" unsigned short func_ov031_02203078();
extern "C" void func_ov031_02206584();

// USA: func_ov031_02206410
extern "C" ARM int func_ov031_02206410(Struct_ov031_02206410* arg0, const unsigned char* arg1, int arg2, int arg3, unsigned short arg4, void* arg5, int arg6) {
    Struct_ov031_02206410_3* var0 = arg0->unknown_68_;
    Struct_ov031_02206410_2* var1 = (Struct_ov031_02206410_2*)func_ov031_02205134((void*)func_ov031_02206584, var0->unknown_10c_, arg6);
    if (!var1) return -33;
    if ((arg6 & 1) && arg0->unknown_73_ != 1) var1->unknown_d_ = 3;
    else var1->unknown_d_ = 0;
    unsigned char* var2 = var0->unknown_fc_;
    int var3 = var0->unknown_f8_;
    int var4 = arg3 + arg2;
    if (var4 < var3) {
        var1->unknown_10_ = var2 + arg3;
        var1->unknown_14_ = arg2;
        var1->unknown_18_ = 0;
        arg3 = var4;
        var1->unknown_1c_ = 0;
    } else {
        var1->unknown_10_ = var2 + arg3;
        var1->unknown_14_ = var3 - arg3;
        var1->unknown_18_ = var2;
        arg3 = arg2 - var1->unknown_14_;
        var1->unknown_1c_ = arg3;
        VectorizedInvertedMemcpy(arg1 + var1->unknown_14_, var1->unknown_18_, arg3);
    }
    VectorizedInvertedMemcpy(arg1, var1->unknown_10_, var1->unknown_14_);
    unsigned short var5 = var0->unknown_100_;
    var1->unknown_20_ = arg3;
    var0->unknown_100_ = var1->unknown_20_;
    if (arg0->unknown_73_ == 1) {
        if (arg0->unknown_74_ == 0) {
            arg0->unknown_74_ = func_ov031_02203078();
            arg0->unknown_a_ = arg0->unknown_74_;
        }
        var1->unknown_24_ = arg0->unknown_74_;
        if (arg0->unknown_78_ == 0 || arg5 != 0) {
            var1->unknown_28_ = arg5;
            var1->unknown_26_ = arg4;
        } else {
            var1->unknown_28_ = arg0->unknown_78_;
            var1->unknown_26_ = arg0->unknown_76_;
        }
    } else var1->unknown_28_ = 0;
    if (func_ov031_0220528c(var0->unknown_10c_, var1)) {
        arg2 = 0;
        var0->unknown_100_ = var5;
    }
    return arg2;
}

#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

struct Struct_ov017_021c96c0_3 {
    unsigned char unknown_0_[0x44];
    Vector3i unknown_44_;
    unsigned char unknown_50_[0x130 - 0x50];
    int unknown_130_;
    unsigned char unknown_134_[0x154 - 0x134];
    int unknown_154_;
    unsigned char unknown_158_[0x166 - 0x158];
    short unknown_166_;
    unsigned char unknown_168_[0x17b - 0x168];
    unsigned char unknown_17b_;
    unsigned char unknown_17c_;
};

struct Struct_ov017_021c96c0 {
    int unknown_0_;
    int unknown_4_;
    Struct_ov017_021c96c0_3* unknown_8_;
};

struct Struct_ov017_021c96c0_2 {
    unsigned short unknown_0_;
#if defined(jpn)
    unsigned char unknown_2_[0x444 - 2];
#else
    unsigned char unknown1_2_[0x424 - 2];
#endif
    int unknown_424_;
};

struct Struct_ov017_021c96c0_4 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    unsigned short unknown_4_;
    unsigned char unknown_6_0_ : 6;
    unsigned char unknown_6_6_ : 1;
    unsigned char unknown_6_7_ : 1;
    unsigned char unknown_7_0_ : 4;
    signed char unknown_7_4_ : 4;
    short unknown_8_;
    short unknown_a_;
    int unknown_c_;
    int unknown_10_;
};

struct Struct_02033f44;

extern "C" Struct_ov017_021c96c0_2* func_02012fe4(void);
extern "C" int func_ov017_021d446c(void* arg0, Struct_ov017_021c96c0* arg1, int arg2);
extern "C" int func_0202c540(void* arg0);
extern "C" int func_02018fbc(Struct_ov017_021c96c0_2* arg0, Vector3i* arg1);
extern "C" int* func_02033f44(Struct_02033f44* arg0);
struct Struct_02033834_2;
extern "C" void func_02033834(Struct_02033834_2* arg0, int arg1);
extern "C" void func_02076ccc(void*, int);

// USA: func_ov017_021c96c0
extern "C" ARM void func_ov017_021c96c0(int arg0, Struct_ov017_021c96c0_4* arg1, int arg2, int arg3, void* arg4) {
    Struct_ov017_021c96c0_2* var0 = func_02012fe4();
    Struct_ov017_021c96c0 var1;
    if (!func_ov017_021d446c(&arg1->unknown_4_, &var1, arg1->unknown_6_0_)) return;

    if (arg1->unknown_6_0_ == 10) {
        var1.unknown_8_->unknown_166_ = arg1->unknown_7_4_;
    }

    if (arg1->unknown_6_0_ == 1) {
        Vector3i var2;
        var2.x = arg1->unknown_c_;
        var2.y = arg1->unknown_a_ << 4;
        var2.z = arg1->unknown_10_;
        short var3 = arg1->unknown_8_;
        int var4 = arg1->unknown_6_6_ ? 1 : 0;
        int var5 = arg1->unknown_6_7_ ? 1 : 0;

        if (!(arg1->unknown_4_ == var0->unknown_0_ && var1.unknown_8_->unknown_130_ == 1) && !(var2.x == 0 && var2.y == 0 && var2.z == 0)) {
            if (func_0202c540(arg4)) {
                if (func_02033f44((Struct_02033f44*)var1.unknown_8_) == 0) {
                    var1.unknown_8_->unknown_44_ = var2;
                } else {
                    const Vector3i& var6 = var2;
                    var1.unknown_8_->unknown_44_ = var6;
                }
            } else {
                var1.unknown_8_->unknown_44_ = var2;
            }
        }

        if (arg1->unknown_4_ == var0->unknown_0_ && var0->unknown_424_ == 0 && var1.unknown_8_->unknown_130_ != 1 &&
            !(var2.x == 0 && var2.y == 0 && var2.z == 0)) {
            if (func_02033f44((Struct_02033f44*)var1.unknown_8_)) {
                var2 = var1.unknown_8_->unknown_44_;
            }
            var2.y = func_02018fbc(var0, &var2);
            var1.unknown_8_->unknown_44_ = var2;
        }

        if (var3 != 0) {
            func_02033834((Struct_02033834_2*)var1.unknown_8_, var3);
        }
        if (var4) {
            var1.unknown_8_->unknown_17b_ = 1;
        }
        if (var5) {
            var1.unknown_8_->unknown_17c_ = 1;
        }
        if (var1.unknown_8_->unknown_130_ == 4 || var1.unknown_8_->unknown_130_ == 5 || var1.unknown_8_->unknown_130_ == 6) {
            var1.unknown_8_->unknown_154_ = 0;
        }
    }

    func_02076ccc(var1.unknown_8_, arg1->unknown_6_0_);
}

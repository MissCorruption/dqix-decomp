#include <globaldefs.h>
#include <NitroSDK/Matrix.h>
#include <std_library_functions.h>

struct Struct_ov001_02156ba0_2 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_[3];
    int unknown_14_[3];
    int unknown_20_[3];
    int unknown_2c_[3];
};
struct Struct_ov001_02156ba0 {
    Struct_ov001_02156ba0_2 unknown_0_[16];
    int unknown_380_;
    int unknown_384_;
    int unknown_388_;
    Vector3fix unknown_38c_;
    int unknown_398_;
};
extern "C" void func_ov001_02156ba0(Struct_ov001_02156ba0*);

static inline int inline_02024000(int arg0, int arg1) {
    return FIX32_MULTIPLY(arg0, arg1);
}

// USA: func_ov001_02156c14
extern "C" ARM void func_ov001_02156c14(Struct_ov001_02156ba0* arg0, const Vector3fix* arg1, const int* arg2, int arg3, int arg4) {
    func_ov001_02156ba0(arg0);
    if (arg3 > 0) {
        int var0;
        Vector3fix var1[18];
        arg0->unknown_380_ = arg3;
        arg0->unknown_398_ = arg4;
        for (var0 = 0; var0 < arg0->unknown_380_; ++var0) memcpy(&var1[var0], &arg1[var0], sizeof(Vector3fix));
        memcpy(&var1[arg0->unknown_380_], &arg1[arg0->unknown_380_ - 1], sizeof(Vector3fix));
        memcpy(&var1[arg0->unknown_380_ + 1], &arg1[arg0->unknown_380_ - 1], sizeof(Vector3fix));
        arg0->unknown_38c_.x = arg1[0].x;
        arg0->unknown_38c_.y = arg1[0].y;
        arg0->unknown_38c_.z = arg1[0].z;
        for (var0 = 0; var0 < arg0->unknown_380_; ++var0) {
            if (var0 == 0) {
                arg0->unknown_0_[var0].unknown_0_ = 0;
                arg0->unknown_0_[var0].unknown_4_ = arg2[var0];
            } else if (var0 == arg0->unknown_380_ - 1) {
                arg0->unknown_0_[var0].unknown_0_ = arg0->unknown_0_[var0 - 1].unknown_0_ + arg0->unknown_0_[var0 - 1].unknown_4_;
                arg0->unknown_0_[var0].unknown_4_ = 0;
            } else {
                arg0->unknown_0_[var0].unknown_0_ = arg0->unknown_0_[var0 - 1].unknown_0_ + arg0->unknown_0_[var0 - 1].unknown_4_;
                arg0->unknown_0_[var0].unknown_4_ = arg2[var0];
            }
        }
        for (var0 = 0; var0 < arg0->unknown_380_; ++var0) {
            for (int var2 = 0; var2 < 3; ++var2) {
                int var3;
                int var4;
                int var5;
                int var6;
                int var7;
                if (var2 == 0) {
                    var5 = var1[var0].x;
                    var6 = var1[var0 + 1].x;
                    var7 = var1[var0 + 2].x;
                    if (var0 > 0) var4 = var1[var0 - 1].x;
                } else if (var2 == 1) {
                    var5 = var1[var0].y;
                    var6 = var1[var0 + 1].y;
                    var7 = var1[var0 + 2].y;
                    if (var0 > 0) var4 = var1[var0 - 1].y;
                } else {
                    var5 = var1[var0].z;
                    var6 = var1[var0 + 1].z;
                    var7 = var1[var0 + 2].z;
                    if (var0 > 0) var4 = var1[var0 - 1].z;
                }
                if (var0 == 0) var3 = var6 - var5;
                else {
                    int var8 = inline_02024000(var5 - var4, arg0->unknown_0_[var0].unknown_4_ << 12);
                    int var9 = inline_02024000(var6 - var5, arg0->unknown_0_[var0 - 1].unknown_4_ << 12);
                    var3 = fix32_Divide(var9 + var8, (arg0->unknown_0_[var0 - 1].unknown_4_ + arg0->unknown_0_[var0].unknown_4_) << 12);
                }
                int var10;
                if (var0 == arg0->unknown_380_ - 1) var10 = var7 - var6;
                else {
                    int var11 = inline_02024000(var6 - var5, arg0->unknown_0_[var0 + 1].unknown_4_ << 12);
                    int var12 = inline_02024000(var7 - var6, arg0->unknown_0_[var0].unknown_4_ << 12);
                    var10 = fix32_Divide(var12 + var11, (arg0->unknown_0_[var0].unknown_4_ + arg0->unknown_0_[var0 + 1].unknown_4_) << 12);
                }
                int var13 = inline_02024000(var6, 0x2000);
                int var14 = inline_02024000(var5, 0x2000);
                arg0->unknown_0_[var0].unknown_8_[var2] = var14 - var13 + var3 + var10;
                int var15 = inline_02024000(var6, 0x3000);
                int var16 = inline_02024000(var5, -0x3000);
                int var17 = inline_02024000(var3, 0x2000);
                arg0->unknown_0_[var0].unknown_14_[var2] = var16 + var15 - var17 - var10;
                arg0->unknown_0_[var0].unknown_20_[var2] = var3;
                arg0->unknown_0_[var0].unknown_2c_[var2] = var5;
            }
        }
    }
}

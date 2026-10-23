#include <globaldefs.h>
#include "Graphics/Vector.h"

struct Struct_0204c030_6 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};
extern "C" void func_0204c608(Struct_0204c030_6* arg0, int arg1, int arg2, int arg3);

struct Struct_0204c030_3 {
    Struct_0204c030_6 unknown_0_;
    Struct_0204c030_6 unknown_c_;
};

struct Struct_0204c030_4 {
    int unknown_0_;
    int unknown_4_;
    short unknown_8_;
    short unknown_a_;
    short unknown_c_;
    char unknown_e_[0x18 - 0x0e];
    short unknown_18_;
    unsigned int unknown_1c_;
    unsigned int unknown_20_;
};

struct Struct_0204c030_5 {
    union {
        Vector3s unknown_0_[4];
        short unknown1_0_[12];
    };
    unsigned char unknown_18_0_ : 4;
    unsigned char unknown_18_4_ : 4;
    unsigned char unknown_19_0_ : 4;
    unsigned char unknown_19_4_ : 4;
    unsigned char unknown_1a_0_ : 4;
    unsigned char unknown_1a_4_ : 4;
    unsigned char unknown_1b_0_ : 1;
    unsigned char unknown_1b_1_ : 7;

    short inline_0204c030_7() const { return unknown1_0_[unknown_18_0_]; }
    short inline_0204c030_8() const { return unknown1_0_[unknown_18_4_]; }
    short inline_0204c030_9() const { return unknown1_0_[unknown_19_0_]; }
    short inline_0204c030() const { return unknown1_0_[unknown_19_4_]; }
    short inline_0204c030_2() const { return unknown1_0_[unknown_1a_0_]; }
    short inline_0204c030_3() const { return unknown1_0_[unknown_1a_4_]; }
    void inline_0204c030_4(Struct_0204c030_6* arg0) const { func_0204c608(arg0, inline_0204c030_7(), inline_0204c030_8(), inline_0204c030_9()); }
    void inline_0204c030_5(Struct_0204c030_6* arg0) const { func_0204c608(arg0, inline_0204c030(), inline_0204c030_2(), inline_0204c030_3()); }
    Struct_0204c030_3 inline_0204c030_6() const {
        Struct_0204c030_3 var0;
        inline_0204c030_4(&var0.unknown_c_);
        inline_0204c030_5(&var0.unknown_0_);
        return var0;
    }
};

struct Struct_0204c030 {
    Struct_0204c030_4* unknown_0_;
    Struct_0204c030_5* unknown_4_;
    unsigned char* unknown_8_;
    unsigned short* unknown_c_;
    unsigned short* unknown_10_;
    int unknown_14_;
    Struct_0204c030_3 unknown_18_;
    Vector3i unknown_30_;
    Vector3i unknown_3c_;
    unsigned int unknown_48_;
};

struct Struct_0204c030_2 {
    Vector3s unknown_0_[96][4];
    int unknown_900_;
    int unknown_904_;
    Vector3i unknown_908_;
    Vector3i unknown_914_;
    unsigned char unknown_920_[96];
};

extern "C" bool func_0203109c(const Struct_0204c030_3* arg0, const Struct_0204c030_3* arg1);

// USA: func_0204c030
extern "C" ARM int func_0204c030(Struct_0204c030* arg0, Struct_0204c030_2* arg1, Struct_0204c030_3 arg2) {
    static int sLastTotal;
    Struct_0204c030_5* var0[192];
    Vector3fix_Subtract((Vector3i*)&arg2.unknown_c_, &arg0->unknown_30_, (Vector3i*)&arg2.unknown_c_);
    Vector3fix_Subtract((Vector3i*)&arg2.unknown_0_, &arg0->unknown_30_, (Vector3i*)&arg2.unknown_0_);
    if (!func_0203109c(&arg2, &arg0->unknown_18_)) return 0;
    arg2.unknown_c_.unknown_0_ >>= arg0->unknown_0_->unknown_4_;
    arg2.unknown_c_.unknown_4_ >>= arg0->unknown_0_->unknown_4_;
    arg2.unknown_c_.unknown_8_ >>= arg0->unknown_0_->unknown_4_;
    arg2.unknown_0_.unknown_0_ >>= arg0->unknown_0_->unknown_4_;
    arg2.unknown_0_.unknown_4_ >>= arg0->unknown_0_->unknown_4_;
    arg2.unknown_0_.unknown_8_ >>= arg0->unknown_0_->unknown_4_;
    int var1[7] = {0, 1, 2, 3, 4, 5, 6};
    int var2 = 0;
    int var3 = (arg2.unknown_0_.unknown_0_ + arg2.unknown_c_.unknown_0_) / 2;
    int var4 = (arg2.unknown_0_.unknown_8_ + arg2.unknown_c_.unknown_8_) / 2;
    if (arg0->unknown_48_ <= 7) {
        var2 = arg0->unknown_48_;
    } else {
        int var5 = (int)((float)fix32_Divide(var4 - arg0->unknown_0_->unknown_c_, arg0->unknown_0_->unknown_18_) / 4096.0f);
        if (var5 >= 0 && var5 < arg0->unknown_0_->unknown_20_) {
            bool var6 = false;
            if (var5 % 2 == 0) {
                int var7 = (int)((float)fix32_Divide(var3 - arg0->unknown_0_->unknown_8_, arg0->unknown_0_->unknown_18_) / 4096.0f);
                if (var7 >= 0 && var7 < arg0->unknown_0_->unknown_1c_) var6 = true;
                if (var6) {
                    int var8 = var5 * arg0->unknown_0_->unknown_1c_ + var7 + var5 / 2;
                    unsigned int var9 = arg0->unknown_0_->unknown_1c_;
                    var1[var2++] = var8;
                    if (var5 > 0) {
                        var1[var2++] = var8 - arg0->unknown_0_->unknown_1c_;
                        var1[var2++] = var8 - arg0->unknown_0_->unknown_1c_ - 1;
                    }
                    if (var5 < arg0->unknown_0_->unknown_20_ - 1) {
                        var1[var2++] = var8 + arg0->unknown_0_->unknown_1c_;
                        var1[var2++] = var8 + arg0->unknown_0_->unknown_1c_ + 1;
                    }
                    if (var7 > 0) var1[var2++] = var8 - 1;
                    if (var7 < var9 - 1) var1[var2++] = var8 + 1;
                }
            } else {
                int var10 = (int)((float)fix32_Divide(var3 - arg0->unknown_0_->unknown_8_ + arg0->unknown_0_->unknown_18_ / 2, arg0->unknown_0_->unknown_18_) / 4096.0f);
                if (var10 >= 0 && var10 < arg0->unknown_0_->unknown_1c_ + 1) var6 = true;
                if (var6) {
                    int var11 = var5 * arg0->unknown_0_->unknown_1c_ + var10 + var5 / 2;
                    unsigned int var12 = arg0->unknown_0_->unknown_1c_;
                    var1[var2++] = var11;
                    if (var5 > 0) {
                        if (var10 > 0) var1[var2++] = var11 - var12 - 1;
                        if (var10 < var12) var1[var2++] = var11 - var12;
                    }
                    if (var5 < arg0->unknown_0_->unknown_20_ - 1) {
                        if (var10 > 0) var1[var2++] = var11 + var12;
                        if (var10 < var12) var1[var2++] = var11 + var12 + 1;
                    }
                    if (var10 > 0) var1[var2++] = var11 - 1;
                    if (var10 < var12) var1[var2++] = var11 + 1;
                }
            }
        }
    }
    int var13 = 0;
    int var14 = 0;
    for (int var15 = 0; var15 < var2; var15++) {
        int var16 = var1[var15];
        int var17 = arg0->unknown_8_[var16];
        int var18 = arg0->unknown_c_[var16];
        for (int var19 = 0; var19 < var17; var19++) {
            Struct_0204c030_5* var20 = &arg0->unknown_4_[arg0->unknown_10_[var18 + var19]];
            if (!var20->unknown_1b_0_) {
                var20->unknown_1b_0_ = 1;
                var0[var13++] = var20;
                if (var13 == 192) break;
                Struct_0204c030_3 var21 = var20->inline_0204c030_6();
                if (func_0203109c(&var21, &arg2)) {
                    Vector3fix16Copy(&arg1->unknown_0_[var14][0], &var20->unknown_0_[0]);
                    Vector3fix16Copy(&arg1->unknown_0_[var14][1], &var20->unknown_0_[1]);
                    Vector3fix16Copy(&arg1->unknown_0_[var14][2], &var20->unknown_0_[2]);
                    Vector3fix16Copy(&arg1->unknown_0_[var14][3], &var20->unknown_0_[3]);
                    if (arg0->unknown_0_->unknown_0_ == 3) arg1->unknown_920_[var14] = var20->unknown_1b_1_;
                    var14++;
                    arg1->unknown_900_ = var14;
                    if (var14 == 96) break;
                }
            }
        }
        if (var14 == 96) break;
    }
    for (int var22 = 0; var22 < var13; var22++) var0[var22]->unknown_1b_0_ = 0;
    if (sLastTotal != var14) sLastTotal = var14;
    arg1->unknown_904_ = 1 << arg0->unknown_0_->unknown_4_;
    arg1->unknown_908_ = arg0->unknown_30_;
    arg1->unknown_914_ = arg0->unknown_3c_;
    return var14;
}

#include <globaldefs.h>
#include "NitroSDK/Memory.h"
#include "std_library_functions.h"

struct Struct_02011b68 {
    unsigned char unknown_0_[6];
};
struct Struct_02011b68_2 {
    unsigned char unknown_0_0_ : 1;
    unsigned char unknown_0_1_ : 7;
};
struct Struct_0200f3a4_11 {
    Struct_02011b68 unknown_0_;
    Struct_02011b68_2 unknown_6_;
    unsigned char unknown_7_;
    float unknown_8_;
};
struct Struct_02011b68_3 {
    Struct_02011b68 unknown_0_;
    signed char unknown_6_;
    char unknown_7_[3];
};
struct Struct_02011b68_4 {
    Struct_02011b68 unknown_0_;
    char unknown_6_[0xb];
    unsigned char unknown_11_;
    unsigned short unknown_12_0_ : 14;
    unsigned short unknown_13_6_ : 1;
    unsigned short unknown_13_7_ : 1;
    char unknown_14_[0x18];
};
struct KeyManager {
    char unknown_0_[0x3ac];
    int unknown_3ac_;
    char unknown_3b0_[0x14];
    unsigned int unknown_3c4_;
    char unknown_3c8_[0xc];
    float unknown_3d4_;
#if defined(jpn)
    char unknown_3d8_[0x50e5];
#else
    char unknown1_3d8_[0x5345];
#endif
    unsigned char unknown_571d_[4];
    signed char unknown_5721_;
#if defined(jpn)
    char unknown_54c2_[0x1afe];
#else
    char unknown_5722_[0x1ade];
#endif
    Struct_02011b68_4 unknown_7200_[16];
    Struct_02011b68_3 unknown_74c0_[3];
#if defined(jpn)
    char unknown_729e_[0xa1a];
#else
    char unknown_74de_[0xaae];
#endif
    Struct_0200f3a4_11 unknown_7f8c_[3];
};
extern "C" int func_02011fb4(unsigned char*, Struct_02011b68);
extern "C" void func_0200fad4(Struct_0200f3a4_11*);

// USA: func_02011b68
extern "C" ARM void func_02011b68(KeyManager* arg0) {
    unsigned char var0[4] = {0};
    memcpy(var0, arg0->unknown_571d_, (unsigned char)arg0->unknown_5721_);
    int var1 = arg0->unknown_5721_;
    signed char var2 = 0;
    Struct_02011b68 var3[4];
    memset(var3, 0, sizeof(var3));
    Struct_02011b68_3* var4 = arg0->unknown_74c0_;
    for (int var5 = 0; var5 < 3; var5++) arg0->unknown_7f8c_[var5].unknown_6_.unknown_0_0_ = 0;
    for (int var6 = 0; var6 < 3; var6++, var4++) {
        int var7 = 0;
        Struct_02011b68 var8;
        VectorizedMemset(&var8, var7, sizeof(var8));
        for (int var9 = 0; var9 < var1; var9++) {
            if (var4->unknown_6_ == var0[var9]) {
                var8 = var4->unknown_0_;
                if (var4->unknown_6_ >= 0 && var4->unknown_6_ != arg0->unknown_3ac_) {
                    var7 = 1;
                    for (int var10 = 0; var10 < 3; var10++) {
                        if (func_02011fb4(arg0->unknown_7f8c_[var10].unknown_0_.unknown_0_, var8)) {
                            arg0->unknown_7f8c_[var10].unknown_6_.unknown_0_0_ = 1;
                            var7 = 0;
                            break;
                        }
                    }
                }
            }
        }
        if (var7) {
            var3[var2] = var8;
            var2++;
        }
    }
    for (int var11 = 0; var11 < var2; var11++) {
        int var12;
        for (int var13 = 0; var13 < 6; var13++) {
            if (var3[var11].unknown_0_[var13] != 0) {
                var12 = 0;
                goto checkedKey;
            }
        }
        var12 = 1;
checkedKey:
        if (!var12) {
            for (int var14 = 0; var14 < 3; var14++) {
                if (!arg0->unknown_7f8c_[var14].unknown_6_.unknown_0_0_) {
                    Struct_0200f3a4_11* var15 = &arg0->unknown_7f8c_[var14];
                    func_0200fad4(var15);
                    arg0->unknown_7f8c_[var14].unknown_6_.unknown_0_0_ = 1;
                    var15->unknown_0_ = var3[var11];
                    break;
                }
            }
        }
    }
    float var16 = (float)arg0->unknown_3c4_ * arg0->unknown_3d4_;
    for (int var17 = 0; var17 < 3; var17++) {
        if (arg0->unknown_7f8c_[var17].unknown_6_.unknown_0_0_) {
            arg0->unknown_7f8c_[var17].unknown_8_ += var16;
            if (arg0->unknown_7f8c_[var17].unknown_8_ >= 60.0f) {
                Struct_02011b68_4* var18 = arg0->unknown_7200_;
                for (int var19 = 0; var19 < 16; var19++, var18++) {
                    if (var18->unknown_13_6_ && func_02011fb4(var18->unknown_0_.unknown_0_, arg0->unknown_7f8c_[var17].unknown_0_)) {
                        if (++var18->unknown_11_ >= 60) {
                            if (var18->unknown_12_0_ >= 9999) var18->unknown_11_ = 59;
                            else {
                                var18->unknown_12_0_++;
                                var18->unknown_11_ = 0;
                            }
                        }
                        break;
                    }
                }
                arg0->unknown_7f8c_[var17].unknown_8_ -= 60.0f;
            }
        }
    }
    for (int var20 = 0; var20 < 3; var20++) {
        if (!arg0->unknown_7f8c_[var20].unknown_6_.unknown_0_0_) func_0200fad4(&arg0->unknown_7f8c_[var20]);
    }
}

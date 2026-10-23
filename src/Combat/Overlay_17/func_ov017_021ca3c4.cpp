#if defined(jpn)
enum { Enum_ov017_021ca3c4_1816 = 0x508 };
#else
enum { Enum_ov017_021ca3c4_1816 = 0x718 };
#endif

#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" void* func_ov017_021b8478(void* arg0);
extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021ca3c4_3 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned char unknown_4_[0x10];
    unsigned int unknown_14_;
    unsigned int unknown_18_;
    unsigned char unknown_1c_[0xa4 - 0x1c];
};

struct Struct_ov017_021ca3c4_4 {
    unsigned char unknown_0_[8];
    unsigned short unknown_8_;
    unsigned char unknown_a_[0x158 - 0xa];
    Struct_ov017_021ca3c4_3 unknown_158_[8];
};

struct Struct_ov017_021ca3c4_5 {
    unsigned char unknown_0_[2];
    unsigned char unknown_2_[8];
    unsigned char unknown_a_0_ : 4;
    unsigned char unknown_a_4_ : 4;
    unsigned char unknown_b_[0x18 - 0xb];
};

struct Struct_ov017_021ca3c4_6 {
    unsigned char unknown_0_;
    unsigned char unknown_1_0_ : 4;
    unsigned char unknown_1_4_ : 2;
    unsigned char unknown_1_6_ : 2;
    unsigned char unknown_2_[2];
    Struct_ov017_021ca3c4_5 unknown_4_[4];
};

struct Struct_ov017_021ca3c4 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned int unknown_8_;
    unsigned int unknown_c_;
};

struct Struct_ov017_021ca3c4_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    Struct_ov017_021ca3c4 unknown_4_;
};

// USA: func_ov017_021ca3c4
extern "C" ARM void func_ov017_021ca3c4(Struct_ov017_021ca3c4_6* arg0) {
    unsigned char* var0 = (unsigned char*)GetGameResources();
    void* var1 = *(void**)(var0 + 0x3000 + Enum_ov017_021ca3c4_1816);
    Struct_ov017_021ca3c4_4* var2 = (Struct_ov017_021ca3c4_4*)func_ov017_021b8478(var1);
    void* var3 = func_0202ae24();

    for (int var4 = 0; var4 < arg0->unknown_1_4_; var4++) {
        Struct_ov017_021ca3c4_5* var5 = &arg0->unknown_4_[var4];
        Struct_ov017_021ca3c4_2 var6;
        for (int var7 = 0; var7 < var5->unknown_a_0_; var7++) {
            unsigned char var8 = var5->unknown_2_[var7];
            if (var8 >= 8) continue;
            Struct_ov017_021ca3c4_3* var9 = &var2->unknown_158_[var8];
            Struct_ov017_021ca3c4* var10 = &var6.unknown_4_;

            var6.unknown_0_ = 0x5c;
            var10->unknown_0_ = var2->unknown_8_;
            var10->unknown_2_ = var5->unknown_2_[var7] + 0xc0;
            var10->unknown_4_ = var9->unknown_0_;
            var10->unknown_6_ = var9->unknown_2_;
            var10->unknown_8_ = var9->unknown_14_;
            var10->unknown_c_ = var9->unknown_18_;
            func_0205e330(var3, &var6, 0);
        }
    }
}

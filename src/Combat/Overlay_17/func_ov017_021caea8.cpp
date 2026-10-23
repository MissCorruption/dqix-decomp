#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

struct Struct_ov017_021caea8 {
    unsigned char unknown_0_[2];
    unsigned char unknown_2_[8];
    unsigned char unknown_a_0_ : 4;
    unsigned char unknown_a_4_ : 4;
    unsigned char unknown_b_[0x18 - 0xb];
};
struct Struct_ov017_021caea8_4 {
    unsigned char unknown_0_;
    unsigned char unknown_1_0_ : 4;
    unsigned char unknown_1_4_ : 2;
    unsigned char unknown_1_6_ : 2;
    unsigned char unknown_2_[2];
    Struct_ov017_021caea8 unknown_4_[3];
};
struct Struct_ov017_021caea8_5 {
    unsigned char unknown_0_[0x36];
    unsigned short unknown_36_;
    unsigned char unknown_38_[0x5c - 0x38];
    unsigned char unknown_5c_[20];
    unsigned char unknown_70_[0x7f - 0x70];
    unsigned char unknown_7f_[20];
    unsigned char unknown_93_[0xa4 - 0x93];
};
struct Struct_ov017_021caea8_6 {
    unsigned char unknown_0_[8];
    unsigned short unknown_8_;
    unsigned char unknown_a_[0x158 - 0xa];
    Struct_ov017_021caea8_5 unknown_158_[8];
};
struct Struct_ov017_021caea8_7 {
    unsigned int unknown_0_0_ : 3, unknown_0_3_ : 3, unknown_0_6_ : 3, unknown_1_1_ : 3, unknown_1_4_ : 3;
    unsigned int unknown_1_7_ : 3, unknown_2_2_ : 3, unknown_2_5_ : 3, unknown_3_0_ : 3, unknown_3_3_ : 3;
};
struct Struct_ov017_021caea8_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    Struct_ov017_021caea8_7 unknown_4_;
    Struct_ov017_021caea8_7 unknown_8_;
    unsigned short unknown_c_;
    unsigned char unknown_e_;
    unsigned char unknown_f_;
};
struct Struct_ov017_021caea8_3 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    Struct_ov017_021caea8_2 unknown_4_;
};
extern "C" void* func_ov017_021b8478(void*);
extern "C" void* func_0202ae24();
extern "C" void func_0205e330(void*, void*, int);

// USA: func_ov017_021caea8
extern "C" ARM void func_ov017_021caea8(Struct_ov017_021caea8_4* arg0) {
    GameState::GetInstance();
    GameResources* var0 = GetGameResources();
    Struct_ov017_021caea8_6* var1 = (Struct_ov017_021caea8_6*)func_ov017_021b8478(var0->unknown_ptr_3718);
    void* var2 = func_0202ae24();
    for (int var3 = 0; var3 < arg0->unknown_1_4_; var3++) {
        Struct_ov017_021caea8* var4 = &arg0->unknown_4_[var3];
        Struct_ov017_021caea8_3 var5;
        Struct_ov017_021caea8_3 var6;
        for (int var7 = 0; var7 < var4->unknown_a_0_; var7++) {
            unsigned char var8 = var4->unknown_2_[var7];
            if (var8 >= 8) continue;
            Struct_ov017_021caea8_5* var9 = &var1->unknown_158_[var8];
            Struct_ov017_021caea8_2* var10 = &var5.unknown_4_;
            var5.unknown_0_ = 0x60;
            var10->unknown_0_ = var1->unknown_8_;
            var10->unknown_2_ = var4->unknown_2_[var7] + 0xc0;
            var10->unknown_e_ = 1;
            var10->unknown_4_.unknown_0_0_ = var9->unknown_5c_[0];
            var10->unknown_4_.unknown_0_3_ = var9->unknown_5c_[1];
            var10->unknown_4_.unknown_0_6_ = var9->unknown_5c_[2];
            var10->unknown_4_.unknown_1_1_ = var9->unknown_5c_[3];
            var10->unknown_4_.unknown_1_4_ = var9->unknown_5c_[4];
            var10->unknown_4_.unknown_1_7_ = var9->unknown_5c_[5];
            var10->unknown_4_.unknown_2_2_ = var9->unknown_5c_[6];
            var10->unknown_4_.unknown_2_5_ = var9->unknown_5c_[7];
            var10->unknown_4_.unknown_3_0_ = var9->unknown_5c_[8];
            var10->unknown_4_.unknown_3_3_ = var9->unknown_5c_[9];
            var10->unknown_8_.unknown_0_0_ = var9->unknown_5c_[10];
            var10->unknown_8_.unknown_0_3_ = var9->unknown_5c_[11];
            var10->unknown_8_.unknown_0_6_ = var9->unknown_5c_[12];
            var10->unknown_8_.unknown_1_1_ = var9->unknown_5c_[13];
            var10->unknown_8_.unknown_1_4_ = var9->unknown_5c_[14];
            var10->unknown_8_.unknown_1_7_ = var9->unknown_5c_[15];
            var10->unknown_8_.unknown_2_2_ = var9->unknown_5c_[16];
            var10->unknown_8_.unknown_2_5_ = var9->unknown_5c_[17];
            var10->unknown_8_.unknown_3_0_ = var9->unknown_5c_[18];
            var10->unknown_8_.unknown_3_3_ = var9->unknown_5c_[19];
            var10->unknown_c_ = var9->unknown_36_;
            func_0205e330(var2, &var5, 0);
            var10 = &var6.unknown_4_;
            var6.unknown_0_ = 0x60;
            var10->unknown_0_ = var1->unknown_8_;
            var10->unknown_2_ = var4->unknown_2_[var7] + 0xc0;
            var10->unknown_e_ = 0;
            var10->unknown_4_.unknown_0_0_ = var9->unknown_7f_[0];
            var10->unknown_4_.unknown_0_3_ = var9->unknown_7f_[1];
            var10->unknown_4_.unknown_0_6_ = var9->unknown_7f_[2];
            var10->unknown_4_.unknown_1_1_ = var9->unknown_7f_[3];
            var10->unknown_4_.unknown_1_4_ = var9->unknown_7f_[4];
            var10->unknown_4_.unknown_1_7_ = var9->unknown_7f_[5];
            var10->unknown_4_.unknown_2_2_ = var9->unknown_7f_[6];
            var10->unknown_4_.unknown_2_5_ = var9->unknown_7f_[7];
            var10->unknown_4_.unknown_3_0_ = var9->unknown_7f_[8];
            var10->unknown_4_.unknown_3_3_ = var9->unknown_7f_[9];
            var10->unknown_8_.unknown_0_0_ = var9->unknown_7f_[10];
            var10->unknown_8_.unknown_0_3_ = var9->unknown_7f_[11];
            var10->unknown_8_.unknown_0_6_ = var9->unknown_7f_[12];
            var10->unknown_8_.unknown_1_1_ = var9->unknown_7f_[13];
            var10->unknown_8_.unknown_1_4_ = var9->unknown_7f_[14];
            var10->unknown_8_.unknown_1_7_ = var9->unknown_7f_[15];
            var10->unknown_8_.unknown_2_2_ = var9->unknown_7f_[16];
            var10->unknown_8_.unknown_2_5_ = var9->unknown_7f_[17];
            var10->unknown_8_.unknown_3_0_ = var9->unknown_7f_[18];
            var10->unknown_8_.unknown_3_3_ = var9->unknown_7f_[19];
            func_0205e330(var2, &var6, 0);
        }
    }
}

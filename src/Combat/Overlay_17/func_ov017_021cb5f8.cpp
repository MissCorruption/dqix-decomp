#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

struct Struct_ov017_021cb5f8 {
    unsigned char unknown_0_[2];
    unsigned char unknown_2_[8];
    unsigned char unknown_a_0_ : 4;
    unsigned char unknown_a_4_ : 4;
    unsigned char unknown_b_[0x18 - 0xb];
};
struct Struct_ov017_021cb5f8_5 {
    unsigned char unknown_0_;
    unsigned char unknown_1_0_ : 4;
    unsigned char unknown_1_4_ : 2;
    unsigned char unknown_1_6_ : 2;
    unsigned char unknown_2_[2];
    Struct_ov017_021cb5f8 unknown_4_[3];
};
struct Struct_ov017_021cb5f8_6 {
    unsigned char unknown_0_[0x70];
    unsigned char unknown_70_[15];
    unsigned char unknown_7f_[0x93 - 0x7f];
    unsigned char unknown_93_[15];
    unsigned char unknown_a2_[0xa4 - 0xa2];
};
struct Struct_ov017_021cb5f8_7 {
    unsigned char unknown_0_[8];
    unsigned short unknown_8_;
    unsigned char unknown_a_[0x158 - 0xa];
    Struct_ov017_021cb5f8_6 unknown_158_[8];
};
struct Struct_ov017_021cb5f8_8 {
    unsigned int unknown_0_0_ : 3, unknown_0_3_ : 3, unknown_0_6_ : 3, unknown_1_1_ : 3, unknown_1_4_ : 3;
    unsigned int unknown_1_7_ : 3, unknown_2_2_ : 3, unknown_2_5_ : 3, unknown_3_0_ : 3, unknown_3_3_ : 3;
};
struct Struct_ov017_021cb5f8_2 {
    unsigned int unknown_0_0_ : 3, unknown_0_3_ : 3, unknown_0_6_ : 3, unknown_1_1_ : 3, unknown_1_4_ : 4;
};
struct Struct_ov017_021cb5f8_3 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    Struct_ov017_021cb5f8_8 unknown_4_;
    Struct_ov017_021cb5f8_2 unknown_8_;
    unsigned char unknown_c_;
};
struct Struct_ov017_021cb5f8_4 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    Struct_ov017_021cb5f8_3 unknown_4_;
};
extern "C" void* func_ov017_021b8478(void*);
extern "C" void* func_0202ae24();
extern "C" void func_0205e330(void*, void*, int);

// USA: func_ov017_021cb5f8
extern "C" ARM void func_ov017_021cb5f8(Struct_ov017_021cb5f8_5* arg0) {
    GameState::GetInstance();
    GameResources* var0 = GetGameResources();
    Struct_ov017_021cb5f8_7* var1 = (Struct_ov017_021cb5f8_7*)func_ov017_021b8478(var0->unknown_ptr_3718);
    void* var2 = func_0202ae24();
    for (int var3 = 0; var3 < arg0->unknown_1_4_; var3++) {
        Struct_ov017_021cb5f8* var4 = &arg0->unknown_4_[var3];
        Struct_ov017_021cb5f8_4 var5;
        Struct_ov017_021cb5f8_4 var6;
        for (int var7 = 0; var7 < var4->unknown_a_0_; var7++) {
            unsigned char var8 = var4->unknown_2_[var7];
            if (var8 >= 8) continue;
            Struct_ov017_021cb5f8_6* var9 = &var1->unknown_158_[var8];
            Struct_ov017_021cb5f8_3* var10 = &var5.unknown_4_;
            var5.unknown_0_ = 0x61;
            var10->unknown_0_ = var1->unknown_8_;
            var10->unknown_2_ = var4->unknown_2_[var7] + 0xc0;
            var10->unknown_c_ = 1;
            var10->unknown_4_.unknown_0_0_ = var9->unknown_70_[0];
            var10->unknown_4_.unknown_0_3_ = var9->unknown_70_[1];
            var10->unknown_4_.unknown_0_6_ = var9->unknown_70_[2];
            var10->unknown_4_.unknown_1_1_ = var9->unknown_70_[3];
            var10->unknown_4_.unknown_1_4_ = var9->unknown_70_[4];
            var10->unknown_4_.unknown_1_7_ = var9->unknown_70_[5];
            var10->unknown_4_.unknown_2_2_ = var9->unknown_70_[6];
            var10->unknown_4_.unknown_2_5_ = var9->unknown_70_[7];
            var10->unknown_4_.unknown_3_0_ = var9->unknown_70_[8];
            var10->unknown_4_.unknown_3_3_ = var9->unknown_70_[9];
            var10->unknown_8_.unknown_0_0_ = var9->unknown_70_[10];
            var10->unknown_8_.unknown_0_3_ = var9->unknown_70_[11];
            var10->unknown_8_.unknown_0_6_ = var9->unknown_70_[12];
            var10->unknown_8_.unknown_1_1_ = var9->unknown_70_[13];
            var10->unknown_8_.unknown_1_4_ = var9->unknown_70_[14];
            func_0205e330(var2, &var5, 0);
            var10 = &var6.unknown_4_;
            var6.unknown_0_ = 0x61;
            var10->unknown_0_ = var1->unknown_8_;
            var10->unknown_2_ = var4->unknown_2_[var7] + 0xc0;
            var10->unknown_c_ = 0;
            var10->unknown_4_.unknown_0_0_ = var9->unknown_93_[0];
            var10->unknown_4_.unknown_0_3_ = var9->unknown_93_[1];
            var10->unknown_4_.unknown_0_6_ = var9->unknown_93_[2];
            var10->unknown_4_.unknown_1_1_ = var9->unknown_93_[3];
            var10->unknown_4_.unknown_1_4_ = var9->unknown_93_[4];
            var10->unknown_4_.unknown_1_7_ = var9->unknown_93_[5];
            var10->unknown_4_.unknown_2_2_ = var9->unknown_93_[6];
            var10->unknown_4_.unknown_2_5_ = var9->unknown_93_[7];
            var10->unknown_4_.unknown_3_0_ = var9->unknown_93_[8];
            var10->unknown_4_.unknown_3_3_ = var9->unknown_93_[9];
            var10->unknown_8_.unknown_0_0_ = var9->unknown_93_[10];
            var10->unknown_8_.unknown_0_3_ = var9->unknown_93_[11];
            var10->unknown_8_.unknown_0_6_ = var9->unknown_93_[12];
            var10->unknown_8_.unknown_1_1_ = var9->unknown_93_[13];
            var10->unknown_8_.unknown_1_4_ = var9->unknown_93_[14];
            func_0205e330(var2, &var6, 0);
        }
    }
}

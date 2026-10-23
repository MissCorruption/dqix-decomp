#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" void func_02083e28(void* arg0, int arg1);

struct Struct_ov017_021cf234 {
    unsigned int unknown_0_0_ : 8;
    unsigned int unknown_1_0_ : 24;
};

struct Struct_ov017_021cf234_2 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int unknown_3_6_ : 2;
};

struct Struct_ov017_021cf234_3 {
    char unknown_0_[4];
    struct Struct_ov017_021cf234_2 unknown_4_;
    struct Struct_ov017_021cf234_2 unknown_8_;
    struct Struct_ov017_021cf234_2 unknown_c_;
    unsigned int unknown_10_;
};

#if defined(jpn)
enum { Enum_ov017_021cf234_2128 = 0x7b8 };
#else
enum { Enum_ov017_021cf234_2128 = 0x850 };
#endif

// USA: func_ov017_021cf234
extern "C" ARM void func_ov017_021cf234(int arg0, struct Struct_ov017_021cf234_3* arg1, GameState* arg2) {
    unsigned int var0 = (arg1->unknown_10_ << 21) >> 29;
    GameObject* var1 = func_0200ff1c(arg2, var0);
    if (!var1) return;
    unsigned char* var2 = (unsigned char*)func_02053c6c((unsigned char*)var1);
    if (!var2) return;

    unsigned int var3 = ((struct Struct_ov017_021cf234*)&arg1->unknown_10_)->unknown_0_0_;
    unsigned char var4 = (unsigned char)var3;
    unsigned char* var5 = var2 + Enum_ov017_021cf234_2128 + var4 * 0xc;
    ((struct Struct_ov017_021cf234_2*)(var5 + 0))->unknown_0_0_ = arg1->unknown_4_.unknown_0_0_;
    ((struct Struct_ov017_021cf234_2*)(var5 + 0))->unknown_1_2_ = arg1->unknown_4_.unknown_1_2_;
    ((struct Struct_ov017_021cf234_2*)(var5 + 0))->unknown_2_4_ = arg1->unknown_4_.unknown_2_4_;
    ((struct Struct_ov017_021cf234_2*)(var5 + 4))->unknown_0_0_ = arg1->unknown_8_.unknown_0_0_;
    ((struct Struct_ov017_021cf234_2*)(var5 + 4))->unknown_1_2_ = arg1->unknown_8_.unknown_1_2_;
    ((struct Struct_ov017_021cf234_2*)(var5 + 4))->unknown_2_4_ = arg1->unknown_8_.unknown_2_4_;
    ((struct Struct_ov017_021cf234_2*)(var5 + 8))->unknown_0_0_ = arg1->unknown_c_.unknown_0_0_;
    ((struct Struct_ov017_021cf234_2*)(var5 + 8))->unknown_1_2_ = arg1->unknown_c_.unknown_1_2_;
    ((struct Struct_ov017_021cf234_2*)(var5 + 8))->unknown_2_4_ = arg1->unknown_c_.unknown_2_4_;

    unsigned int var6 = (arg1->unknown_10_ << 20) >> 31;
    if (var6) {
        func_02083e28(var2, 0);
    }
}

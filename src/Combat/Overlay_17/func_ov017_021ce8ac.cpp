#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" void func_02083e28(void* arg0, int arg1);

struct Struct_02084a64 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int : 2;
};

struct Struct_ov017_021ce8ac {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 3;
    unsigned int unknown_1_5_ : 19;
};

struct Struct_ov017_021ce8ac_2 {
    char unknown_0_[4];
    Struct_02084a64 unknown_4_;
    Struct_02084a64 unknown_8_;
    Struct_02084a64 unknown_c_;
    Struct_ov017_021ce8ac unknown_10_;
};

// USA: func_ov017_021ce8ac
extern "C" ARM void func_ov017_021ce8ac(int arg0, Struct_ov017_021ce8ac_2* arg1, GameState* arg2) {
    GameObject* var0 = func_0200ff1c(arg2, arg1->unknown_10_.unknown_1_2_);
    if (!var0) return;
    unsigned char* var1 = (unsigned char*)func_02053c6c((unsigned char*)var0);
    if (!var1) return;
#if defined(jpn)
    Struct_02084a64* var2 = (Struct_02084a64*)(var1 + 0x884);
#else
    Struct_02084a64* var2 = (Struct_02084a64*)(var1 + 0x91c);
#endif
    var2[0].unknown_0_0_ = arg1->unknown_4_.unknown_0_0_;
    var2[0].unknown_1_2_ = arg1->unknown_4_.unknown_1_2_;
    var2[0].unknown_2_4_ = arg1->unknown_4_.unknown_2_4_;
    var2[1].unknown_0_0_ = arg1->unknown_8_.unknown_0_0_;
    var2[1].unknown_1_2_ = arg1->unknown_8_.unknown_1_2_;
    var2[1].unknown_2_4_ = arg1->unknown_8_.unknown_2_4_;
    var2[2].unknown_0_0_ = arg1->unknown_c_.unknown_0_0_;
    var2[2].unknown_1_2_ = arg1->unknown_c_.unknown_1_2_;
    var2[2].unknown_2_4_ = arg1->unknown_c_.unknown_2_4_;
    var2[3].unknown_0_0_ = arg1->unknown_10_.unknown_0_0_;
    func_02083e28(var1, 0);
}

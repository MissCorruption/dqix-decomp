#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

struct Struct_ov017_021d26a4 {
    unsigned char unknown_0_[4];
    unsigned char unknown_4_;
    unsigned char unknown_5_0_ : 1;
    unsigned char unknown_5_1_ : 1;
};

extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" void func_ov017_0218d4b8(unsigned char* arg0, int arg1);
extern "C" void func_ov017_0218d4d0(void* arg0, int arg1);
extern "C" void func_ov017_02191aac(void* arg0, int arg1, int arg2, unsigned char arg3);

// USA: func_ov017_021d26a4
extern "C" ARM void func_ov017_021d26a4(void* arg0, Struct_ov017_021d26a4* arg1, GameState* arg2, void* arg3) {
    int var0 = ((int)GetGameResources());
    GameObject* var1 = arg2->GetPartyMemberByIndex(arg1->unknown_4_);
    if (var1 == 0) {
        return;
    }
    unsigned char* var2 = (unsigned char*)func_02053c6c((unsigned char*)var1);
    if (var2 == 0) {
        return;
    }
    bool var3 = arg1->unknown_5_0_;
    var2[0x56c] = var3;
    if (var2[0x56c]) {
        func_ov017_02191aac(arg3, 1, arg1->unknown_4_, 2);
    }
    if (arg1->unknown_5_1_) {
        func_ov017_0218d4b8((unsigned char*)var0, arg1->unknown_4_);
    } else {
        func_ov017_0218d4d0((void*)var0, arg1->unknown_4_);
    }
}

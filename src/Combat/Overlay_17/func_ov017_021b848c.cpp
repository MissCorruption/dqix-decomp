#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

struct Struct_02018300_3;
struct Struct_02038598_4;

struct Struct_ov017_021b848c {
    unsigned char unknown_0_[0x8e49];
    unsigned char unknown_8e49_;
};

struct Struct_ov017_021b848c_2 {
    unsigned char unknown_0_[0x1c];
    unsigned char unknown_1c_[2];
    unsigned short unknown_1e_;
    unsigned char unknown_20_[4];
    unsigned short unknown_24_;
    unsigned char unknown_26_[2];
    int unknown_28_;
    unsigned char unknown_2c_[0x46 - 0x2c];
    unsigned char unknown_46_;
    unsigned char unknown_47_;
    int unknown_48_;
    unsigned char unknown_4c_[0x51 - 0x4c];
    unsigned char unknown_51_;
    unsigned char unknown_52_[0x6b0 - 0x52];
    Struct_ov017_021b848c* unknown_6b0_;
    unsigned short unknown_6b4_;
    unsigned char unknown_6b6_[2];
    int unknown_6b8_;
    unsigned char unknown_6bc_[0x6c6 - 0x6bc];
    unsigned char unknown_6c6_;
};

extern "C" int func_020421a0();
extern "C" int func_020100a8(GameState* arg0);
extern "C" void func_ov017_021c9c64(unsigned short arg0, unsigned char arg1);
extern "C" void func_ov017_021c8b78(unsigned short arg0);
extern "C" void* func_020d6c00(void);
extern "C" void func_020466f4(Struct_02038598_4* arg0, unsigned int arg1);
extern "C" void func_020466e4(unsigned int* arg0, unsigned int arg1);
extern "C" void func_020397cc(struct Struct_02018300_3* arg0, int arg1);
extern "C" void func_020a35cc(unsigned char* arg0, unsigned char arg1);
extern "C" int func_020a35e0(unsigned char* arg0, unsigned char arg1);
extern "C" void func_020c9be0(void);
extern "C" void func_ov017_021c3f70(unsigned short arg0);

// USA: func_ov017_021b848c
extern "C" ARM void func_ov017_021b848c(Struct_ov017_021b848c_2* arg0, signed char* arg1, int arg2, int arg3,
                                         unsigned short arg4, signed char arg5, int arg6, int arg7) {
    GameState* var0 = GameState::GetInstance();
    func_020421a0();
    unsigned short var1 = arg0->unknown_6b4_;
    if (var1 == 4 || var1 == 6 || var1 == 0) return;
    if (arg1[func_020100a8(var0)] == 0) return;

    int var2 = arg2 >= 0 && arg2 <= 3;
    if (!var2 || arg1[arg2] == 0 || var0->GetGameObjectByIndex(arg2) == NULL) {
        func_ov017_021c9c64(arg0->unknown_24_, 0);
        func_ov017_021c8b78(arg0->unknown_24_);
        arg0->unknown_6b4_ = 5;
        return;
    }

    void* var3 = func_020d6c00();
    func_020466f4((Struct_02038598_4*)var3, 0x200);
    func_020466e4((unsigned int*)var3, 0x40000);
    GameObject* var4 = var0->GetUnknownGameObject();
    if (var4 != NULL) {
        func_020397cc((struct Struct_02018300_3*)var4, 1);
        *(unsigned short*)((char*)var4 + 0xb2) = 0;
    }
    if (arg1[0] != 0 && var0->GetGameObjectByIndex(0) != NULL) {
        func_020a35cc(arg0->unknown_1c_, 0);
    }
    if (arg1[1] != 0 && var0->GetGameObjectByIndex(1) != NULL) {
        func_020a35cc(arg0->unknown_1c_, 1);
    }
    if (arg1[2] != 0 && var0->GetGameObjectByIndex(2) != NULL) {
        func_020a35cc(arg0->unknown_1c_, 2);
    }
    if (arg1[3] != 0 && var0->GetGameObjectByIndex(3) != NULL) {
        func_020a35cc(arg0->unknown_1c_, 3);
    }
    arg0->unknown_46_ = arg2;
    if (func_020a35e0(arg0->unknown_1c_, arg0->unknown_46_) == 0) func_020c9be0();
    if (arg3 == 0) func_020100a8(var0);
    arg0->unknown_48_ = arg3;
    arg0->unknown_1e_ = arg4;
    if (arg7 >= 0) arg0->unknown_28_ = arg7;
    if (arg5 > -1) {
        arg0->unknown_51_ = arg5;
        if (arg0->unknown_6b0_ != NULL) arg0->unknown_6b0_->unknown_8e49_ = arg5;
    }
    func_ov017_021c3f70(arg0->unknown_24_);
    if (arg2 != func_020100a8(var0)) {
        if (arg6 != 0) arg0->unknown_6c6_ = 1;
        arg0->unknown_6b8_ = 0;
        arg0->unknown_6b4_ = 4;
    } else {
        arg0->unknown_6b4_ = 6;
    }
}

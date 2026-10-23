#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"

extern "C" int func_02094a00(void);
extern "C" void func_02094ab0(void);
extern "C" void func_020397c0(void* arg0);
extern "C" void* func_020d6c00(void);

struct Struct_02038598_4;
extern "C" void func_020466f4(struct Struct_02038598_4* arg0, unsigned int arg1);

extern "C" int func_020100f8(char* arg0);
extern "C" void func_020a27ac(void* arg0);
extern "C" void func_020e1154(void* arg0);

struct Struct_020e455c {
    unsigned char unknown_0_0_ : 2;
    unsigned char unknown_0_2_ : 6;
};

struct Struct_020e455c_2 {
    char unknown_0_[0x1];
    unsigned char unknown_1_;
    char unknown_2_[0xc - 0x2];
    short unknown_c_;
};

// USA: func_020e455c
extern "C" ARM void func_020e455c(struct Struct_020e455c_2* arg0) {
    GameState* var0 = GameState::GetInstance();
    func_02094a00();
    func_02094ab0();
    GameObject* var1 = var0->GetUnknownGameObject();
    if (var1 != 0) {
        func_020397c0(var1);
    }
    func_020466f4((struct Struct_02038598_4*)func_020d6c00(), 2);

    unsigned int var2 = 0x1000000;
    int var3;
    for (var3 = 0; var3 < 4; var3++) {
        GameObject* var4 = var0->GetPartyMemberByIndex(var3);
        if (var4 != 0) {
            ((Object3D*)((unsigned char*)var4))->DisableFlag(var2);
            ((struct Struct_020e455c*)((char*)var4 + 0xc1))->unknown_0_0_ &= ~2;
        }
    }

    if (arg0->unknown_c_ >= 0) {
        int var5 = (int)BackgroundLoader::GetInstance();
        ((BackgroundLoader*)(var5))->RemoveTask((int)(arg0->unknown_c_));
        arg0->unknown_c_ = -1;
    }

    func_020a27ac((void*)func_020100f8((char*)var0));
    func_020e1154((void*)0x3e8);
    arg0->unknown_1_ = 1;
}

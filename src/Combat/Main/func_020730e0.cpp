#if defined(jpn)
enum { Enum_020730e0_340 = 0x148 };
#else
enum { Enum_020730e0_340 = 0x154 };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_020100a8(GameState* arg0);
extern "C" int func_02053c6c(unsigned char* arg0);

struct Struct_02052e2c;
extern "C" short* func_02052e2c(struct Struct_02052e2c* arg0);

extern "C" unsigned short (*func_02099cac(void))[2];

struct Struct_0206f81c;
extern "C" void* func_02083554(struct Struct_0206f81c* arg0, int arg1);

struct Struct_020730e0_2;
extern "C" int func_020de2a4(struct Struct_020730e0_2* arg0, int arg1, int arg2);

extern "C" void func_02072afc(int arg0, int* arg1, short* arg2);
extern "C" void func_02099d34(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_02099e18(void* arg0, int arg1, int arg2, int arg3);

struct Struct_020730e0_3 {
    unsigned char unknown_0_0_ : 1;
    unsigned char unknown_0_1_ : 3;
    unsigned char unknown_0_4_ : 4;
};
struct Struct_020730e0_4 {
    unsigned char unknown_0_0_ : 4;
    unsigned char unknown_0_4_ : 4;
};
struct Struct_020730e0 {
    unsigned char unknown_0_[0x14];
    struct Struct_020730e0_3 unknown_14_;
    struct Struct_020730e0_4 unknown_15_;
};

// USA: func_020730e0
extern "C" ARM void func_020730e0(int arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1;
    int var2;
    struct Struct_020730e0* var3;
    int var4;
    GameObject* var5;
    void* var6;
    int var7[11];
    short var8[12];

    if (arg0 < 0) {
        arg0 = func_020100a8(var0);
    }

    var1 = func_0200ff1c(var0, arg0);
    if (!var1 || *(int*)((char*)var1 + Enum_020730e0_340) == 0) {
        return;
    }

    var2 = func_02053c6c((unsigned char*)var1);
    if (var2 == 0) {
        return;
    }

    var3 = (struct Struct_020730e0*)func_02052e2c((struct Struct_02052e2c*)var1);
    func_02099cac();

    func_02072afc(arg0, var7, var8);
    if (var8[arg1] < 0) {
        return;
    }

    {
        void* var9 = func_02083554((struct Struct_0206f81c*)var2, var8[arg1]);
        if (!var9) {
            return;
        }
        var4 = func_020de2a4((struct Struct_020730e0_2*)var9, 1, var3->unknown_14_.unknown_0_0_);
    }

    var5 = var0->GetGameObjectByIndex(var7[arg1]);
    if (!var5) {
        return;
    }

    switch (arg1) {
        case 0:
        case 1:
        case 5:
        case 6:
        case 7:
            var6 = var5->obj3D_.pModel_;
            func_02099d34(var6, var4, var3->unknown_14_.unknown_0_1_, 4);
            break;
        case 4:
            var6 = var5->obj3D_.pModel_;
            func_02099d34(var6, var4, var3->unknown_14_.unknown_0_1_, 0x10);
            break;
        case 2:
            var6 = var5->obj3D_.pModel_;
            func_02099e18(var6, var3->unknown_14_.unknown_0_1_, var3->unknown_15_.unknown_0_0_, var3->unknown_14_.unknown_0_4_);
            break;
        default:
            break;
    }
}

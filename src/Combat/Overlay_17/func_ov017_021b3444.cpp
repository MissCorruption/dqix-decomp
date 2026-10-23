#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"

struct Struct_ov017_021b3444;
extern "C" unsigned char func_ov017_021b354c(Struct_ov017_021b3444* arg0);
extern "C" void func_02072afc(int arg0, int* arg1, short* arg2);

extern int data_020f2a38;
extern int data_020f2a30;

struct Struct_ov017_021b3444_2 {
    unsigned char unknown_0_[8];
    short unknown_8_;
    unsigned char unknown_a_;
    unsigned char unknown_b_;
    unsigned char unknown_c_[4];
    int unknown_10_;
};

// USA: func_ov017_021b3444
extern "C" ARM int func_ov017_021b3444(struct Struct_ov017_021b3444_2* arg0) {
    GameState* var0 = GameState::GetInstance();
    int var1 = (int)BackgroundLoader::GetInstance();
    GameObject* var2 = func_0200ff1c(var0, arg0->unknown_8_);
    if (var2 != 0) {
        if (func_ov017_021b354c((Struct_ov017_021b3444*)var2) != 0) {
#if defined(jpn)
            arg0->unknown_10_ = ((BackgroundLoader*)(var1))->QueueLoadGP1((const char*)(data_020f2a38), (SafeAllocator*)(0));
#else
            arg0->unknown_10_ = ((BackgroundLoader*)(var1))->QueueLoadFileInGP2((const char*)(data_020f2a38), (const char*)(data_020f2a30), (SafeAllocator*)(0));
#endif
            return 1;
        }
    }

    int var3[11];
    short var4[11];
    func_02072afc(arg0->unknown_8_, var3, var4);
    int var5 = arg0->unknown_b_ & 1;

    int var6;
    for (var6 = 0; var6 < 0xb; var6++) {
        GameObject* var7 = var0->GetGameObjectByIndex(var3[var6]);
        if (var7 == 0) {
            continue;
        }
        short* var8 = &var7->obj3D_.unknown_2_;
        if (var5) {
            *var8 = -1;
        }
        short var9 = var4[var6];
        short var10 = *var8;
        if (var9 == var10) {
            continue;
        }
#if defined(jpn)
        arg0->unknown_10_ = ((BackgroundLoader*)(var1))->QueueLoadGP1((const char*)(data_020f2a38), (SafeAllocator*)(0));
#else
        arg0->unknown_10_ = ((BackgroundLoader*)(var1))->QueueLoadFileInGP2((const char*)(data_020f2a38), (const char*)(data_020f2a30), (SafeAllocator*)(0));
#endif
        return 1;
    }
    return 0;
}

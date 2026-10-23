#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"

struct Struct_020288e0 {
    unsigned short unknown_0_;
    unsigned short unknown_2_0_ : 2;
    unsigned short unknown_2_2_ : 1;
    unsigned short unknown_2_3_ : 13;
    char unknown_4_[0xc];
    SafeAllocator* unknown_10_;
    SafeAllocator* unknown_14_;
#if defined(jpn)
    char unknown_18_[0x2fc];
#else
    char unknown1_18_[0x300];
#endif
};

struct Struct_020288e0_2 {
#if defined(jpn)
    char unknown_0_[0x150];
#else
    char unknown1_0_[0x15c];
#endif
    int unknown_15c_;
};

extern "C" GameObject* func_0200fee0(GameState* arg0, int arg1);
extern "C" int func_02053ed0(void* arg0);
extern "C" void func_0200fd48(GameState* arg0, int arg1);
extern "C" void func_020289c4(Struct_020288e0*);

// USA: func_020288e0
extern "C" ARM void func_020288e0(Struct_020288e0* arg0)
{
    GameState* var0 = GameState::GetInstance();
    for (int var1 = 0; var1 < 4; ++var1) {
        Struct_020288e0* var2 = &arg0[var1];
        int var3 = arg0[var1].unknown_0_;
        if (!var2->unknown_2_2_) continue;
        bool var4 = false;
        for (int var5 = 0; var5 < 4; ++var5) {
            GameObject* var6 = func_0200fee0(var0, var5);
            if (var6 == NULL) continue;
            if (!func_02053ed0(var6)) {
                if (((Object3D*)var6)->GetField06() != var3) continue;
            } else {
                if (var3 != ((Struct_020288e0_2*)var6)->unknown_15c_) continue;
            }
            var4 = true;
            break;
        }
        if (var4) continue;
        for (int var7 = 0; var7 < 12; ++var7) {
            func_0200fd48(var0, var7 + (var1 * 12 + 0x70));
        }
        func_020289c4(var2);
    }
}

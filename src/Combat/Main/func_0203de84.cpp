#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void* func_02012fe4(void);

struct Struct_0203de84 {
    unsigned int unknown_0_[3];
};
struct Struct_0203de84_2;
struct Struct_0203de84_3;
struct Struct_0203de84_4;

extern "C" void func_020406f8(struct Struct_0203de84* arg0, struct Struct_0203de84_2* arg1);
extern "C" int func_02040adc(struct Struct_0203de84_3* arg0);
extern "C" int func_02040910(struct Struct_0203de84_4* arg0, int arg1);
extern "C" void func_0208f87c(const void* arg0, int arg1, int arg2, int arg3, int arg4);

struct Struct_0203de84_5 {
#if defined(jpn)
    char unknown_0_[0x58];
#else
    char unknown1_0_[0x38];
#endif
    unsigned short unknown_38_;
    char unknown_3a_[2];
    int unknown_3c_;
};

struct Struct_0203de84_6 {
    unsigned int unknown_0_;
    char unknown_4_[0x10];
    void* unknown_14_;
    Object3D* unknown_18_;
};

struct Struct_0203de84_7 {
    char unknown_0_[0xc];
    struct Struct_0203de84_6* unknown_c_[0x20];
    char unknown_8c_[0x98 - 0x8c];
    struct Struct_0203de84_4* unknown_98_;
};

// USA: func_0203de84
extern "C" ARM void func_0203de84(void* arg0) {
    struct Struct_0203de84_7* var0 = (struct Struct_0203de84_7*)arg0;
    void* var1 = func_020100bc(GameState::GetInstance());
    GetGameResources();
    struct Struct_0203de84_5* var2 = (struct Struct_0203de84_5*)func_02012fe4();
    unsigned short var3 = var2->unknown_38_;
    int var4 = var2->unknown_3c_;
    struct Struct_0203de84 var5;
    int var6;
    for (var6 = 0; var6 < 0x20; var6++) {
        if (var0->unknown_c_[var6] == NULL) continue;
        unsigned int var7 = var0->unknown_c_[var6]->unknown_0_;
        if (var7 & 0x8000) continue;
        if (var0->unknown_98_ != NULL && !(var7 & 0x10000)) continue;
        if (!func_02040910((struct Struct_0203de84_4*)var0->unknown_c_[var6], (int)var1))
            continue;
        if (var7 & 0x20) continue;
        if (var7 & 0x40) continue;
        Object3D* var8 = var0->unknown_c_[var6]->unknown_18_;
        if (var8 != NULL && var8->GetFlag(0x10) != 0) continue;
        func_020406f8(&var5, (struct Struct_0203de84_2*)var0->unknown_c_[var6]);
        func_0208f87c(&var5, var3, 0x1000, var4,
            func_02040adc((struct Struct_0203de84_3*)var0->unknown_c_[var6]));
    }
}

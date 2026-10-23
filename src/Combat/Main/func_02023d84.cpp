#include <globaldefs.h>

#include "Combat/ActionDisplay.h"
#include "GameState/GameState.h"

struct Struct_02012de8;
extern "C" void *func_020d6c00();
extern "C" int func_02046708(Struct_02012de8 *arg0, unsigned int arg1);
extern "C" void func_0202756c(void *arg0, int arg1, int arg2, int arg3, unsigned char arg4, unsigned char arg5,
                              unsigned short arg6, unsigned char arg7, int arg8, int arg9);

struct Struct_020e7064 {
    int unknown_0_[4];
};

extern const Struct_020e7064 data_020e7064;

struct Struct_02023d84 {
    unsigned char unknown_0_[0x38];
    fix32_t unknown_38_;
#if defined(jpn)
    unsigned char unknown_3c_[0x914 - 0x3c];
#else
    unsigned char unknown1_3c_[0x9c0 - 0x3c];
#endif
    unsigned char unknown_9c0_;
};

struct Struct_02023d84_2 {
#if defined(jpn)
    unsigned char unknown_0_[0x1a6];
#else
    unsigned char unknown1_0_[0x1b2];
#endif
    unsigned short unknown_1b2_;
};

// USA: func_02023d84
extern "C" ARM void func_02023d84(void *arg0, Struct_020236dc *arg1, int arg2, int arg3, int arg4, int arg5,
                                  int arg6, int arg7) {
    Struct_02023d84 *var0 = static_cast<Struct_02023d84 *>(arg0);
    if (!var0->unknown_9c0_) return;
    Struct_020e7064 var1 = data_020e7064;
    unsigned char var2   = 0;
    GameState *var3                 = GameState::GetInstance();
    GameObject *var4         = var3->GetProtagonist();
    if (!var4) return;
    Struct_02012de8 *var5 = static_cast<Struct_02012de8 *>(func_020d6c00());
    for (int var6 = 0; var6 < 4; var6++) {
        GameObject *var7 = var3->GetPartyMemberByIndex(var6);
        if (!var7) continue;
        unsigned short var8 = reinterpret_cast<Struct_02023d84_2 *>(var7)->unknown_1b2_;
        if (!var8) continue;
        if (func_02046708(var5, 0x80000)) continue;
        if (var4->obj3D_.GetField06() != var7->obj3D_.GetField06()) continue;
        bool var9 = true;
        for (int var10 = 0; var10 < var2; var10++) {
            if (var8 == var1.unknown_0_[var10]) var9 = false;
        }
        if (!var9) continue;
        var1.unknown_0_[var2] = var8;
        var2++;
        Struct_020236dc *var11 = arg1;
        for (int var12 = 0; var12 < arg2; var12++, var11++) {
            if (var6 != var11->unknown_14_) continue;
            fix32_t var13 = var0->unknown_38_;
            int var14         = static_cast<int>(static_cast<float>(FIX32_MULTIPLY(var11->unknown_0_.x, var13)) / 4096.0f) - arg3;
            int var15         = static_cast<int>(static_cast<float>(FIX32_MULTIPLY(var11->unknown_0_.z, var13)) / 4096.0f) - arg4;
            if (arg7) {
                var15 = -(static_cast<int>(static_cast<float>(FIX32_MULTIPLY(var11->unknown_0_.y, var13)) / 4096.0f) - arg4);
            }
            func_0202756c(arg0, (var14 + arg5 - 1) << 12, (var15 + arg6 - 1) << 12, 8,
                                     static_cast<unsigned char>(var6 + 0x54), 0, 0xff, 0xff, 0x1000, 0x1000);
        }
    }
}

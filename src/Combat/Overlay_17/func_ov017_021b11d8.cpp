#include <globaldefs.h>
#include "Combat/SearchEntry.h"
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

struct Struct_0202b2f0;
struct Struct_0202c1a4;

struct Struct_0202b2f0 {
    char unknown_0_[0xfc0];
    int unknown_fc0_;
};

struct Struct_ov017_021b11d8 {
    char unknown_0_[6];
    signed char unknown_6_;
    unsigned char unknown_7_;
    unsigned char unknown_8_;
    signed char unknown_9_;
};

struct Struct_ov017_021b11d8_2 {
    unsigned char unknown_0_[1];
    unsigned char unknown_1_;
    unsigned char unknown_2_[6];
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    unsigned char unknown_a_;
    unsigned char unknown_b_;
    unsigned short unknown_c_;
};

extern "C" void* func_0202ae18(void);
extern "C" void func_ov017_021c37a4(void);
extern "C" void func_ov017_021d1118(int arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov017_021d1014(int arg0, int arg1, int arg2);
extern "C" void func_ov017_021d0b30(int arg0, int arg1, int arg2);
extern "C" void func_ov017_021d1810(int, int, signed char);
extern "C" int func_0202c660(Struct_0202b2f0* arg0, int arg1);
extern "C" int func_0202c1c0(Struct_0202b2f0* arg0, int arg1);
extern "C" int func_0202bd34(Struct_0202b2f0* arg0, int arg1);
extern "C" int func_0202c648(int* arg0);
extern "C" signed char func_0202c1a4(Struct_0202c1a4* arg0);
extern "C" int func_020100a8(GameState* arg0);
extern "C" int func_ov017_02195658(GameResources* arg0);

// USA: func_ov017_021b11d8
extern "C" ARM void func_ov017_021b11d8(void* arg0, void* arg1) {
    Struct_ov017_021b11d8_2* var0 = (Struct_ov017_021b11d8_2*)arg0;
    GameState* var1 = GameState::GetInstance();
    GameResources* var2 = GetGameResources();
    Struct_0202b2f0* var3 = (Struct_0202b2f0*)func_0202ae18();
    unsigned char var4 = var0->unknown_8_;
    if (var4 == 0) {
        var0->unknown_9_ = (unsigned char)func_0202c1a4((Struct_0202c1a4*)var3);
        var0->unknown_a_ = 0;
        for (int var5 = 0; var5 < 4; var5++) {
            if (var5 != var0->unknown_9_) {
                if (func_0202c1c0(var3, var5) != 0) {
                    var0->unknown_a_ |= (1 << var5);
                }
            }
        }
        func_ov017_021d1810(2, -1, (signed char)func_020100a8(var1));
        func_ov017_021d1118(-1, 1, 1, 2);
        func_ov017_021d1014(-1, 1, 0);
        var0->unknown_8_++;
        return;
    }
    if (var4 == 1) {
#if defined(jpn)
        Struct_ov017_021b11d8* var6 = (Struct_ov017_021b11d8*)((char*)GameState::GetInstance() + 0x7280);
#else
        Struct_ov017_021b11d8* var6 = (Struct_ov017_021b11d8*)((char*)GameState::GetInstance() + 0x74c0);
#endif
        for (int var7 = 0; var7 < 3; var7++, var6++) {
            if (var6->unknown_6_ < 4) {
                continue;
            }
            if (var6->unknown_7_ != 0 || var6->unknown_8_ != 0) {
                return;
            }
            if (var6->unknown_9_ >= 0) {
                return;
            }
        }
        var0->unknown_8_++;
        return;
    }
    if (var4 == 2) {
        func_ov017_021d0b30(9, 0, 0);
        func_0202c660(var3, 0);
        var0->unknown_8_++;
        return;
    }
    if (var4 != 3) {
        return;
    }
    if (func_0202c648((int*)var3) != 0) {
        goto done;
    }
    {
        int var8 = func_ov017_02195658(var2);
        if (var8 > 0) {
            var0->unknown_a_ &= ~(1 << var8);
        }
    }
    if (var3->unknown_fc0_ == 0) {
        for (int var9 = 1; var9 < 4; var9++) {
            if ((var0->unknown_a_ & (1 << var9)) != 0) {
                if (func_0202bd34(var3, var9) == 0) {
                    var0->unknown_a_ &= ~(1 << var9);
                }
            }
        }
    }
    for (int var10 = 0; var10 < 4; var10++) {
        if ((var0->unknown_a_ & (1 << var10)) != 0) {
            Struct_0202b2f0_2* var11 = func_0202c178(var3, var10);
            if (var11 == 0) {
                continue;
            }
            int var12 = 1 << var0->unknown_9_;
            unsigned short var13 = var11->unknown_2_1_;
            if ((var13 & var12) != 0) {
                return;
            }
        }
    }
    if (var0->unknown_c_ >= 0x3e8) {
        goto done;
    }
    if (var3->unknown_fc0_ != 0) {
        return;
    }
    var0->unknown_c_ += var1->GetEffectiveDeltaTime();
    return;
done:
    func_ov017_021c37a4();
    var0->unknown_1_ = 1;
}

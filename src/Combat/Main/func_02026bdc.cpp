#include <globaldefs.h>

#include "Combat/CombatantRecovery.h"
#include "GameState/GameState.h"
#include "World/Object3D.h"
#include "World/Zone3D.h"
#include "Resource/GameResources.h"

extern "C" void *func_02012fe4(void);
struct Struct_02053f4c;
extern "C" void func_02053f4c(Struct_020236dc_2*, int, int);
extern "C" void func_02053f6c(void *, unsigned char);
extern "C" int func_0201b5d8(int);

struct Struct_02021f88 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    short *unknown_4_;
    int unknown_8_;
    int unknown_c_;
    struct Struct_02021f88 *unknown_10_;
};

struct Struct_02026bdc {
#if defined(jpn)
    char unknown_0_[0x6a8];
#else
    char unknown1_0_[0x754];
#endif
    Struct_02021f88 *unknown_754_;
#if defined(jpn)
    char unknown_6ac_[0x9ca - 0x6ac];
#else
    char unknown_758_[0xa96 - 0x758];
#endif
    unsigned char unknown_a96_;
};

// USA: func_02026bdc
extern "C" ARM void func_02026bdc(void *arg0, int arg1) {
    Struct_02026bdc *var0 = static_cast<Struct_02026bdc *>(arg0);
    GameState *var1             = GameState::GetInstance();
    for (int var2 = 0; var2 < 4; var2++) {
        if (var1->GetGameObjectByIndex(var2) == 0) {
            continue;
        }
        if ((var0->unknown_a96_ & (1 << var2)) == 0) {
            continue;
        }
        GetGameResources();
        Struct_020236dc_2 *var3 = static_cast<Struct_020236dc_2 *>(func_0200ff1c(var1, var2));
        if (var3 == 0) {
            continue;
        }
        Zone3D *var4 = static_cast<Zone3D *>(func_02012fe4());
        if (&var4->substruct_c_ == 0 || var4->pUnknownStruct_8_ == 0) {
            return;
        }
        if ((var3->obj3D_.unknown_0_ & 0x1000) != 0) {
            if (var4->currentZoneID_ == 10000 || var4->currentZoneID_ == 10100) {
                var3->unknown_18c_ &= ~8;
                continue;
            }
        }
        Struct_02021f88 *var5;
        int var6 = 0;
        if (arg1 != 0) {
            var0->unknown_a96_ &= ~(1 << var2);
        }
        var5      = var0->unknown_754_;
        int var7 = var3->obj3D_.GetField06();
        if (var4->currentZoneID_ == 10000 || var4->currentZoneID_ == 10100) {
            if (var7 < 20000 || var7 > 29999) {
                var7 = var7 / 100 * 100;
            }
            while (var5 != 0 && var6 == 0) {
                for (int var8 = 0; var8 < var5->unknown_2_ && var6 == 0; var8++) {
                    int var9 = static_cast<unsigned short>(var5->unknown_4_[var8]);
                    if (var9 < 20000 || var9 > 29999) {
                        var9 = var9 / 100 * 100;
                    }
                    if (var9 == var7) {
                        var3->unknown_18c_ |= 8;
                        if (var5->unknown_0_ == 0) {
                            var3->unknown_18c_ &= ~0x10;
                        } else {
                            var3->unknown_18c_ |= 0x10;
                            func_02053f4c(var3, var5->unknown_8_, var5->unknown_c_);
                            func_02053f6c(var3, var5->unknown_1_);
                        }
                        var6 = 1;
                    }
                }
                var5 = var5->unknown_10_;
            }
        } else if (func_0201b5d8(var7) != 0) {
            GameObject *var10 = var1->GetUnknownGameObject();
            if (var10 != 0) {
                int var11 = var10->obj3D_.GetField06();
                if (var11 == var7) {
                    var3->unknown_18c_ |= 8;
                    var3->unknown_18c_ &= ~0x10;
                    var6 = 1;
                }
            }
        } else {
            while (var5 != 0 && var6 == 0) {
                for (int var12 = 0; var12 < var5->unknown_2_ && var6 == 0; var12++) {
                    if (var7 == static_cast<unsigned short>(var5->unknown_4_[var12])) {
                        var3->unknown_18c_ |= 8;
                        if (var5->unknown_0_ == 0) {
                            var3->unknown_18c_ &= ~0x10;
                        } else {
                            var3->unknown_18c_ |= 0x10;
                            func_02053f4c(var3, var5->unknown_8_, var5->unknown_c_);
                            func_02053f6c(var3, var5->unknown_1_);
                        }
                        var6 = 1;
                    }
                }
                var5 = var5->unknown_10_;
            }
        }
        if (var6 == 0) {
            var3->unknown_18c_ &= ~8;
        }
    }
}

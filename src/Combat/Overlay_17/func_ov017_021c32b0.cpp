#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"
#include "Resource/GameResources.h"

struct Struct_ov017_021c32b0 { unsigned char unknown_0_, unknown_1_; };
struct Struct_ov017_021c32b0_2 { signed char unknown_0_[11]; };
struct Struct_ov017_021c32b0_3 {
#if defined(jpn)
    unsigned char unknown_0_[0x41ac];
#else
    unsigned char unknown1_0_[0x445c];
#endif
    Struct_ov017_021c32b0_2 unknown_445c_[4];
};
struct Struct_ov017_021c32b0_4 { GameObject* unknown_0_; GameObject* unknown_4_[9]; };
struct Struct_ov017_021c32b0_5 { unsigned short unknown_0_; };
struct Struct_ov017_021c32b0_6 {
#if defined(jpn)
    unsigned char unknown_0_[0x148];
#else
    unsigned char unknown1_0_[0x154];
#endif
    Struct_ov017_021c32b0_5* unknown_154_;
};
struct Struct_ov017_021c32b0_7 { char unknown_0_[0x568]; unsigned short unknown_568_; };
extern "C" void func_0200fd48(GameState*, int);
extern "C" void func_0200fd38(GameState*, int, GameObject*);
extern "C" Struct_ov017_021c32b0_7* func_02053c6c(unsigned char*);

// USA: func_ov017_021c32b0
extern "C" ARM void func_ov017_021c32b0(Struct_ov017_021c32b0* arg0, int arg1) {
    Struct_ov017_021c32b0_4 var0[4];
    Struct_ov017_021c32b0_2 var1[4];
    Struct_ov017_021c32b0_3* var2;
    GameState* var3;
    var3 = GameState::GetInstance();
    var2 = (Struct_ov017_021c32b0_3*)GetGameResources();
    int var4 = 0;
    while (var4 < arg1) {
        unsigned char var5 = arg0[var4].unknown_0_;
        var0[var4].unknown_0_ = var3->GetGameObjectByIndex(var5);
        func_0200fd48(var3, var5);
        var0[var4].unknown_4_[0] = var3->GetGameObjectByIndex(var5 * 12 + 0x13);
        func_0200fd48(var3, var5 * 12 + 0x13);
        var0[var4].unknown_4_[1] = var3->GetGameObjectByIndex(var5 * 12 + 0x14);
        func_0200fd48(var3, var5 * 12 + 0x14);
        var0[var4].unknown_4_[2] = var3->GetGameObjectByIndex(var5 * 12 + 0x15);
        func_0200fd48(var3, var5 * 12 + 0x15);
        var0[var4].unknown_4_[3] = var3->GetGameObjectByIndex(var5 * 12 + 0x16);
        func_0200fd48(var3, var5 * 12 + 0x16);
        var0[var4].unknown_4_[4] = var3->GetGameObjectByIndex(var5 * 12 + 0x17);
        func_0200fd48(var3, var5 * 12 + 0x17);
        var0[var4].unknown_4_[5] = var3->GetGameObjectByIndex(var5 * 12 + 0x19);
        func_0200fd48(var3, var5 * 12 + 0x19);
        var0[var4].unknown_4_[6] = var3->GetGameObjectByIndex(var5 * 12 + 0x1b);
        func_0200fd48(var3, var5 * 12 + 0x1b);
        var0[var4].unknown_4_[7] = var3->GetGameObjectByIndex(var5 * 12 + 0x1c);
        func_0200fd48(var3, var5 * 12 + 0x1c);
        var0[var4].unknown_4_[8] = var3->GetGameObjectByIndex(var5 * 12 + 0x1d);
        func_0200fd48(var3, var5 * 12 + 0x1d);
        memcpy(&var1[var4], &var2->unknown_445c_[var5], sizeof(Struct_ov017_021c32b0_2));
        var4++;
    }
    int var6 = 0;
    while (var6 < arg1) {
        int var7 = arg0[var6].unknown_1_;
        func_0200fd38(var3, var7, var0[var6].unknown_0_);
        func_0200fd38(var3, var7 * 12 + 0x13, var0[var6].unknown_4_[0]);
        func_0200fd38(var3, var7 * 12 + 0x14, var0[var6].unknown_4_[1]);
        func_0200fd38(var3, var7 * 12 + 0x15, var0[var6].unknown_4_[2]);
        func_0200fd38(var3, var7 * 12 + 0x16, var0[var6].unknown_4_[3]);
        func_0200fd38(var3, var7 * 12 + 0x17, var0[var6].unknown_4_[4]);
        func_0200fd38(var3, var7 * 12 + 0x19, var0[var6].unknown_4_[5]);
        func_0200fd38(var3, var7 * 12 + 0x1b, var0[var6].unknown_4_[6]);
        func_0200fd38(var3, var7 * 12 + 0x1c, var0[var6].unknown_4_[7]);
        func_0200fd38(var3, var7 * 12 + 0x1d, var0[var6].unknown_4_[8]);
        Struct_ov017_021c32b0_6* var8 = (Struct_ov017_021c32b0_6*)func_0200ff1c(var3, var7);
        if (var8) {
            Struct_ov017_021c32b0_7* var9 = func_02053c6c((unsigned char*)var8);
            if (var9) var9->unknown_568_ = var7;
            if (var8->unknown_154_) var8->unknown_154_->unknown_0_ = var7;
        }
        memcpy(&var2->unknown_445c_[var7], &var1[var6], sizeof(Struct_ov017_021c32b0_2));
        var6++;
    }
}

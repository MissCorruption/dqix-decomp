#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

struct Struct_0205faf4_11;

struct Struct_ov001_02161ab8 {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
};

struct Struct_ov001_02161ab8_2 {
    unsigned char unknown_0_[0x56b];
    unsigned char unknown_56b_0_ : 4;
    unsigned char unknown_56b_4_ : 4;
};

struct Struct_ov001_02161ab8_3 {
    unsigned short unknown_0_;
    short unknown_2_;
    short unknown_4_;
    char unknown_6_[0x130 - 0x6];
    Struct_ov001_02161ab8* unknown_130_;
    #if defined(jpn)
    char unknown_134_[0x144 - 0x134];
#else
    char unknown1_134_[0x150 - 0x134];
#endif
    Struct_ov001_02161ab8_2* unknown_150_;
};

struct Struct_ov001_02161ab8_4 {
    unsigned char unknown_0_0_ : 4;
    unsigned char unknown_0_4_ : 4;
    unsigned char unknown_1_;
    short unknown_2_;
    char unknown_4_[0x34 - 0x4];
    Struct_ov001_02161ab8_4* unknown_34_;
};

struct Struct_ov001_02161ab8_5 {
    #if defined(jpn)
    char unknown_0_[0xcc];
#else
    char unknown1_0_[0xd0];
#endif
    Struct_ov001_02161ab8_4* unknown_d0_;
};

extern "C" int func_ov017_021d60f4(void* arg0);
extern "C" void func_ov017_021d6134(void* arg0, int arg1);
extern "C" GameObject* func_0200ff58(GameState* arg0, int arg1);
extern "C" int func_02061bd8(Struct_0205faf4_11* arg0);

static inline int inline_ov000_0215a908_2(Struct_ov001_02161ab8* arg0) { return arg0->unknown_4_; }

// USA: func_ov001_02161ab8
extern "C" ARM int func_ov001_02161ab8(char* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    Struct_ov001_02161ab8_5* var1 = (Struct_ov001_02161ab8_5*)GetGameResources()->unknown_ptr_array_371c[6];
    int var2 = func_ov017_021d60f4(arg0);
    Struct_ov001_02161ab8_4* var3;
    for (var3 = var1->unknown_d0_; var3 != NULL; var3 = var3->unknown_34_) {
        if (var3->unknown_1_ == var2) break;
    }
    if (var3 == NULL) {
        func_ov017_021d6134(arg0 + 8, -1);
        func_ov017_021d6134(arg0 + 0x10, 2);
        return 1;
    }
    int var4;
    int var5;
    int var6;
    var6 = -1;
    var5 = var3->unknown_0_4_;
    if (var5 == 0) {
        func_ov017_021d6134(arg0 + 8, var5);
        func_ov017_021d6134(arg0 + 0x10, 0);
        return 1;
    }
    if (var3->unknown_0_0_ == 10) {
        Struct_ov001_02161ab8_3* var7 = (Struct_ov001_02161ab8_3*)func_0200ff58(var0, 0xce);
        if (var7 != NULL) {
            var4 = 0;
        } else {
            int var8;
            for (var8 = 0; var8 < 4; var8++) {
                var7 = (Struct_ov001_02161ab8_3*)func_0200ff58(var0, var8);
                if (var7 != NULL && func_02061bd8((Struct_0205faf4_11*)var7)) break;
            }
            if (var8 == 4) {
                func_ov017_021d6134(arg0 + 8, var5);
                func_ov017_021d6134(arg0 + 0x10, 2);
                return 1;
            }
            var4 = inline_ov000_0215a908_2(var7->unknown_130_) <= 0 ? 1 : 0;
        }
    } else {
        Struct_ov001_02161ab8_3* var9 = (Struct_ov001_02161ab8_3*)func_0200ff1c(var0, var3->unknown_2_);
        if (var9 == NULL) return 0;
        var6 = var3->unknown_2_;
        Struct_ov001_02161ab8_2* var10 = var9->unknown_150_;
        int var11;
        if (var10 != NULL) {
            var11 = var10->unknown_56b_4_ != 0;
        } else {
            var11 = 0;
        }
        if (var11) {
            var5 = (var10 != NULL ? var10->unknown_56b_4_ : 0) + 7;
        } else if (!(var9->unknown_0_ & 0x1000) && var9->unknown_4_ > 0 && var9->unknown_4_ < 4) {
            var5 = 14;
        }
        if (var9 != NULL) {
            Struct_ov001_02161ab8* var12 = var9->unknown_130_;
            if (inline_ov000_0215a908_2(var12) <= 0 && (var12->unknown_0_ & 1)) {
                var4 = 1;
            } else {
                var4 = 0;
            }
        } else {
            var4 = 2;
        }
    }
    func_ov017_021d6134(arg0 + 8, var5);
    func_ov017_021d6134(arg0 + 0x10, var4);
    if (arg1 > 3) {
        func_ov017_021d6134(arg0 + 0x18, var6);
    }
    return 1;
}

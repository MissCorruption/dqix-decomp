#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02048150;

extern "C" int *func_0202ae18(void);
extern "C" int func_02086ef0(Struct_02048150 *arg0, int arg1);
extern "C" int func_0202b7d8(int *arg0);
extern "C" int func_ov002_02154a34(void *arg0, int arg1);
extern "C" int func_ov002_02154b94(void *arg0, int arg1);
extern "C" void *func_02079ee0(void *arg0, int arg1);

struct Struct_ov002_02153ccc {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
};

struct Struct_ov002_02153ccc_2 {
    short unknown_0_;
    signed char unknown_2_;
    unsigned char unknown_3_;
    signed char unknown_4_[4];
    Struct_ov002_02153ccc unknown_8_[4];
    Struct_ov002_02153ccc unknown_20_[4];
};

struct Struct_ov002_02153ccc_3 {
    unsigned char unknown_0_[8];
    unsigned int unknown_8_0_ : 14;
    unsigned int unknown_9_6_ : 8;
    unsigned int unknown_a_6_ : 10;
};

extern "C" void func_ov002_02153e90(Struct_ov002_02153ccc *arg0);
extern "C" int func_ov002_02154a6c(void *arg0, int arg1, int arg2);
extern "C" int func_ov002_021538e4(void *arg0, Struct_ov002_02153ccc_3 *arg1, void *arg2, int arg3);
extern "C" unsigned short func_ov002_021548c4(void *arg0, int arg1, int arg2, Struct_ov002_02153ccc *arg3);
extern "C" void func_ov017_021c9e00(int arg0, int arg1, int arg2, int arg3);

// USA: func_ov002_02153ccc
extern "C" ARM int func_ov002_02153ccc(void **arg0, Struct_ov002_02153ccc_2 *arg1, Struct_ov002_02153ccc_3 *arg2, int arg3) {
    if (arg1 == 0) return 0;
    if (arg2 == 0) return 0;
    Struct_02048150 *var0 = (Struct_02048150 *)func_02010828(GameState::GetInstance());
    int *var1                         = func_0202ae18();
    Struct_ov002_02153ccc *var2         = arg1->unknown_8_;
    int var3                    = 0;
    if (arg3) var2 = arg1->unknown_20_;
    for (int var4 = 0; var4 < 4; var4++) {
        func_ov002_02153e90(&var2[var4]);
    }
    for (int var5 = 0; var5 < arg1->unknown_3_; var5++) {
        Struct_ov002_02153ccc *var6 = &var2[var5];
        int var7           = arg1->unknown_4_[var5];
        int var8;
        if (!func_02086ef0(var0, var7)) var6->unknown_4_ = 1;
        if (!func_ov002_02154a6c(arg0, var7, arg1->unknown_2_)) {
            var6->unknown_0_ = 1;
            continue;
        }
        if (func_ov002_02154b94(arg0, var7)) {
            var6->unknown_0_ = 2;
            continue;
        }
        if (!func_ov002_02154a34(arg0, var7)) continue;
        if (arg1->unknown_0_ == 0x21) {
            var8 = 999;
        } else {
            void *var9 = func_02079ee0(*arg0, arg2->unknown_9_6_);
            if (var9 == 0) continue;
            var8 = func_ov002_021538e4(arg0, arg2, var9, arg1->unknown_2_);
        }
        if (var6->unknown_4_) {
            var6->unknown_2_ = var8;
            var6->unknown_0_ = 3;
        } else {
            var6->unknown_2_ = func_ov002_021548c4(arg0, var7, var8, var6);
        }
        if (var6->unknown_0_ == 0) continue;
        if (func_0202b7d8(var1) && func_02086ef0(var0, var7)) {
            func_ov017_021c9e00(var7, 0, 0, 1);
        }
        var3 = 1;
    }
    return var3;
}

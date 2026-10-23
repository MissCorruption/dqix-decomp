#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "Util/Random.h"

struct Struct_ov024_021e5c7c {
    unsigned char unknown_0_[0x8e02];
    unsigned char unknown_8e02_;
};
struct Struct_ov024_021e5c7c_2 {
    unsigned char unknown_0_[0x1b];
    unsigned char unknown_1b_;
};
struct Struct_ov024_021e5c7c_3 {
    unsigned char unknown_0_[8];
    void* unknown_8_;
    Struct_ov024_021e5c7c_2* unknown_c_;
    Struct_ov024_021e5c7c* unknown_10_;
};
struct Struct_ov024_021e5c7c_4 {
    unsigned char unknown_0_[0xf6c];
    unsigned int unknown_f6c_;
};
struct Struct_ov024_021e5c7c_5 {
    unsigned char unknown_0_[0xc];
    unsigned short unknown_c_;
};
struct Struct_ov024_021e5c7c_6 : GameObject {
    unsigned char unknown_13c_[0xc];
    Struct_ov024_021e5c7c_5* unknown_148_;
};
extern "C" GameObject* func_ov000_021536f8(int, int);
extern "C" void* func_ov000_0215e958(void*);
extern "C" int func_ov000_0215ffa0(void*);
extern "C" int func_ov000_0215fd24(int, int);
extern "C" void func_ov000_0215a88c(void*, void*, int);
extern "C" void func_ov000_0215cd44(void*, void*, GameObject*, int, int, int, int);
extern "C" void func_ov000_0215fe84(void*, void*, int);
static inline int inline_ov000_02169850(int arg0) { return arg0 >= 0 && arg0 <= 3; }

// USA: func_ov024_021e5c7c
extern "C" ARM void func_ov024_021e5c7c(Struct_ov024_021e5c7c_3* arg0, int arg1, int arg2, int arg3) {
    if (arg3 <= 0) return;
    GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg1);
    if (!var0) return;
    if ((int)(float)NextRandomMax((Random*)arg0->unknown_10_, 2) <= 0) return;
    void* var1 = func_ov000_0215e958(arg0->unknown_10_);
    if (!var1) return;
    Struct_ov024_021e5c7c_4* var2 = (Struct_ov024_021e5c7c_4*)func_02010828(GameState::GetInstance());
    int var3;
    int var4;
    Struct_ov024_021e5c7c_2* var5 = arg0->unknown_c_;
    if (!var5) return;
    var3 = func_ov000_0215ffa0(var5);
    if (inline_ov000_02169850(var3)) return;
    var4 = 0;
    if (inline_ov000_02169850(arg1)) {
        Struct_ov024_021e5c7c_6* var6 = (Struct_ov024_021e5c7c_6*)func_ov000_021536f8((int)arg0->unknown_10_, var3);
        if (var6) {
            var4 = (int)(0.1f * (float)(unsigned int)var6->unknown_148_->unknown_c_);
            if (var4 > 100) var4 = 100;
            if (var4 > 0) {
                if (func_ov000_0215fd24((int)arg0->unknown_10_, arg1)) {
                    unsigned int var7 = var2->unknown_f6c_ + var4;
                    if (var7 > 9999999) var2->unknown_f6c_ = 9999999;
                    else var2->unknown_f6c_ = var7;
                }
                var5->unknown_1b_ = var4;
                func_ov000_0215a88c(arg0->unknown_10_, var1, 0x172);
            }
        }
    } else {
        var4 = (int)(0.1f * (float)var2->unknown_f6c_);
        if (var4 > 100) var4 = 100;
        if (var4 > 0) {
            if (func_ov000_0215fd24((int)arg0->unknown_10_, var3)) var2->unknown_f6c_ -= var4;
            var5->unknown_1b_ = var4;
            func_ov000_0215a88c(arg0->unknown_10_, var1, 0x172);
        }
    }
    if (var4 > 0) {
        func_ov000_0215cd44(arg0->unknown_10_, var1, var0, (short)var4, 0, 0, 0);
        func_ov000_0215fe84(arg0->unknown_8_, var1, 2);
        arg0->unknown_10_->unknown_8e02_++;
    }
}

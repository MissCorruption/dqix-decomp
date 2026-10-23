#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

extern "C" void func_ov024_021ea85c(void* arg0, int arg1, int arg2);
extern "C" void func_ov000_02159eac(void* arg0, void* arg1, int arg2);
extern "C" void* func_ov000_0215e958(void* arg0);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, unsigned long long arg4, int arg5);

struct Struct_ov024_021e02b0 {
    unsigned char unknown_0_0_ : 7;
    unsigned char unknown_0_7_ : 1;
};

struct Struct_ov024_021e02b0_2 {
    char unknown_0_[0xc];
    void* unknown_c_;
    void* unknown_10_;
    int unknown_14_;
    char unknown_18_[0x44 - 0x18];
    short unknown_44_;
};

// USA: func_ov024_021e02b0
extern "C" ARM void* func_ov024_021e02b0(struct Struct_ov024_021e02b0_2* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, unsigned char arg6) {
    GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
    if (!var0) return 0;
    union { struct { int unknown_0_; int unknown_4_; }; unsigned long long unknown1_0_; } var1;
    var1.unknown_0_ = 0;
    var1.unknown_4_ = 0;
    if (arg6) {
        func_ov024_021ea85c(arg0, arg2, 0);
        func_ov000_02159eac(arg0->unknown_10_, &var1, 0x28);
        arg0->unknown_14_++;
        if (arg0->unknown_44_ < 0) {
            arg0->unknown_44_ = arg2;
        }
    }
    void* var2 = func_ov000_0215e958(arg0->unknown_10_);
    if (!var2) return 0;
    struct Struct_ov024_021e02b0* var3 = (struct Struct_ov024_021e02b0*)((char*)arg0->unknown_c_ + 0x1c);
    func_ov000_0215cd44(arg0->unknown_10_, var2, var0, 0, var1.unknown1_0_, var3->unknown_0_7_ != 0);
    return var2;
}

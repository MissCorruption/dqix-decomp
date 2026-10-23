#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"
#include "Util/Random.h"

struct Struct_ov024_021dd828;
struct Struct_ov024_021e2bd0;
extern "C" int func_020883ac(unsigned char* arg0);
extern "C" int func_ov024_021e9320(struct Struct_ov024_021dd828* arg0, int arg1, int arg2);
extern "C" int func_ov024_021eb4b0(int arg0, int arg1, int arg2);
extern "C" void func_020883cc(unsigned char* arg0);
extern "C" void* func_ov024_021e8ca0(struct Struct_ov024_021e2bd0* arg0, int arg1);
extern "C" void func_ov000_02159eac(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, unsigned long long arg4, int arg5);

struct Struct_ov024_021e386c_3 {
    char unknown_0_[0x14];
    int unknown_14_;
    char unknown_18_[0x4a - 0x18];
    unsigned char unknown_4a_;
};
struct Struct_ov024_021e386c_4 {
    unsigned int unknown_0_0_ : 7;
    unsigned int unknown_0_7_ : 7;
    unsigned int unknown_1_6_ : 18;
};
struct Struct_ov024_021e386c_5 {
    char unknown_0_[0x14];
    struct Struct_ov024_021e386c_4 unknown_14_;
};
struct Struct_ov024_021e386c { char unknown_0_[0x1c]; unsigned char unknown_1c_0_ : 7; unsigned char unknown_1c_7_ : 1; };
struct Struct_ov024_021e386c_2 {
    char unknown_0_[0xc];
    struct Struct_ov024_021e386c* unknown_c_;
    void* unknown_10_;
};

static inline struct Struct_ov024_021e386c_3* inline_ov000_0215a908_5(GameObject* arg0) {
    return (struct Struct_ov024_021e386c_3*)arg0->currentStats_;
}

static inline int inline_ov024_021ddf5c(int arg0) {
    return arg0 >= 0 && arg0 <= 3;
}

// USA: func_ov024_021e386c
extern "C" ARM unsigned long long func_ov024_021e386c(struct Struct_ov024_021e386c_2* arg0, int arg1, int arg2, struct Struct_ov024_021e386c_5* arg3, int arg4) {
    if (arg4 <= 0) return 0;
    GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
    if (!var0) return 0;
    if (inline_ov000_0215a908_5(var0)->unknown_4a_ == 0) return 0;
    if (!func_020883ac((unsigned char*)inline_ov000_0215a908_5(var0))) return 0;
    int var1 = NextRandomMax((struct Random*)arg0->unknown_10_, 100);
    float var2 = 100.0f;
    if (!arg0->unknown_c_->unknown_1c_7_) {
        if (inline_ov024_021ddf5c(arg1)) var2 = arg3->unknown_14_.unknown_0_7_;
        else var2 = arg3->unknown_14_.unknown_0_0_;
        var2 = var2 * (inline_ov000_0215a908_5(var0)->unknown_4a_ / 100.0f);
    }
    if (var1 >= var2) return 0;
    int var3 = func_ov024_021e9320((struct Struct_ov024_021dd828*)arg0, arg2, 1);
    union { struct { int unknown_0_; int unknown_4_; }; unsigned long long unknown1_0_; } var4;
    var4.unknown_0_ = 0;
    var4.unknown_4_ = 0;
    if (func_ov024_021eb4b0((int)arg0, inline_ov000_0215a908_5(var0)->unknown_14_, 0x20)) {
        func_ov000_02159eac(arg0->unknown_10_, &var4, 0x2b);
    }
    func_020883cc((unsigned char*)inline_ov000_0215a908_5(var0));
    func_ov000_02159eac(arg0->unknown_10_, &var4, 0x17);
    void* var5 = func_ov024_021e8ca0((struct Struct_ov024_021e2bd0*)arg0, var3);
    if (var5) {
        func_ov000_0215cd44(arg0->unknown_10_, var5, var0, 0, 0, 0);
    }
    return var4.unknown1_0_;
}

#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"
#include "Util/Random.h"

struct Struct_ov024_021e4604;

extern "C" int func_ov000_02156068(void* arg0, int arg1, int arg2, int arg3);
extern "C" int func_ov024_021e47dc(struct Struct_ov024_021e4604* arg0);
extern "C" void func_02088b34(unsigned char* arg0);
extern "C" void func_ov000_0215a004(void* arg0, int arg1, int arg2, int arg3, void* arg4, int arg5, int arg6, int arg7);
extern "C" void func_ov000_02159eac(void* arg0, void* arg1, int arg2);

struct Struct_ov024_021e4604_2 {
    char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 7;
    unsigned char unknown_1c_7_ : 1;
};

struct Struct_ov024_021e4604_3 {
    char unknown_0_[0xc];
    struct Struct_ov024_021e4604_2* unknown_c_;
    void* unknown_10_;
};

struct Struct_ov024_021e4604_4 {
    char unknown_0_[0x48];
    unsigned char unknown_48_;
};

static inline unsigned short inline_ov024_021dc540(GameObject* arg0) { SDK_NULL_ASSERT(arg0); return arg0->currentStats_->primaryStats.currHP; }

// USA: func_ov024_021e4604
extern "C" ARM unsigned long long func_ov024_021e4604(struct Struct_ov024_021e4604_3* arg0, int arg1, int arg2, int arg3) {
    GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
    if (!func_ov000_02156068(arg0->unknown_10_, arg2, 0, 1)) {
        if ((int)((struct Struct_ov024_021e4604_4*)var0->currentStats_)->unknown_48_ <= 0) return 0;
    }
    int var1 = NextRandomMax((struct Random*)arg0->unknown_10_, 100);
    float var2 = 12.5f;
    if (!func_ov000_02156068(arg0->unknown_10_, arg2, 0, 1)) {
        var2 = var2 * ((int)((struct Struct_ov024_021e4604_4*)var0->currentStats_)->unknown_48_ / 100.0f);
    }
    if (arg0->unknown_c_->unknown_1c_7_) var2 = 100.0f;
    if (var1 >= var2) return 0;
    union { struct { int unknown_0_; int unknown_4_; }; unsigned long long unknown1_0_; } var3;
    var3.unknown_0_ = 0;
    var3.unknown_4_ = 0;
    if (func_ov024_021e47dc((struct Struct_ov024_021e4604*)var0)) {
        func_02088b34((unsigned char*)var0->currentStats_);
        func_ov000_0215a004(arg0->unknown_10_, arg1, arg2, inline_ov024_021dc540(var0) - 1, &var3, arg3, arg0->unknown_c_->unknown_1c_7_ != 0, 0);
        func_ov000_02159eac(arg0->unknown_10_, &var3, 0x29);
    } else {
        func_ov000_0215a004(arg0->unknown_10_, arg1, arg2, 0xffff, &var3, arg3, arg0->unknown_c_->unknown_1c_7_ != 0, 8);
        var3.unknown_0_ = 0;
        var3.unknown_4_ = 0;
        func_ov000_02159eac(arg0->unknown_10_, &var3, 0xd);
    }
    return var3.unknown1_0_;
}

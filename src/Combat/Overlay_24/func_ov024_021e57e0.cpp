#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct Struct_ov024_021e57e0 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 20;
};

struct Struct_ov024_021e57e0_2 {
    char unknown_0_[4];
    struct Struct_ov024_021e57e0 unknown_4_;
};

struct Struct_ov024_021e57e0_3 {
    char unknown_0_[0x14];
    unsigned char unknown_14_[3];
    unsigned char unknown_17_;
};

struct Struct_ov000_0215440c;

struct Struct_ov024_021e57e0_4 {
    int unknown_0_;
    struct Struct_ov000_0215440c* unknown_4_;
    void* unknown_8_;
    char unknown_c_[4];
    void* unknown_10_;
};

struct Struct_ov000_021584e8;

extern "C" struct Struct_ov024_021e57e0_3* func_ov000_021600f8(struct Struct_ov000_0215440c* arg0, int arg1);
extern "C" short func_ov000_0215a004(void* arg0, int arg1, int arg2, int arg3, unsigned long long* arg4, struct Struct_ov024_021e57e0_2* arg5, int arg6, int arg7);
extern "C" struct Struct_ov000_021584e8* func_ov000_0215e958(void* arg0);
extern "C" int func_ov000_02159f18(void* arg0, unsigned long long arg1, int arg2);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215ccbc(int arg0, struct Struct_ov000_021584e8* arg1, GameObject* arg2,
                            short arg3, short arg4, short arg5, unsigned long long arg6, unsigned char arg7);
extern "C" void func_ov000_0215fe84(void* arg0, void* arg1, int arg2);

static inline short inline_ov024_021e57e0(GameObject* arg0) { SDK_NULL_ASSERT(arg0); return arg0->currentStats_->primaryStats.currMP; }

// USA: func_ov024_021e57e0
extern "C" ARM void func_ov024_021e57e0(struct Struct_ov024_021e57e0_4* arg0, int arg1, struct Struct_ov024_021e57e0_2* arg2) {
    GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg1);
    if (!var0) return;
    if (arg2->unknown_4_.unknown_0_0_ == 0xaf) {
        struct Struct_ov024_021e57e0_3* var1 = func_ov000_021600f8(arg0->unknown_4_, 0);
        for (int var2 = 1; var2 < var1->unknown_17_; var2++) {
            if (var1->unknown_14_[var2] == 3) return;
        }
    }
    int var3;
    struct Struct_ov000_021584e8* var4;
    int var5;
    short var6;
    int var7;
    var7 = *(int*)((char*)arg0->unknown_10_ + 0x8e38);
    unsigned long long var8 = 0;
    var6 = func_ov000_0215a004(arg0->unknown_10_, arg1, arg1, var7, &var8, arg2, 0, 0);
    var4 = func_ov000_0215e958(arg0->unknown_10_);
    if (!var4) return;
    if (var7 > 0) var3 = 0x1b4; else var3 = 0x165;
    var5 = 0;
    if (func_ov000_02159f18(arg0->unknown_10_, var8, 2)) {
        if (arg2->unknown_4_.unknown_0_0_ == 0xaf) var5 = 0x1b3; else var5 = 0x117;
    }
    if (var3) func_ov000_0215a88c(arg0->unknown_10_, var4, var3);
    if (var5) func_ov000_0215a88c(arg0->unknown_10_, var4, var5);
    func_ov000_0215ccbc((int)arg0->unknown_10_, var4, var0, var7, var6, inline_ov024_021e57e0(var0), var8, 0);
    func_ov000_0215fe84(arg0->unknown_8_, var4, 2);
    ((unsigned char*)arg0->unknown_10_)[0x8e02]++;
}

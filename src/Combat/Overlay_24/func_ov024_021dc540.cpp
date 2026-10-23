#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct Struct_ov024_021dc540 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int unknown_3_6_ : 2;
};

struct Struct_ov024_021dc540_2 {
    char unknown_0_[0x20];
    struct Struct_ov024_021dc540 unknown_20_;
    struct Struct_ov024_021dc540 unknown_24_;
};

struct Struct_ov024_021dc540_3 { unsigned char unknown_0_0_ : 7; unsigned char unknown_0_7_ : 1; };

struct Struct_ov024_021dc540_4 {
    char unknown_0_[0xc];
    void* unknown_c_;
    void* unknown_10_;
};

struct Struct_ov000_021584e8;

extern "C" unsigned short func_ov024_021da644(int arg0, int arg1, int arg2);
extern "C" struct Struct_ov000_021584e8* func_ov000_0215e958(void* arg0);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" short func_ov000_0215a1d4(void* arg0, int arg1, int arg2, short* arg3);
extern "C" void func_ov000_02159eac(void* arg0, unsigned long long* arg1, int arg2);
extern "C" int func_ov000_0215a124(void* arg0, int arg1, int arg2);
extern "C" void func_ov000_0215ccbc(void* arg0, struct Struct_ov000_021584e8* arg1, GameObject* arg2,
                            short arg3, short arg4, short arg5, unsigned long long arg6, unsigned char arg7);

static inline int inline_ov024_021dc540(GameObject* arg0) { SDK_NULL_ASSERT(arg0); return arg0->currentStats_->primaryStats.currHP; }

static inline unsigned short inline_ov024_021dc540_2(GameObject* arg0) { SDK_NULL_ASSERT(arg0); return arg0->currentStats_->primaryStats.maxMP; }

// USA: func_ov024_021dc540
extern "C" ARM struct Struct_ov000_021584e8* func_ov024_021dc540(struct Struct_ov024_021dc540_4* arg0, int arg1, int arg2, struct Struct_ov024_021dc540_2* arg3, int arg4, int arg5, unsigned char arg6) {
    GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg1);
    if (!var0) return 0;
    GameObject* var1 = GetCombatantByID((int)arg0->unknown_10_, arg2);
    if (!var1) return 0;
    int var2 = var0->currentStats_->primaryStats.currMP;
    if (var2 == 0) arg4 = 0;
    if (var1->currentStats_->primaryStats.currMP >= inline_ov024_021dc540_2(var1)) arg4 = 0;
    if (arg1 == arg2) arg4 = 0;
    if (arg4 > var2) arg4 = var2;
    unsigned short var3;
    if (arg6 && arg4 > 0) {
        var3 = func_ov024_021da644(arg2, arg3->unknown_20_.unknown_2_4_, arg3->unknown_24_.unknown_0_0_);
    } else {
        arg4 = 0;
        var3 = func_ov024_021da644(arg2, arg3->unknown_24_.unknown_1_2_, arg3->unknown_24_.unknown_2_4_);
    }
    struct Struct_ov000_021584e8* var4 = func_ov000_0215e958(arg0->unknown_10_);
    if (!var4) return 0;
    func_ov000_0215a88c(arg0->unknown_10_, var4, var3);
    unsigned long long var5 = 0;
    short var6 = 0;
    short var7 = func_ov000_0215a1d4(arg0->unknown_10_, arg2, arg4, &var6);
    if (var6 != 0) {
        func_ov000_02159eac(arg0->unknown_10_, &var5, 0x22);
    }
    func_ov000_0215a124(arg0->unknown_10_, arg1, var6);
    struct Struct_ov024_021dc540_3* var8 = (struct Struct_ov024_021dc540_3*)((char*)arg0->unknown_c_ + 0x1c);
    func_ov000_0215ccbc(arg0->unknown_10_, var4, var1, -var6, inline_ov024_021dc540(var1), var7, var5, var8->unknown_0_7_ != 0);
    return var4;
}

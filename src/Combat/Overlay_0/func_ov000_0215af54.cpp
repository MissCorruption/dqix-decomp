#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

struct Struct_02010088;
struct Struct_ov000_021584e8;

struct Struct_ov000_0215af54 {
    unsigned short unknown_0_;
    char unknown_2_[0xb - 0x2];
    unsigned char unknown_b_;
    char unknown_c_[0x28 - 0xc];
};

struct Struct_ov000_0215af54_2 {
    char unknown_0_[0x1c];
    short unknown_1c_;
    char unknown_1e_[0x20 - 0x1e];
    short unknown_20_;
    unsigned short unknown_22_;
    unsigned short unknown_24_;
    char unknown_26_[0x30 - 0x26];
    int unknown_30_;
};

struct Struct_ov000_0215af54_3 {
    char unknown_0_[0xe];
    short unknown_e_;
    char unknown_10_[0x17 - 0x10];
    unsigned char unknown_17_;
    char unknown_18_[0x24 - 0x18];
};

struct Struct_ov000_0215af54_4 {
    char unknown_0_[0x20];
    int unknown_20_;
};

struct Struct_ov000_0215af54_5 {
    char unknown_0_[0x6d30];
    struct Struct_ov000_0215af54 unknown_6d30_[16];
    struct Struct_ov000_0215af54_2 unknown_6fb0_[16];
    struct Struct_ov000_0215af54_3 unknown_72f0_[16];
    struct Struct_ov000_0215af54_4 unknown_7530_[16];
    char unknown_7770_[0x8e10 - 0x7770];
    unsigned char unknown_8e10_;
    unsigned char unknown_8e11_;
    unsigned char unknown_8e12_;
    unsigned char unknown_8e13_;
};

extern "C" int func_02010088(struct Struct_02010088* arg0);
extern "C" int func_ov000_02153c0c(GameObject* arg0);
extern "C" void func_ov000_02160030(void* arg0);
extern "C" void func_ov000_02157cdc(void* arg0);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215ccbc(int arg0, struct Struct_ov000_021584e8* arg1, GameObject* arg2,
                            short arg3, short arg4, short arg5, unsigned long long arg6, unsigned char arg7);
extern "C" void func_ov000_0215ffc4(void* arg0, void* arg1, int arg2);
struct Struct_ov000_0215767c_7;
struct Struct_ov000_0215767c_6;
struct Struct_ov000_0215767c_5;
struct Struct_ov000_0215767c_4;
extern "C" void func_ov000_02160068(struct Struct_ov000_0215767c_7* arg0, struct Struct_ov000_0215767c_6* arg1);
extern "C" void func_ov000_021600cc(struct Struct_ov000_0215767c_5* arg0, struct Struct_ov000_0215767c_4* arg1);

static inline int inline_ov000_02156cc4_2(int arg0) {
    return arg0 >= 0 && arg0 <= 3;
}

static inline short inline_ov000_021584e8(GameObject* arg0) { SDK_NULL_ASSERT(arg0); return arg0->currentStats_->primaryStats.currHP; }
static inline short inline_ov000_021584e8_2(GameObject* arg0) { SDK_NULL_ASSERT(arg0); return arg0->currentStats_->primaryStats.currMP; }

// USA: func_ov000_0215af54
extern "C" ARM void func_ov000_0215af54(struct Struct_ov000_0215af54_5* arg0, int arg1, int arg2) {
    struct Struct_ov000_0215af54* var0;
    struct Struct_ov000_0215af54_2* var1;
    struct Struct_ov000_0215af54_3* var2;
    struct Struct_ov000_0215af54_4* var3;
    if (arg0->unknown_8e10_ >= 16 || arg0->unknown_8e11_ >= 16 || arg0->unknown_8e12_ >= 16 || arg0->unknown_8e13_ >= 16) {
        return;
    }
    GameObject* var4 = GameState::GetInstance()->GetCombatantByIndex(arg1);
    if (var4 == NULL) {
        return;
    }
    if (func_02010088((struct Struct_02010088*)var4)) {
        return;
    }
    if (func_ov000_02153c0c(var4)) {
        return;
    }

    var0 = &arg0->unknown_6d30_[arg0->unknown_8e10_];
    func_ov000_02160030(var0);
    var1 = &arg0->unknown_6fb0_[arg0->unknown_8e11_];
    memset(var1, 0, 0x30);
    var1->unknown_1c_ = -1;
    var1->unknown_30_ = 0;
    var2 = &arg0->unknown_72f0_[arg0->unknown_8e12_];
    func_ov000_02157cdc(var2);
    var3 = &arg0->unknown_7530_[arg0->unknown_8e13_];
    memset(var3, 0, 0x20);
    var3->unknown_20_ = 0;

    if (arg2 == 0) {
        if (inline_ov000_02156cc4_2(arg1)) {
            var0->unknown_0_ = 0x39c;
        } else {
            var0->unknown_0_ = 0x39d;
        }
        func_ov000_0215a88c(arg0, var3, 0x35);
    } else {
        var0->unknown_0_ = 0x39a;
        func_ov000_0215a88c(arg0, var3, 0x213);
    }
    var0->unknown_b_ |= 4;

    var1->unknown_20_ = arg1;
    var1->unknown_22_ = var4->currentStats_->primaryStats.currHP;
    var1->unknown_24_ = var4->currentStats_->primaryStats.currMP;
    func_ov000_0215ccbc((int)arg0, (struct Struct_ov000_021584e8*)var3, var4, 0, inline_ov000_021584e8(var4), inline_ov000_021584e8_2(var4), 0, 0);
    var2->unknown_e_ = arg1;
    var2->unknown_17_ = 1;
    func_ov000_0215ffc4(var2, var3, 0);
    func_ov000_02160068((struct Struct_ov000_0215767c_7*)var0, (struct Struct_ov000_0215767c_6*)var1);
    func_ov000_021600cc((struct Struct_ov000_0215767c_5*)var0, (struct Struct_ov000_0215767c_4*)var2);

    arg0->unknown_8e10_++;
    arg0->unknown_8e11_++;
    arg0->unknown_8e12_++;
    arg0->unknown_8e13_++;
}

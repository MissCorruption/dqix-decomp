#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

struct Struct_02010088;
extern "C" int func_02010088(struct Struct_02010088* arg0);
extern "C" int func_ov000_02153c0c(GameObject* arg0);

struct Struct_ov000_0215acb8 {
    unsigned short unknown_0_;
    char unknown_2_[0x28 - 0x2];
};

struct Struct_ov000_0215acb8_2 {
    char unknown_0_[0x1c];
    short unknown_1c_;
    short unknown_1e_;
    unsigned short unknown_20_;
    unsigned short unknown_22_;
    unsigned short unknown_24_;
    char unknown_26_[0x30 - 0x26];
    int unknown_30_;
};

struct Struct_ov000_0215acb8_3 {
    char unknown_0_[0xe];
    short unknown_e_;
    char unknown_10_[0x17 - 0x10];
    unsigned char unknown_17_;
    char unknown_18_[0x24 - 0x18];
};

struct Struct_ov000_021584e8 {
    char unknown_0_[0x20];
    int unknown_20_;
};

struct Struct_ov000_0215acb8_4 {
    char unknown_0_[0x7770];
    struct Struct_ov000_0215acb8 unknown_7770_[0x10];
    struct Struct_ov000_0215acb8_2 unknown_79f0_[0x10];
    struct Struct_ov000_0215acb8_3 unknown_7d30_[0x10];
    struct Struct_ov000_021584e8 unknown_7f70_[0x10];
    char unknown_81b0_[0x8e0f - 0x81b0];
    unsigned char unknown_8e0f_;
};

extern "C" void func_ov000_02160030(void* arg0);
extern "C" void func_ov000_02157cdc(void* arg0);
extern "C" void func_ov000_0215ccbc(int arg0, struct Struct_ov000_021584e8* arg1, GameObject* arg2,
                            short arg3, short arg4, short arg5, unsigned long long arg6, unsigned char arg7);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215ffc4(void* arg0, void* arg1, int arg2);

struct Struct_ov000_0215767c_7;
struct Struct_ov000_0215767c_6;
extern "C" void func_ov000_02160068(struct Struct_ov000_0215767c_7* arg0, struct Struct_ov000_0215767c_6* arg1);
struct Struct_ov000_0215767c_5;
struct Struct_ov000_0215767c_4;
extern "C" void func_ov000_021600cc(struct Struct_ov000_0215767c_5* arg0, struct Struct_ov000_0215767c_4* arg1);

// USA: func_ov000_0215acb8
extern "C" ARM void func_ov000_0215acb8(struct Struct_ov000_0215acb8_4* arg0, int arg1, short arg2, short arg3) {
    if (arg0->unknown_8e0f_ >= 0x10) {
        return;
    }
    GameObject* var0 = GameState::GetInstance()->GetCombatantByIndex(arg1);
    if (var0 == NULL) {
        return;
    }
    if (func_02010088((struct Struct_02010088*)var0)) {
        return;
    }
    if (func_ov000_02153c0c(var0)) {
        return;
    }
    struct Struct_ov000_0215acb8* var1 = &arg0->unknown_7770_[arg0->unknown_8e0f_];
    func_ov000_02160030(var1);
    struct Struct_ov000_0215acb8_2* var2 = &arg0->unknown_79f0_[arg0->unknown_8e0f_];
    memset(var2, 0, 0x30);
    var2->unknown_1c_ = -1;
    var2->unknown_30_ = 0;
    struct Struct_ov000_0215acb8_3* var3 = &arg0->unknown_7d30_[arg0->unknown_8e0f_];
    func_ov000_02157cdc(var3);
    struct Struct_ov000_021584e8* var4 = &arg0->unknown_7f70_[arg0->unknown_8e0f_];
    memset(var4, 0, 0x20);
    var4->unknown_20_ = 0;
    var1->unknown_0_ = 0x3af;
    var2->unknown_20_ = arg1;
    var2->unknown_22_ = var0->currentStats_->primaryStats.currHP;
    var2->unknown_24_ = var0->currentStats_->primaryStats.currMP;
    func_ov000_0215ccbc((int)arg0, var4, var0, -arg2, var0->currentStats_->primaryStats.currHP, arg3, 0x800000000ULL, 0);
    func_ov000_0215a88c(arg0, var4, 0x243);
    var3->unknown_e_ = arg1;
    var3->unknown_17_ = 1;
    func_ov000_0215ffc4(var3, var4, 0);
    func_ov000_02160068((struct Struct_ov000_0215767c_7*)var1, (struct Struct_ov000_0215767c_6*)var2);
    func_ov000_021600cc((struct Struct_ov000_0215767c_5*)var1, (struct Struct_ov000_0215767c_4*)var3);
    arg0->unknown_8e0f_++;
}

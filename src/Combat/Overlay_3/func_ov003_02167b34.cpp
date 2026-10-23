#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_02167b34_2384 = 0x8b8 };
enum { Enum_ov003_02167b34_118 = 0x46 };
#else
enum { Enum_ov003_02167b34_2384 = 0x950 };
enum { Enum_ov003_02167b34_118 = 0x76 };
#endif
#include "GameState/GameState.h"

struct Struct_ov003_02167b34 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int unknown_4_0_ : 10;
    unsigned int unknown_5_2_ : 10;
    unsigned int unknown_6_4_ : 10;
    unsigned int unknown_8_0_ : 10;
    unsigned int unknown_9_2_ : 10;
    unsigned int unknown_a_4_ : 10;
    unsigned int unknown_c_0_ : 10;
    unsigned char unknown_e_[0x138 - 0x10];
    int unknown_138_[0xd];
    unsigned short unknown_16c_[0xd];
    unsigned char unknown_186_[0x464 - 0x186];
    unsigned char unknown_464_[0x49c - 0x464];
    unsigned char unknown_49c_0_ : 1;
    unsigned char unknown_49d_[Enum_ov003_02167b34_2384 - 0x49d];
    int unknown_950_;
};

struct Struct_ov003_02167b34_2;
struct Struct_ov003_02167b34_3 {
    unsigned char unknown_0_[0x10];
    void* unknown_10_;
    unsigned char unknown_14_[Enum_ov003_02167b34_118 - 0x14];
    signed char unknown_76_;
};

extern "C" void* func_02053c6c(unsigned char* arg0);
extern "C" void func_02083e28(void* arg0, int arg1);
extern "C" void func_ov003_02167e28(Struct_ov003_02167b34_3* arg0, BaseCombatStats* arg1, int arg2, unsigned char arg3, int arg4, int arg5, int arg6);
extern "C" void func_ov003_02167fa4(Struct_ov003_02167b34_3* arg0, int arg1, unsigned char* arg2);
extern "C" void func_ov003_02168088(struct Struct_ov003_02167b34_2* arg0, int* arg1);
extern "C" void func_020813ec(void* arg0, int arg1);

static inline BaseCombatStats* inline_02069120(GameObject* arg0) { SDK_NULL_ASSERT(arg0); return arg0->baseStats_; }

// USA: func_ov003_02167b34
extern "C" ARM void func_ov003_02167b34(Struct_ov003_02167b34_3* arg0) {
    GameObject* var0 = func_0200ff1c(GameState::GetInstance(), arg0->unknown_76_);
    if (var0 == 0) return;
    Struct_ov003_02167b34* var1 = (Struct_ov003_02167b34*)func_02053c6c((unsigned char*)var0);
    func_02083e28(var1, 0);
    func_ov003_02167e28(arg0, inline_02069120(var0), var1->unknown_49c_0_, var1->unknown_950_, var1->unknown_186_[var1->unknown_950_], var1->unknown_16c_[var1->unknown_950_], var1->unknown_138_[var1->unknown_950_]);
    func_ov003_02167fa4(arg0, var1->unknown_950_ & 0xff, var1->unknown_464_);
    int var2[12];
    var2[0] = var1->unknown_0_0_;
    var2[1] = var1->unknown_1_2_;
    var2[2] = var1->unknown_2_4_;
    var2[3] = var1->unknown_4_0_;
    var2[4] = var1->unknown_5_2_;
    var2[5] = var1->unknown_6_4_;
    var2[6] = var1->unknown_8_0_;
    var2[7] = var1->unknown_9_2_;
    var2[8] = var1->unknown_a_4_;
    var2[9] = var0->baseStats_->primaryStats.attack;
    var2[10] = var0->baseStats_->primaryStats.defense;
    var2[11] = var1->unknown_c_0_;
    func_ov003_02168088((struct Struct_ov003_02167b34_2*)arg0, var2);
    func_020813ec(arg0->unknown_10_, 0);
}

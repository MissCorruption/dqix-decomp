#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

struct Struct_ov017_021c6d50 {
    unsigned char unknown_0_0_ : 1;
    unsigned char unknown_0_1_ : 1;
    unsigned char unknown_0_2_ : 1;
    unsigned char unknown_0_3_ : 1;
    unsigned char unknown_0_4_ : 4;
};
struct Struct_ov017_021c71a4 {
    char unknown_0_[0x26];
    unsigned char unknown_26_;
    char unknown_27_[0x13];
    unsigned char unknown_3a_;
    Struct_ov017_021c6d50 unknown_3b_;
};
struct Struct_ov017_021c71a4_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    char unknown_4_[9];
    Struct_ov017_021c6d50 unknown_d_;
    char unknown_e_;
    unsigned char unknown_f_0_ : 7;
    unsigned char unknown_f_7_ : 1;
};
struct Struct_ov017_021c71a4_3 { unsigned char unknown_0_; char unknown_1_[3]; unsigned int unknown_4_[4]; };
struct Struct_ov017_021c71a4_4 { char unknown_0_[8]; unsigned short unknown_8_; };
static inline unsigned int inline_ov017_021c71a4_2(Struct_ov017_021c71a4* arg0) { return arg0->unknown_3b_.unknown_0_0_; }
static inline unsigned int inline_ov017_021c71a4_3(Struct_ov017_021c71a4* arg0) { return arg0->unknown_3b_.unknown_0_1_; }
static inline unsigned int inline_ov017_021c71a4_4(Struct_ov017_021c71a4* arg0) { return arg0->unknown_3b_.unknown_0_2_; }
static inline unsigned int inline_ov017_021c71a4(Struct_ov017_021c71a4* arg0) { return arg0->unknown_3b_.unknown_0_3_; }
static inline unsigned int inline_ov003_0216e714(Struct_ov017_021c71a4* arg0) { return arg0->unknown_3b_.unknown_0_4_; }
extern "C" Struct_ov017_021c71a4_4* func_ov017_021b8478(void*);
extern "C" void* func_0202ae24();
extern "C" int func_020a35e0(unsigned char*, unsigned char);
extern "C" void func_0205e330(void*, void*, int);

// USA: func_ov017_021c71a4
extern "C" ARM void func_ov017_021c71a4() {
    GameState* var0 = GameState::GetInstance();
#if defined(jpn)
    Struct_ov017_021c71a4_4* var1 = func_ov017_021b8478(*(void**)((char*)GetGameResources() + 0x3508));
#else
    Struct_ov017_021c71a4_4* var1 = func_ov017_021b8478(GetGameResources()->unknown_ptr_3718);
#endif
    void* var2 = func_0202ae24();
    Struct_ov017_021c71a4_3 var3;
    var3.unknown_0_ = 0x71;
    Struct_ov017_021c71a4_2* var4 = (Struct_ov017_021c71a4_2*)var3.unknown_4_;
    for (int var5 = 0; var5 < 4; ++var5) {
        if (!func_020a35e0((unsigned char*)var1, var5)) continue;
        GameObject* var6 = var0->GetCombatantByIndex(var5);
        if (!var6 || !((Struct_ov017_021c71a4*)var6->currentStats_)->unknown_26_) continue;
        var4->unknown_0_ = var1->unknown_8_;
        var4->unknown_2_ = var5;
        var4->unknown_d_.unknown_0_0_ = (unsigned char)inline_ov017_021c71a4_2((Struct_ov017_021c71a4*)var6->currentStats_);
        var4->unknown_d_.unknown_0_1_ = (unsigned char)inline_ov017_021c71a4_3((Struct_ov017_021c71a4*)var6->currentStats_);
        var4->unknown_d_.unknown_0_2_ = (unsigned char)inline_ov017_021c71a4_4((Struct_ov017_021c71a4*)var6->currentStats_);
        var4->unknown_d_.unknown_0_3_ = (unsigned char)inline_ov017_021c71a4((Struct_ov017_021c71a4*)var6->currentStats_);
        var4->unknown_d_.unknown_0_4_ = (unsigned char)inline_ov003_0216e714((Struct_ov017_021c71a4*)var6->currentStats_);
        var4->unknown_f_7_ = ((Struct_ov017_021c71a4*)var6->currentStats_)->unknown_3a_;
        func_0205e330(var2, &var3, 0);
    }
}

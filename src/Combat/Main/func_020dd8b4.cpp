#include <globaldefs.h>
#if defined(jpn)
enum { Enum_020dd8b4_336 = 0x144 };
#else
enum { Enum_020dd8b4_336 = 0x150 };
#endif
#include "GameState/GameState.h"
struct Struct_020dd8b4 { unsigned int unknown_0_; unsigned int unknown_4_0_ : 10; unsigned int unknown_5_2_ : 22; };
struct Struct_020dd8b4_2 { char unknown_0_[0x134]; BaseCombatStats* unknown_134_; char unknown_138_[Enum_020dd8b4_336 - 0x138]; Struct_020dd8b4* unknown_150_; };
struct Struct_020dd8b4_3 { int unknown_0_; char unknown_4_[0x30]; };
struct Struct_020dd8b4_4 {
    int unknown_0_;
    Struct_020dd8b4_3 unknown_4_;
    unsigned char unknown_38_;
    char unknown_39_[3];
    unsigned short unknown_3c_; short unknown_3e_;
    unsigned short unknown_40_; short unknown_42_;
    int unknown_44_; int unknown_48_;
    int unknown_4c_; int unknown_50_;
    int unknown_54_; int unknown_58_;
    int unknown_5c_; int unknown_60_;
    unsigned short unknown_64_; short unknown_66_;
    unsigned short unknown_68_; short unknown_6a_;
    unsigned short unknown_6c_; short unknown_6e_;
    unsigned short unknown_70_; short unknown_72_;
    unsigned short unknown_74_; short unknown_76_;
    unsigned short unknown_78_;
};
extern "C" char* func_02053c6c(unsigned char*);
extern "C" int func_02084fc8(char*);
extern "C" int func_02084ee8(void*);
extern "C" int func_02084f58(void*);
extern "C" int func_02084e78(void*);
extern "C" void func_02083e28(char*, Struct_020dd8b4_3*);
static inline int inline_020dd8b4(int arg0) { return arg0 >= 0 && arg0 <= 3; }
// USA: func_020dd8b4
extern "C" ARM void func_020dd8b4(Struct_020dd8b4_4* arg0, int arg1, int arg2, unsigned char arg3) {
    if (!inline_020dd8b4(arg1)) return;
    arg0->unknown_0_ = arg1;
    arg0->unknown_4_.unknown_0_ = arg2;
    arg0->unknown_38_ = arg3;
    Struct_020dd8b4_2* var0 = (Struct_020dd8b4_2*)func_0200ff1c(GameState::GetInstance(), arg0->unknown_0_);
    if (!var0) return;
    char* var1 = func_02053c6c((unsigned char*)var0);
    arg0->unknown_3c_ = var0->unknown_134_->primaryStats.attack;
    arg0->unknown_40_ = var0->unknown_134_->primaryStats.defense;
    arg0->unknown_44_ = func_02084fc8(var1);
    arg0->unknown_4c_ = func_02084ee8(var1);
    arg0->unknown_54_ = func_02084f58(var1);
    arg0->unknown_5c_ = func_02084e78(var1);
    arg0->unknown_64_ = var0->unknown_150_->unknown_4_0_;
    arg0->unknown_68_ = var0->unknown_134_->primaryStats.agility;
    arg0->unknown_6c_ = var0->unknown_134_->primaryStats.magicalMight;
    arg0->unknown_70_ = var0->unknown_134_->primaryStats.magicalMending;
    arg0->unknown_74_ = var0->unknown_134_->primaryStats.maxHP;
    arg0->unknown_78_ = var0->unknown_134_->primaryStats.maxMP;
    func_02083e28(var1, &arg0->unknown_4_);
}

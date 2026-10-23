#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"
struct Struct_ov024_021db3a4;
struct Struct_ov024_021db3a4_3;
extern "C" void* func_02010828(GameState*);
struct Struct_02048150;
extern "C" int func_02086ef0(Struct_02048150*, int);
extern "C" float func_ov024_021db358(GameObject*);
extern "C" void func_ov000_0215a8d4(unsigned char*, int);
extern "C" short func_ov000_0215a16c(void*, int, int, short*);
extern "C" unsigned short func_ov024_021e9b24(Struct_ov024_021db3a4*, int, Struct_ov024_021db3a4_3*, int);
extern "C" unsigned long long func_ov024_021e4b14(Struct_ov024_021db3a4*, short, int, Struct_ov024_021db3a4_3*, int);
extern "C" void* func_ov000_0215e958(void*);
extern "C" void func_ov000_0215a88c(void*, void*, int);
extern "C" void func_ov000_02159eac(void*, void*, int);
extern "C" void func_ov000_0215ccbc(void*, void*, GameObject*, short, short, short, unsigned long long, unsigned char);
struct Struct_ov024_021db3a4_4 { char unknown_0_[0x1c]; unsigned char unknown_1c_0_:7; unsigned char unknown_1c_7_:1; };
struct Struct_ov024_021db3a4 { char unknown_0_[0xc]; Struct_ov024_021db3a4_4* unknown_c_; void* unknown_10_; int unknown_14_; };
struct Struct_ov024_021db3a4_2 { unsigned int unknown_0_0_:12; unsigned int unknown_1_4_:20; };
struct Struct_ov024_021db3a4_3 { char unknown_0_[4]; Struct_ov024_021db3a4_2 unknown_4_; };
// USA: func_ov024_021db3a4
extern "C" ARM void* func_ov024_021db3a4(Struct_ov024_021db3a4* arg0, short arg1, int arg2, Struct_ov024_021db3a4_3* arg3, int arg4, int arg5, unsigned char arg6) {
    GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
    if (!var0) return 0;
    unsigned short var1 = arg3->unknown_4_.unknown_0_0_;
    if (var1 == 0x21 || var1 == 0x310) arg4 = var0->currentStats_->primaryStats.maxHP;
    void* var2 = func_02010828(GameState::GetInstance());
    if (arg3->unknown_4_.unknown_0_0_ == 0x20 && func_02086ef0((Struct_02048150*)var2, arg1) && func_ov024_021db358(var0) <= 0.08f && arg6 && arg4 > 0)
        func_ov000_0215a8d4((unsigned char*)arg0->unknown_10_, 7);
    short var3 = 0;
    short var4 = func_ov000_0215a16c(arg0->unknown_10_, arg2, arg4, &var3);
    int var5 = 0;
    if (var3 <= 0) var5 = 1;
    unsigned short var6 = func_ov024_021e9b24(arg0, arg2, arg3, var5);
    union { struct { int unknown_0_; int unknown_4_; }; unsigned long long unknown1_0_; } var7;
    var7.unknown_0_ = 0;
    var7.unknown_4_ = 0;
    var7.unknown1_0_ = func_ov024_021e4b14(arg0, arg1, arg2, arg3, arg4);
    void* var8 = func_ov000_0215e958(arg0->unknown_10_);
    if (!var8) return 0;
    if (var3 > 0) arg0->unknown_14_++;
    else if (var7.unknown1_0_ != 0) arg0->unknown_14_++;
    if (var5) {
        if (var7.unknown1_0_ == 0) func_ov000_0215a88c(arg0->unknown_10_, var8, var6);
        else func_ov000_0215a88c(arg0->unknown_10_, var8, 0);
    } else {
        func_ov000_02159eac(arg0->unknown_10_, &var7, 0x25);
        func_ov000_0215a88c(arg0->unknown_10_, var8, var6);
    }
    unsigned short var9 = var0->currentStats_->primaryStats.currMP;
    unsigned char var10;
    if (arg0->unknown_c_->unknown_1c_7_) var10 = 1; else var10 = 0;
    func_ov000_0215ccbc(arg0->unknown_10_, var8, var0, -var3, var4, var9, var7.unknown1_0_, var10);
    return var8;
}

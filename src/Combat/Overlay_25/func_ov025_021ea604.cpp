#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov000_021600f8 { char unknown_0_[0xc]; short unknown_c_; short unknown_e_; };
struct Struct_ov000_0215440c {
    unsigned short unknown_0_;
    char unknown_2_[7];
    unsigned char unknown_9_;
    char unknown_a_[2];
    unsigned char unknown_c_0_ : 1;
    unsigned char unknown_c_1_ : 2;
    unsigned char unknown_c_3_ : 1;
    unsigned char unknown_c_4_ : 4;
};
struct Struct_ov025_021ea604 { unsigned short unknown_0_; char unknown_2_[2]; Struct_ov025_021ea604* unknown_4_; };
typedef unsigned long long Type_02000c9c_8 __attribute__((aligned(4)));
struct Struct_ov025_021ea604_2 { Type_02000c9c_8 unknown_0_; Struct_ov025_021ea604* unknown_8_; };
struct Struct_ov025_021ea604_3 {
    char unknown_0_[0x5c5];
    unsigned char unknown_5c5_;
    char unknown_5c6_[6];
    unsigned char unknown_5cc_;
    char unknown_5cd_[3];
    unsigned char unknown_5d0_;
    unsigned char unknown_5d1_;
    short unknown_5d2_[9];
    int unknown_5e4_;
    char unknown_5e8_[0x738-0x5e8];
    unsigned char unknown_738_;
    char unknown_739_[0xf];
    unsigned short unknown_748_;
};
struct Struct_ov023_021f2a48 { char unknown_0_[0x28]; short unknown_28_; };
extern "C" void* func_ov000_02160130();
extern "C" Struct_ov000_0215440c* func_ov000_02160f20(void*);
extern "C" Struct_ov000_021600f8* func_ov000_021600f8(Struct_ov000_0215440c*, int);
extern "C" short func_ov000_0215ffa0(Struct_ov000_021600f8*);
extern "C" int func_ov000_0215fd90(Struct_ov025_021ea604_2*, unsigned int);
extern "C" void func_ov025_021ed35c(char*);
extern "C" void func_ov025_021ea958(Struct_ov025_021ea604_3*, int, int, int);
extern "C" int func_ov025_021ed380(char*, unsigned short, short, int, Struct_ov025_021ea604_2*, short, unsigned short);
extern "C" void func_ov025_021ead5c(Struct_ov025_021ea604_3*, int);
inline int inline_ov025_021dfce0_2(int arg0) { return arg0 >= 0 && arg0 <= 3; }

// USA: func_ov025_021ea604
extern "C" ARM void func_ov025_021ea604(Struct_ov025_021ea604_3* arg0, int arg1, int, Struct_ov025_021ea604_2* arg3) {
    GameState* var0 = GameState::GetInstance();
    Struct_ov000_0215440c* var1 = func_ov000_02160f20(func_ov000_02160130());
    Struct_ov000_021600f8* var2 = func_ov000_021600f8(var1, arg1);
    int var3 = 0;
    if (arg0->unknown_5d0_) {
        int var4 = 1;
        int var5 = 0;
        if (var2->unknown_e_ >= 0 && var2->unknown_e_ <= 3) var5 = 1;
        bool var6 = var5;
        for (int var7 = arg1 + 1; var7 < var1->unknown_9_; var7++) {
            Struct_ov000_021600f8* var8 = func_ov000_021600f8(var1, var7);
            int var9 = 0;
            if (var8->unknown_e_ >= 0 && var8->unknown_e_ <= 3) var9 = 1;
            bool var10 = var9;
            if ((var6 && var10) || (!var6 && !var10)) { var4 = 0; break; }
        }
        for (Struct_ov025_021ea604* var11 = arg3->unknown_8_; var11; var11 = var11->unknown_4_) {
            if (var11->unknown_0_ == 8) {
                arg0->unknown_5d2_[arg0->unknown_5e4_] = func_ov000_0215ffa0(var2);
                arg0->unknown_5e4_++;
                var11->unknown_0_ = 0;
            }
        }
        if (var4) { var3 = 1; arg0->unknown_5d1_ = var3; }
    }
    if (var2) {
        int var12 = func_ov000_0215ffa0(var2);
        if (!arg3) return;
        if (func_ov000_0215fd90(arg3, 11)) {
            GameObject* var13 = var0->GetCombatantByIndex(var2->unknown_e_);
            if (var13) var12 = ((Struct_ov023_021f2a48*)var13->currentStats_)->unknown_28_;
        }
        if (var1->unknown_0_ == 0x399) var12 = var2->unknown_c_;
        int var14 = 0;
        if (!arg0->unknown_738_ && arg0->unknown_748_ < 500 && !arg0->unknown_5cc_) var14 = 1;
        int var15 = 1;
        if (inline_ov025_021dfce0_2(var12) && var1->unknown_c_0_ && !func_ov000_0215fd90(arg3, 1)) var15 = 0;
        else if (!inline_ov025_021dfce0_2(var12) && var1->unknown_c_3_ && !func_ov000_0215fd90(arg3, 1)) var15 = 0;
        if (var15 && var14) func_ov025_021ed35c(arg0->unknown_5e8_);
        if (var15 || var3) {
            int var16 = 0;
            if (var3) var16 = 1;
            int var17 = (short)var12;
            if (var3) var17 = -2;
            func_ov025_021ea958(arg0, inline_ov025_021dfce0_2(var12) ? 1 : 0, var16, var17);
        }
        for (Struct_ov025_021ea604* var18 = arg3->unknown_8_; var18; var18 = var18->unknown_4_) {
            func_ov025_021ed380(arg0->unknown_5e8_, var18->unknown_0_, var12, 1, arg3, -1, 0);
        }
        if (arg0->unknown_5cc_ && func_ov000_0215fd90(arg3, 2)) func_ov025_021ead5c(arg0, inline_ov025_021dfce0_2(var12) ? 1 : 0);
    }
    arg0->unknown_5c5_++;
}

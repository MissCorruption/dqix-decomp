#include <globaldefs.h>
#include "Resource/ActionDataTables.h"
#include "GameState/GameState.h"
#include "std_library_functions.h"

struct Struct_ov000_0215f1ac_2 { char unknown_0_[0x20]; unsigned short unknown_20_; };
struct Struct_ov000_0215f1ac_3 { short unknown_0_; char unknown_2_[0x10 - 2]; Struct_ov000_0215f1ac_2* unknown_10_; char unknown_14_[0x28 - 0x14]; };
struct Struct_ov000_0215f1ac_4 { char unknown_0_[0x8e20]; int unknown_8e20_; char unknown_8e24_[0x8e78 - 0x8e24]; Struct_ov000_0215f1ac_3* unknown_8e78_; int unknown_8e7c_; };
struct Struct_ov000_0215f1ac_5 { char unknown_0_[0x10]; unsigned int unknown_10_; char unknown_14_[0x2c - 0x14]; unsigned int unknown_2c_0_ : 14; unsigned int unknown_2d_6_ : 6; unsigned int unknown_2e_4_ : 12; };
struct Struct_ov000_0215440c_2;

extern "C" Struct_ov000_0215f1ac_5* func_02079e2c(char*, int);
extern "C" int func_02085180(unsigned char*);
extern "C" int func_ov000_0215fc60(char*);
extern "C" Struct_ov000_0215f1ac_2* func_ov000_02160094(Struct_ov000_0215440c_2*, int);
extern "C" void func_ov000_0215f500(Struct_ov000_0215f1ac_3*, Struct_ov000_0215f1ac_3*);
extern const int data_ov000_02182aac[3];
extern int data_ov000_02182a58[2];
#if defined(jpn)
struct Struct_ov000_0215f1ac { char unknown_0_[0x144]; unsigned char* unknown_150_; };
#else
struct Struct_ov000_0215f1ac { char unknown_0_[0x150]; unsigned char* unknown_150_; };
#endif

// USA: func_ov000_0215f1ac
extern "C" ARM void func_ov000_0215f1ac(Struct_ov000_0215f1ac_4* arg0) {
    GameState* var0 = GameState::GetInstance();
    Struct_02108e10* var1 = func_020797dc();
    int var2 = 0;
    for (int var3 = arg0->unknown_8e7c_ - 1; var3 >= var2; var3--) {
        Struct_ov000_0215f1ac_3* var4 = &arg0->unknown_8e78_[var3];
        Struct_ov000_0215f1ac_5* var5 = func_02079e2c((char*)var1, var4->unknown_0_);
        if (!var5 || !(var5->unknown_10_ & 0x80000)) continue;
        unsigned short var6 = var4->unknown_10_->unknown_20_;
        unsigned char var7 = var6 <= 3;
        if (!var7) continue;
        GameObject* var8 = func_0200ff1c(var0, var6);
        if (!var8 || !func_02085180(((Struct_ov000_0215f1ac*)var8)->unknown_150_)) continue;
        Struct_ov000_0215f1ac_3 var9;
        memcpy(&var9, var4, 0x28);
        memmove(arg0->unknown_8e78_ + 1, arg0->unknown_8e78_, var3 * 0x28);
        var2++;
        var3++;
        memcpy(arg0->unknown_8e78_, &var9, 0x28);
    }
    for (int var10 = 0; var10 < 3; var10++) {
        int var11 = 0;
        for (int var12 = arg0->unknown_8e7c_ - 1; var12 >= var11; var12--) {
            Struct_ov000_0215f1ac_3* var13 = arg0->unknown_8e78_;
            Struct_ov000_0215f1ac_5* var14 = func_02079e2c((char*)var1, var13[var12].unknown_0_);
            if (!var14 || var14->unknown_2d_6_ != data_ov000_02182aac[var10]) continue;
            Struct_ov000_0215f1ac_3 var15;
            memcpy(&var15, &var13[var12], 0x28);
            memmove(arg0->unknown_8e78_ + 1, arg0->unknown_8e78_, var12 * 0x28);
            var11++;
            var12++;
            memcpy(arg0->unknown_8e78_, &var15, 0x28);
        }
    }
    int var16[1] = { data_ov000_02182a58[1] };
    for (int var17 = 0; var17 < 1; var17++) {
        int var18;
        int var19 = arg0->unknown_8e7c_;
        int var20 = 0;
        for (; var20 < var19; var20++) {
            var18 = var16[var17];
            Struct_ov000_0215f1ac_3* var21 = arg0->unknown_8e78_;
            Struct_ov000_0215f1ac_5* var22 = func_02079e2c((char*)var1, var21[var20].unknown_0_);
            if (!var22 || var22->unknown_2d_6_ != var18) continue;
            Struct_ov000_0215f1ac_3 var23;
            memcpy(&var23, &var21[var20], 0x28);
            int var24 = arg0->unknown_8e7c_;
            if (var20 < var24 - 1) {
                memmove(&arg0->unknown_8e78_[var20], &arg0->unknown_8e78_[var20 + 1], (var24 - var20 - 1) * 0x28);
                var19--;
                var20--;
            }
            memcpy(&arg0->unknown_8e78_[arg0->unknown_8e7c_ - 1], &var23, 0x28);
        }
    }
    if (func_ov000_0215fc60((char*)arg0)) {
        Struct_ov000_0215f1ac_3* var25 = arg0->unknown_8e78_;
        Struct_ov000_0215f1ac_3* var26 = var25 + 1;
        Struct_ov000_0215f1ac_2* var27 = func_ov000_02160094((Struct_ov000_0215440c_2*)var25, 0);
        if (arg0->unknown_8e7c_ == 1) {
            var26 = arg0->unknown_8e78_;
            var25 = 0;
        } else if (var27 && var27->unknown_20_) {
            Struct_ov000_0215f1ac_3 var28 = *var25;
            func_ov000_0215f500(var25, var26);
            func_ov000_0215f500(var26, &var28);
        }
        int var29 = arg0->unknown_8e20_;
        var27 = func_ov000_02160094((Struct_ov000_0215440c_2*)var26, 0);
        if (var27 && var29 <= 1) var26->unknown_0_ = var29 == 0 ? 0x16e : 1;
        if (var25) var25->unknown_0_ = 0x1f7;
    }
}

#include <globaldefs.h>
#include "std_library_functions.h"
union Struct_ov000_021573a8_2 { struct { short unknown1_0_,unknown1_2_; }; struct { unsigned short unknown_0_,unknown_2_; }; };
struct GameObject { char unknown_0_[0x138]; Struct_ov000_021573a8_2* unknown_138_; int inline_ov000_0215b278() const { return unknown_138_->unknown1_0_; } int inline_ov000_0215b278_2() const { return unknown_138_->unknown1_2_; } };
class GameState { public: static GameState* GetInstance(); GameObject* GetCombatantByIndex(int); };
struct Struct_ov000_0215440c_2 { void* unknown_0_; void* unknown_4_; unsigned char unknown_8_; };
struct Struct_ov000_0215b278 { void* unknown_0_[6]; char unknown_18_[4]; short unknown_1c_,unknown_1e_; unsigned short unknown_20_,unknown_22_,unknown_24_; unsigned char unknown_26_[6],unknown_2c_,unknown_2d_; char unknown_2e_[2]; int unknown_30_; };
struct Struct_ov000_021537b8 { unsigned short unknown_0_; char unknown_2_[9]; unsigned char unknown_b_; };
struct Struct_ov000_0215b278_2 { char unknown_0_[0xe]; unsigned short unknown_e_; char unknown_10_[7]; unsigned char unknown_17_; };
struct Struct_ov000_0215b278_3 { char unknown_0_[0x20]; int unknown_20_; };
extern "C" Struct_ov000_0215b278* func_ov000_02160094(Struct_ov000_0215440c_2*,int);
extern "C" void* func_ov000_0215e9d8(void*);
extern "C" void func_ov000_02160030(void*);
extern "C" void* func_ov000_0215e918(void*);
extern "C" void* func_ov000_0215e938(void*);
extern "C" void func_ov000_02157cdc(void*);
extern "C" void func_ov000_0215ffc4(void*,void*,int);
extern "C" void func_ov000_0215a88c(void*,void*,int);
struct Struct_ov000_0215767c_7; struct Struct_ov000_0215767c_6; struct Struct_ov000_0215767c_5; struct Struct_ov000_0215767c_4;
extern "C" void func_ov000_02160068(Struct_ov000_0215767c_7*,Struct_ov000_0215767c_6*);
extern "C" void func_ov000_021600cc(Struct_ov000_0215767c_5*,Struct_ov000_0215767c_4*);
extern "C" { Struct_ov000_0215b278_3* func_ov000_0215e958(void*); void func_ov000_0215ccbc(void*,Struct_ov000_0215b278_3*,GameObject*,short,short,short,unsigned long long,unsigned char); }
inline int inline_ov000_021537b8(unsigned short arg0) { int var0=0; if(arg0<=3) var0=1; return var0; }
// USA: func_ov000_0215bbbc
extern "C" ARM void func_ov000_0215bbbc(unsigned char* arg0,Struct_ov000_0215440c_2* arg1) {
    for(int var0=0;var0<arg1->unknown_8_;var0++) {
        Struct_ov000_0215b278* var1=func_ov000_02160094(arg1,var0);
        if(!var1) continue;
        Struct_ov000_021537b8* var2; Struct_ov000_0215b278* var3; Struct_ov000_0215b278_2* var4; Struct_ov000_0215b278_3* var5;
        int var6=(short)var1->unknown_20_;
        GameState* var7=GameState::GetInstance();
        GameObject* var8=var7->GetCombatantByIndex(var6);
        if(!var8) continue;
        int var9=0;
        for(int var10=0;var10<6;var10++) if(var10!=1) var9+=var1->unknown_26_[var10];
        if(var9<=0) continue;
#define ALLOCATE() \
        var2=(Struct_ov000_021537b8*)func_ov000_0215e9d8(arg0); \
        if(!var2) continue; func_ov000_02160030(var2); \
        var3=(Struct_ov000_0215b278*)func_ov000_0215e918(arg0); \
        if(!var3) continue; memset(var3,0,0x30); var3->unknown_1c_=-1; var3->unknown_30_=0; \
        var4=(Struct_ov000_0215b278_2*)func_ov000_0215e938(arg0); \
        if(!var4) continue; func_ov000_02157cdc(var4); \
        var5=func_ov000_0215e958(arg0); \
        if(!var5) continue; memset(var5,0,0x20); var5->unknown_20_=0;
        ALLOCATE()
        var2->unknown_0_=0x3ae;
        memcpy(var3,var1,0x34);
        for(int var11=0;var11<6;var11++) if(var11!=1) { var1->unknown_0_[var11]=0; var1->unknown_26_[var11]=0; }
        var1->unknown_1c_=-1; var1->unknown_1e_=0; var1->unknown_2d_=0;
        var3->unknown_0_[1]=0; var3->unknown_26_[1]=0;
        { int var12=var8->inline_ov000_0215b278_2(); int var13=var8->inline_ov000_0215b278();
        func_ov000_0215ccbc(arg0,var5,var8,0,var13,var12,0,0); }
        var4->unknown_e_=var1->unknown_20_; var4->unknown_17_=1;
        func_ov000_0215ffc4(var4,var5,0);
        var2->unknown_b_|=4;
        func_ov000_02160068((Struct_ov000_0215767c_7*)var2,(Struct_ov000_0215767c_6*)var3);
        func_ov000_021600cc((Struct_ov000_0215767c_5*)var2,(Struct_ov000_0215767c_4*)var4);
        (*(int*)(arg0+0x8e24))++; arg0[0x8e00]++; arg0[0x8e01]++; arg0[0x8e02]++;
        if(var3->unknown_2d_==1) {
            ALLOCATE()
             int var14=0; if(var1->unknown_20_<=3) var14=1; if(var14) var2->unknown_0_=0x39c; else var2->unknown_0_=0x39d;
            var3->unknown_20_=var1->unknown_20_;
            var3->unknown_22_=var8->unknown_138_->unknown_0_; var3->unknown_24_=var8->unknown_138_->unknown_2_;
            var2->unknown_b_|=4;
            { int var15=var8->inline_ov000_0215b278_2(); int var16=var8->inline_ov000_0215b278();
        func_ov000_0215ccbc(arg0,var5,var8,0,var16,var15,0,0); }
            func_ov000_0215a88c(arg0,var5,0x35);
            var4->unknown_e_=var1->unknown_20_; var4->unknown_17_=1;
            func_ov000_0215ffc4(var4,var5,0);
            arg0[0x8e02]++;
            func_ov000_02160068((Struct_ov000_0215767c_7*)var2,(Struct_ov000_0215767c_6*)var3);
            func_ov000_021600cc((Struct_ov000_0215767c_5*)var2,(Struct_ov000_0215767c_4*)var4);
            (*(int*)(arg0+0x8e24))++; arg0[0x8e00]++; arg0[0x8e01]++; arg0[0x8e02]++;
            var3->unknown_2d_=0;
        }
#undef ALLOCATE
    }
}

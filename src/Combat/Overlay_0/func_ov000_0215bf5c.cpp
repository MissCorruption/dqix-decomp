#include <globaldefs.h>
#include "std_library_functions.h"

struct GameObject { char unknown_0_[0x138]; short* unknown_138_; int inline_ov000_0215bf5c() const { return unknown_138_[0]; } int inline_ov000_0215bf5c_2() const { return unknown_138_[1]; } };
class GameState { public: static GameState* GetInstance(); GameObject* GetCombatantByIndex(int); };
struct Struct_ov000_0215440c_2 { void* unknown_0_; void* unknown_4_; unsigned char unknown_8_; };
struct Struct_ov000_0215bf5c_2 {
    void* unknown_0_; void* unknown_4_; void* unknown_8_; void* unknown_c_; void* unknown_10_;
    char unknown_14_[8]; short unknown_1c_; char unknown_1e_[2]; unsigned short unknown_20_; unsigned short unknown_22_,unknown_24_,unknown_26_;
    unsigned char unknown_28_,unknown_29_,unknown_2a_; char unknown_2b_[5]; int unknown_30_;
};
struct Struct_ov000_0215bf5c_3 { unsigned long long unknown_0_; };
struct Struct_ov000_0215bf5c_4 { unsigned short unknown_0_; char unknown_2_[9]; unsigned char unknown_b_; };
struct Struct_ov000_0215bf5c_5 { char unknown_0_[0xe]; unsigned short unknown_e_; char unknown_10_[7]; unsigned char unknown_17_; };
struct Struct_ov000_0215bf5c_6 { char unknown_0_[0x20]; int unknown_20_; };
extern "C" Struct_ov000_0215bf5c_2* func_ov000_02160094(Struct_ov000_0215440c_2*,int);
extern "C" Struct_ov000_0215bf5c_3* func_ov000_0215feb4(char*,int,int);
extern "C" void* func_ov000_0215e9d8(void*);
extern "C" void func_ov000_02160030(void*);
extern "C" void* func_ov000_0215e918(void*);
extern "C" void* func_ov000_0215e938(void*);
extern "C" void func_ov000_02157cdc(void*);
extern "C" void func_ov000_0215fe84(void*,void*,int);
extern "C" void func_ov000_0215ffc4(void*,void*,int);
struct Struct_ov000_0215767c_7; struct Struct_ov000_0215767c_6;
extern "C" void func_ov000_02160068(Struct_ov000_0215767c_7*,Struct_ov000_0215767c_6*);
struct Struct_ov000_0215767c_5; struct Struct_ov000_0215767c_4;
extern "C" void func_ov000_021600cc(Struct_ov000_0215767c_5*,Struct_ov000_0215767c_4*);
extern "C" {
GameObject* _ZN9GameState19GetCombatantByIndexEi(GameState*,int);
int func_ov000_0215fd90(Struct_ov000_0215bf5c_3*,int);
Struct_ov000_0215bf5c_6* func_ov000_0215e958(void*);
void func_ov000_0215ccbc(void*,Struct_ov000_0215bf5c_6*,GameObject*,short,short,short,unsigned long long,unsigned char);
}

struct Struct_ov000_0215bf5c { char unknown_0_[0x8e00]; unsigned char unknown_8e00_,unknown_8e01_,unknown_8e02_; char unknown_8e03_[0x21]; int unknown_8e24_; };

static inline GameObject* inline_02000c9c_5(int arg0) { return GameState::GetInstance()->GetCombatantByIndex(arg0); }
static inline int inline_ov000_0215bf5c_3(Struct_ov000_0215bf5c_2* arg0) { return arg0->unknown_28_; }

// USA: func_ov000_0215bf5c
extern "C" ARM void func_ov000_0215bf5c(Struct_ov000_0215bf5c* arg0,Struct_ov000_0215440c_2* arg1) {
    for (int var0=0;var0<arg1->unknown_8_;var0++) {
        Struct_ov000_0215bf5c_2* var1=func_ov000_02160094(arg1,var0);
        if (!var1) continue;
        Struct_ov000_0215bf5c_3* var2;
        bool var3;bool var4;
        Struct_ov000_0215bf5c_4* var5;
        Struct_ov000_0215bf5c_5* var6;
        Struct_ov000_0215bf5c_6* var7;
        int var8=(short)var1->unknown_20_;
        GameState* var9=GameState::GetInstance();
        GameObject* var10=var9->GetCombatantByIndex(var8);
        if (!var10) continue;
        int var11=inline_ov000_0215bf5c_3(var1);
        var2=func_ov000_0215feb4((char*)var1,var0,2);
        var3=false; var4=0;
        if (var2 && (func_ov000_0215fd90(var2,0x22) || func_ov000_0215fd90(var2,0x25))) var3=true;
        if (!var3 && !var1->unknown_29_) { var4=1;var11+=var1->unknown_2a_; }
        if (var11<=0) continue;
        var5=(Struct_ov000_0215bf5c_4*)func_ov000_0215e9d8(arg0);
        if (!var5) continue;
        func_ov000_02160030(var5);
        Struct_ov000_0215bf5c_2* var12=(Struct_ov000_0215bf5c_2*)func_ov000_0215e918(arg0);
        if (!var12) continue;
        memset(var12,0,0x30);var12->unknown_1c_=-1;var12->unknown_30_=0;
        var6=(Struct_ov000_0215bf5c_5*)func_ov000_0215e938(arg0);
        if (!var6) continue;
        func_ov000_02157cdc(var6);
        var7=func_ov000_0215e958(arg0);
        if (!var7) continue;
        memset(var7,0,0x20);var7->unknown_20_=0;
        var5->unknown_0_=0x3ae;
        int var13=0;
        if (var2 && ((var2->unknown_0_&2ULL) || (var2->unknown_0_&4ULL) || (var2->unknown_0_&0x10ULL) || (var2->unknown_0_&0x2000ULL))) {
            func_ov000_0215fe84(var12,var2,2);
            var1->unknown_8_=0;var1->unknown_28_=0;var13=1;
        }
        if (!var13 && !var4) continue;
        if (var4) {
            var12->unknown_10_=var1->unknown_10_;var12->unknown_2a_=var1->unknown_2a_;
            var1->unknown_10_=0;var1->unknown_2a_=0;
        }
        var12->unknown_20_=var1->unknown_20_;var12->unknown_24_=var1->unknown_24_;
        int var14=var10->inline_ov000_0215bf5c_2();
        int var15=var10->inline_ov000_0215bf5c();
        func_ov000_0215ccbc(arg0,var7,var10,0,var15,var14,0,0);
        var6->unknown_e_=var1->unknown_20_;var6->unknown_17_=1;
        func_ov000_0215ffc4(var6,var7,0);
        var5->unknown_b_|=4;
        func_ov000_02160068((Struct_ov000_0215767c_7*)var5,(Struct_ov000_0215767c_6*)var12);
        func_ov000_021600cc((Struct_ov000_0215767c_5*)var5,(Struct_ov000_0215767c_4*)var6);
        arg0->unknown_8e24_++;arg0->unknown_8e00_++;arg0->unknown_8e01_++;arg0->unknown_8e02_++;
    }
}

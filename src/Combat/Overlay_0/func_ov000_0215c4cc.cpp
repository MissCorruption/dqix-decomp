#include <globaldefs.h>
#include <GameState/GameState.h>
#include <std_library_functions.h>

struct Struct_ov000_0215767c_7 { short unknown_0_; char unknown_2_[0x26]; };
struct Struct_ov000_0215767c_5;
struct Struct_ov000_0215767c_6 { char unknown_0_[0x1c]; short unknown_1c_; char unknown_1e_[2]; short unknown_20_; unsigned short unknown_22_; unsigned short unknown_24_; char unknown_26_[0xa]; Struct_ov000_0215767c_6* unknown_30_; };
struct Struct_ov000_0215767c_4 { char unknown_0_[0xe]; short unknown_e_; char unknown_10_[7]; unsigned char unknown_17_; char unknown_18_[8]; Struct_ov000_0215767c_4* unknown_20_; };
struct Struct_ov000_021584e8 { char unknown_0_[0x20]; Struct_ov000_021584e8* unknown_20_; };
struct Struct_ov000_0215a908 { char unknown_0_[0x8e00]; unsigned char unknown_8e00_; unsigned char unknown_8e01_; unsigned char unknown_8e02_; char unknown_8e03_[0x21]; int unknown_8e24_; };
struct Struct_ov000_0215a908_2 { char unknown_0_[0x2e]; short unknown_2e_; };
struct Struct_02010088;
extern "C" int func_ov000_0215eb1c(Struct_ov000_0215a908*, short*, int, int);
extern "C" GameObject* func_0200fea4(GameState*, int);
extern "C" int func_ov000_02155154(GameObject*);
extern "C" int func_02010088(Struct_02010088*);
extern "C" int func_ov000_02153c0c(GameObject*);
extern "C" void func_020488cc(unsigned char*, int);
extern "C" void func_02088e64(unsigned char*);
extern "C" void* func_ov000_0215e9d8(void*);
extern "C" void func_ov000_02160030(void*);
extern "C" void* func_ov000_0215e918(void*);
extern "C" void* func_ov000_0215e938(void*);
extern "C" void func_ov000_02157cdc(void*);
extern "C" Struct_ov000_021584e8* func_ov000_0215e958(Struct_ov000_0215a908*);
extern "C" void func_ov000_0215ccbc(int, Struct_ov000_021584e8*, GameObject*, short, short, short, unsigned long long, unsigned char);
extern "C" void func_ov000_0215a88c(void*, void*, int);
extern "C" void func_ov000_0215ffc4(void*, void*, int);
extern "C" void func_ov000_02160068(Struct_ov000_0215767c_7*, Struct_ov000_0215767c_6*);
extern "C" void func_ov000_021600cc(Struct_ov000_0215767c_5*, Struct_ov000_0215767c_4*);
extern short data_ov000_02182c24[8];
static inline short inline_ov000_0215a908(GameObject* arg0) { SDK_NULL_ASSERT(arg0); return ((Struct_ov000_0215a908_2*)arg0->currentStats_)->unknown_2e_; }
static inline short inline_ov000_0215a908_2(GameObject* arg0) { SDK_NULL_ASSERT(arg0); return arg0->currentStats_->primaryStats.currHP; }
static inline short inline_ov000_0215a908_3(GameObject* arg0) { SDK_NULL_ASSERT(arg0); return arg0->currentStats_->primaryStats.currMP; }
static inline short inline_ov000_0215c4cc(short* arg0, int arg1) { SDK_NULL_ASSERT(arg0); return arg0[arg1]; }

// USA: func_ov000_0215c4cc
extern "C" ARM void func_ov000_0215c4cc(Struct_ov000_0215a908* arg0) {
    short var0[8];
    unsigned short* var1 = (unsigned short*)data_ov000_02182c24;
    int var2 = 8;
    unsigned short* var3 = (unsigned short*)var0;
    do { *var3 = *var1++; var3++; } while (--var2);
    int var4 = func_ov000_0215eb1c(arg0, var0, 8, 1);
    for (int var5 = 0; var5 < var4; var5++) {
        short var6 = inline_ov000_0215c4cc(var0, var5);
        GameObject* var7 = func_0200fea4(GameState::GetInstance(), var6);
        if (!var7 || !func_ov000_02155154(var7)) continue;
        short var8 = inline_ov000_0215a908(var7);
        GameObject* var9 = GameState::GetInstance()->GetCombatantByIndex(var8);
        if (var9 && !func_02010088((Struct_02010088*)var9) && !func_ov000_02153c0c(var9)) continue;
        func_020488cc((unsigned char*)var7, 1);
        func_02088e64((unsigned char*)var7->currentStats_);
        Struct_ov000_0215767c_7* var10 = (Struct_ov000_0215767c_7*)func_ov000_0215e9d8(arg0);
        if (!var10) continue;
        func_ov000_02160030(var10);
        Struct_ov000_0215767c_6* var11 = (Struct_ov000_0215767c_6*)func_ov000_0215e918(arg0);
        if (!var11) continue;
        memset(var11, 0, 0x30);
        var11->unknown_1c_ = -1;
        var11->unknown_30_ = 0;
        Struct_ov000_0215767c_4* var12 = (Struct_ov000_0215767c_4*)func_ov000_0215e938(arg0);
        if (!var12) continue;
        func_ov000_02157cdc(var12);
        Struct_ov000_021584e8* var13 = func_ov000_0215e958(arg0);
        if (!var13) continue;
        memset(var13, 0, 0x20);
        var13->unknown_20_ = 0;
        var10->unknown_0_ = 0x3ab;
        var11->unknown_20_ = var0[var5];
        var11->unknown_22_ = var7->currentStats_->primaryStats.currHP;
        var11->unknown_24_ = var7->currentStats_->primaryStats.currMP;
        func_ov000_0215ccbc((int)arg0, var13, var7, 0, inline_ov000_0215a908_2(var7), inline_ov000_0215a908_3(var7), 0, 0);
        func_ov000_0215a88c(arg0, var13, 0x164);
        var12->unknown_e_ = var0[var5];
        var12->unknown_17_ = 1;
        func_ov000_0215ffc4(var12, var13, 0);
        arg0->unknown_8e02_++;
        func_ov000_02160068(var10, var11);
        func_ov000_021600cc((Struct_ov000_0215767c_5*)var10, var12);
        arg0->unknown_8e24_++;
        arg0->unknown_8e00_++;
        arg0->unknown_8e01_++;
        arg0->unknown_8e02_++;
    }
}

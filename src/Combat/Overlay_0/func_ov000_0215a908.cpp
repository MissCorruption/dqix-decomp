#include <globaldefs.h>
#include <GameState/GameState.h>
#include <std_library_functions.h>

struct Struct_ov000_0215767c_7 { short unknown_0_; char unknown_2_[0x26]; };
struct Struct_ov000_0215767c_5;
struct Struct_ov000_0215767c_6 { char unknown_0_[0x1c]; short unknown_1c_; char unknown_1e_[2]; short unknown_20_; unsigned short unknown_22_; unsigned short unknown_24_; char unknown_26_[0xa]; Struct_ov000_0215767c_6* unknown_30_; };
struct Struct_ov000_0215767c_4 { char unknown_0_[0xc]; short unknown_c_; short unknown_e_; char unknown_10_[7]; unsigned char unknown_17_; char unknown_18_[8]; Struct_ov000_0215767c_4* unknown_20_; };
struct Struct_ov000_021584e8 { char unknown_0_[0x20]; Struct_ov000_021584e8* unknown_20_; };
struct Struct_ov000_0215a908 {
    char unknown_0_[0x6060];
    Struct_ov000_0215767c_7 unknown_6060_[20];
    Struct_ov000_0215767c_6 unknown_6380_[20];
    Struct_ov000_0215767c_4 unknown_6790_[20];
    Struct_ov000_021584e8 unknown_6a60_[20];
    char unknown_6d30_[0x20db];
    unsigned char unknown_8e0b_;
    unsigned char unknown_8e0c_;
    unsigned char unknown_8e0d_;
    unsigned char unknown_8e0e_;
};
struct Struct_ov000_0215a908_2 { char unknown_0_[0x2e]; short unknown_2e_; };
struct Struct_ov000_0215a908_3 { char unknown_0_[8]; short unknown_8_; };
struct Struct_ov000_0215a908_4 { char unknown_0_[0x144]; Struct_ov000_0215a908_3* unknown_144_; char unknown_148_[0x39]; unsigned char unknown_181_; unsigned char unknown_182_; };
struct Struct_02010088;
struct Struct_02048150;
extern "C" GameObject* func_0200fea4(GameState*, int);
extern "C" int func_ov000_02155154(GameObject*);
extern "C" int func_02010088(Struct_02010088*);
extern "C" int func_ov000_02153c0c(GameObject*);
extern "C" void func_02088e64(unsigned char*);
extern "C" void func_ov000_02160030(void*);
extern "C" void func_ov000_02157cdc(void*);
extern "C" void func_ov000_0215ccbc(int, Struct_ov000_021584e8*, GameObject*, short, short, short, unsigned long long, unsigned char);
extern "C" void func_ov000_0215a88c(void*, void*, int);
extern "C" void func_ov000_0215ffc4(void*, void*, int);
extern "C" void func_ov000_02160068(Struct_ov000_0215767c_7*, Struct_ov000_0215767c_6*);
extern "C" void func_ov000_021600cc(Struct_ov000_0215767c_5*, Struct_ov000_0215767c_4*);
extern "C" int func_02086ef0(Struct_02048150*, int);
extern "C" void func_ov000_0215a8d4(unsigned char*, int);
static inline short inline_ov000_0215a908(GameObject* arg0) { return ((Struct_ov000_0215a908_2*)arg0->currentStats_)->unknown_2e_; }
static inline short inline_ov000_0215a908_2(GameObject* arg0) { SDK_NULL_ASSERT(arg0); return arg0->currentStats_->primaryStats.currHP; }
static inline short inline_ov000_0215a908_3(GameObject* arg0) { SDK_NULL_ASSERT(arg0); return arg0->currentStats_->primaryStats.currMP; }
static inline Struct_ov000_0215767c_5* inline_ov000_0215a908_4(Struct_ov000_0215767c_7* arg0) { Struct_ov000_0215767c_5* var0 = (Struct_ov000_0215767c_5*)arg0; return var0; }

// USA: func_ov000_0215a908
extern "C" ARM void func_ov000_0215a908(Struct_ov000_0215a908* arg0, int arg1) {
    if (arg0->unknown_8e0b_ >= 20 || arg0->unknown_8e0c_ >= 20 || arg0->unknown_8e0d_ >= 20 || arg0->unknown_8e0e_ >= 20) return;
    Struct_ov000_0215767c_6* var0;
    Struct_ov000_0215767c_4* var1;
    GameObject* var2 = func_0200fea4(GameState::GetInstance(), arg1);
    if (!var2 || !func_ov000_02155154(var2)) return;
    short var3 = inline_ov000_0215a908(var2);
    GameObject* var4 = GameState::GetInstance()->GetCombatantByIndex(var3);
    if (!var4 || func_02010088((Struct_02010088*)var4) || func_ov000_02153c0c(var4)) {
        func_02088e64((unsigned char*)var2->currentStats_);
        ((Struct_ov000_0215a908_4*)var2)->unknown_182_ = 0;
        return;
    }
    ((Struct_ov000_0215a908_4*)var2)->unknown_181_ = 1;
    ((Struct_ov000_0215a908_4*)var2)->unknown_182_ = 0;
    Struct_ov000_0215767c_7* var5 = &arg0->unknown_6060_[arg0->unknown_8e0b_];
    func_ov000_02160030(var5);
    var0 = &arg0->unknown_6380_[arg0->unknown_8e0c_];
    memset(var0, 0, 0x30);
    var0->unknown_1c_ = -1;
    var0->unknown_30_ = 0;
    var1 = &arg0->unknown_6790_[arg0->unknown_8e0d_];
    func_ov000_02157cdc(var1);
    Struct_ov000_021584e8* var6 = &arg0->unknown_6a60_[arg0->unknown_8e0e_];
    memset(var6, 0, 0x20);
    var6->unknown_20_ = 0;
    var5->unknown_0_ = 0x399;
    var0->unknown_20_ = arg1;
    var0->unknown_22_ = var2->currentStats_->primaryStats.currHP;
    var0->unknown_24_ = var2->currentStats_->primaryStats.currMP;
    func_ov000_0215ccbc((int)arg0, var6, var2, 0, inline_ov000_0215a908_2(var2), inline_ov000_0215a908_3(var2), 0, 0);
    func_ov000_0215a88c(arg0, var6, 0x212);
    var1->unknown_e_ = arg1;
    var1->unknown_17_ = 1;
    var1->unknown_c_ = ((Struct_ov000_0215a908_2*)var2->currentStats_)->unknown_2e_;
    func_ov000_0215ffc4(var1, var6, 0);
    func_ov000_02160068(var5, var0);
    func_ov000_021600cc(inline_ov000_0215a908_4(var5), var1);
    Struct_ov000_0215a908_3* var7 = ((Struct_ov000_0215a908_4*)var2)->unknown_144_;
    if (func_02086ef0((Struct_02048150*)func_02010828(GameState::GetInstance()), var1->unknown_c_) && var7 && var7->unknown_8_ == 0x143) func_ov000_0215a8d4((unsigned char*)arg0, 9);
    arg0->unknown_8e0b_++;
    arg0->unknown_8e0c_++;
    arg0->unknown_8e0d_++;
    arg0->unknown_8e0e_++;
}

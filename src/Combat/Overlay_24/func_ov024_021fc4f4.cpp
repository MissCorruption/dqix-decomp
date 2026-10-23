#include <globaldefs.h>
#include "Resource/ActionDataTables.h"
#include "std_library_functions.h"
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"

extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" int func_020a35e0(unsigned char* arg0, unsigned char arg1);
struct Struct_02010088;
extern "C" int func_02010088(struct Struct_02010088* arg0);
struct Struct_ov024_021f6a1c;
extern "C" void func_ov024_021f6a1c(struct Struct_ov024_021f6a1c* arg0, void* arg1);
extern "C" void func_ov024_021f9874(void* arg0, void* arg1, int arg2, int arg3);

struct Struct_ov024_021fc4f4_4 {
    float unknown_0_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
    unsigned char unknown_8_;
};
struct Struct_ov024_021fc4f4_5 {
    char unknown_0_[0xc8];
    Struct_ov024_021fc4f4_5() { memset(this, 0, sizeof(*this)); }
};
struct Struct_ov024_021fc4f4_6 { char unknown_0_[4]; short unknown_4_; };
struct Struct_ov024_021fc4f4_7 {
    char unknown_0_[8];
    unsigned int unknown_8_0_ : 8;
    unsigned int unknown_9_0_ : 2;
    unsigned int unknown_9_2_ : 22;
    char unknown_c_[4];
    unsigned int unknown_10_;
    unsigned int unknown_14_0_ : 28;
    unsigned int unknown_17_4_ : 4;
};
struct Struct_ov024_021fc4f4 {
    char unknown_0_[0x8e18];
    unsigned char* unknown_8e18_;
};
struct Struct_ov024_021fc4f4_2 { char unknown_0_[0x14]; int unknown_14_; };
struct Struct_ov024_021fc4f4_3 {
    struct Struct_ov024_021fc4f4* unknown_0_;
    short unknown_4_;
    unsigned char unknown_6_;
    struct Struct_ov024_021fc4f4_6* unknown_8_;
    char unknown_c_[0x128 - 0xc];
    int unknown_128_;
    char unknown_12c_[0x134 - 0x12c];
    int unknown_134_;
    char unknown_138_[0x64c - 0x138];
    struct Struct_ov024_021fc4f4_7* unknown_64c_;
};

// USA: func_ov024_021fc4f4
extern "C" ARM void func_ov024_021fc4f4(struct Struct_ov024_021fc4f4_3* arg0) {
    if (arg0->unknown_6_ == 0) return;
    struct Struct_ov024_021fc4f4_6* var0 = arg0->unknown_8_;
    func_02053c6c((unsigned char*)var0);
    func_020797dc();
    struct Struct_ov024_021fc4f4_7* var1 = arg0->unknown_64c_;
    if (var1->unknown_9_0_ == 1) return;
    GetCombatantByID((int)arg0->unknown_0_, (short)arg0->unknown_128_);

    int var2 = 0;
    struct Struct_ov024_021fc4f4_5 var3;
    memset(&var3, 0, sizeof(var3));
    for (int var4 = 0; var4 < 4; var4++) {
        if (!func_020a35e0(arg0->unknown_0_->unknown_8e18_, var4 & 0xff)) continue;
        if (var1->unknown_17_4_ == 1 && var4 != arg0->unknown_4_) continue;
        GameObject* var5 = GetCombatantByID((int)arg0->unknown_0_, (short)var4);
        if (!var5) continue;
        if (!func_02010088((struct Struct_02010088*)var5)) continue;
        if ((var1->unknown_10_ & 0x400) && (((struct Struct_ov024_021fc4f4_2*)var5->currentStats_)->unknown_14_ & 0x200)) continue;
        struct Struct_ov024_021fc4f4_4 var6;
        float var7 = 100.0f;
        var6.unknown_0_ = var5->currentStats_->primaryStats.currHP;
        var6.unknown_5_ = 0;
        var6.unknown_6_ = var4;
        var2++;
        var6.unknown_7_ = (int)var7;
        var6.unknown_8_ = 5;
        func_ov024_021f6a1c((struct Struct_ov024_021f6a1c*)&var3, &var6);
    }
    if (var2 >= 2 && arg0->unknown_134_ + var2 >= 3) {
        GetCombatantByID((int)arg0->unknown_0_, 0);
        int var8 = var0->unknown_4_ & 0xff;
        if (var1->unknown_17_4_ == 3) var8 = 0xff;
        func_ov024_021f9874(arg0, &var3, 0, var8);
    }
}

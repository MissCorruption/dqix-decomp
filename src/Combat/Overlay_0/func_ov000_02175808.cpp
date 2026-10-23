#include <globaldefs.h>
#include <std_library_functions.h>
#include "GameState/GameState.h"

#if defined(jpn)
struct Struct_ov000_02175808_2 { char unknown_0_[0x8b8]; int unknown_950_; };
#else
struct Struct_ov000_02175808_2 { char unknown_0_[0x950]; int unknown_950_; };
#endif
#if defined(jpn)
struct Struct_ov000_02175808_3 : GameObject { char unknown_13c_[8]; Struct_ov000_02175808_2* unknown_150_; };
#else
struct Struct_ov000_02175808_3 : GameObject { char unknown_13c_[0x14]; Struct_ov000_02175808_2* unknown_150_; };
#endif
struct Struct_0205d6a0 { int unknown_0_; };
struct Struct_ov000_021735d0_3 {
    char unknown_0_[0x10];
    unsigned short unknown_10_[5];
    unsigned char unknown_1a_;
    char unknown_1b_[5];
    int unknown_20_;
    char unknown_24_[0x158];
    int unknown_17c_;
    char unknown_180_[8];
    Struct_0205d6a0 unknown_188_;
#if defined(jpn)
    char unknown_18c_[0x1f98-0x18c];
#else
    char unknown1_18c_[0x1d60-0x18c];
#endif
    unsigned char unknown_1d60_[8];
    signed char unknown_1d68_;
    char unknown_1d69_[4];
    unsigned char unknown_1d6d_;
    char unknown_1d6e_[0x13];
    unsigned char unknown_1d81_;
};
struct Struct_ov000_02175808_4 { char unknown_0_[0xf78]; signed char unknown_f78_[4]; unsigned char unknown_f7c_; };
struct Struct_ov000_02175808 { char unknown_0_[0x10]; unsigned char unknown_10_[8]; signed char unknown_18_; };
extern "C" void __clear(void*, unsigned long);
extern "C" void func_ov000_021757ac(Struct_ov000_021735d0_3*, unsigned short);
extern "C" int func_020100a8(GameState*);
extern "C" Struct_ov000_02175808* func_ov000_02161318(Struct_ov000_021735d0_3*, int);
extern "C" void func_0205d6a0(Struct_0205d6a0*, int);
extern "C" int func_ov000_0217f8c0(Struct_ov000_021735d0_3*);
extern "C" void func_ov000_02176634(Struct_ov000_021735d0_3*, int, int, int, int);
extern unsigned short data_ov000_0218342a[];
extern int data_ov000_02184288[3];
extern int data_ov000_02183ff0;

// USA: func_ov000_02175808
extern "C" ARM void func_ov000_02175808(Struct_ov000_021735d0_3* arg0) {
    memset(arg0->unknown_10_, 0, 10);
    arg0->unknown_1a_ = 0;
    unsigned char var0[13];
    __clear(var0, 13);
    unsigned char var1 = 0;
    GameState* var2 = GameState::GetInstance();
    for (signed char var3 = 0; var3 < 4; ++var3) {
        Struct_ov000_02175808_3* var4 = (Struct_ov000_02175808_3*)var2->GetPartyMemberByIndex(var3);
        if (!var4) return;
        int var5 = var4->unknown_150_->unknown_950_;
        if (arg0->unknown_20_ >= 0 && data_ov000_0218342a[var5] == 0x20a) continue;
        var0[var5] = 1;
    }
    for (signed char var6 = 0; var6 < 13; ++var6) {
        if (var0[var6]) {
            func_ov000_021757ac(arg0, data_ov000_0218342a[var6]);
            ++var1;
        }
    }
    if (!var1) return;
    GameState* var7 = GameState::GetInstance();
    arg0->unknown_17c_ = func_020100a8(var7);
    func_ov000_021757ac(arg0, 0);
    Struct_ov000_02175808_4* var8 = (Struct_ov000_02175808_4*)func_02010828(var7);
    unsigned char var9 = var8->unknown_f7c_;
    for (unsigned char var10 = 0; var10 < var9; ++var10) {
        Struct_ov000_02175808* var11 = func_ov000_02161318(arg0, var8->unknown_f78_[var10]);
        if (var11) var11->unknown_10_[var11->unknown_18_] = 13;
    }
    func_0205d6a0(&arg0->unknown_188_, 1);
    arg0->unknown_1d6d_ = 0;
    ++arg0->unknown_1d68_;
    arg0->unknown_1d60_[arg0->unknown_1d68_] = 0x17;
    int var12 = func_ov000_0217f8c0(arg0);
    func_ov000_02176634(arg0, var12, 0x17, data_ov000_02183ff0, data_ov000_02184288[1]);
    arg0->unknown_1d81_ = 0;
}

#include <globaldefs.h>
#include "std_library_functions.h"
#include "Combat/Main/BattleList.h"
#include "GameState/GameState.h"

struct Struct_ov000_021784d4 {
    char unknown_0_[0xa0];
    short unknown_a0_;
    short unknown_a2_;
    short unknown_a4_;
    short unknown_a6_;
    short unknown_a8_;
    short unknown_aa_;
    short unknown_ac_;
    short unknown_ae_;
    char unknown_b0_;
    unsigned char unknown_b1_;
};

struct Struct_ov000_021784d4_2 {
    char unknown_0_[0x79];
    unsigned char unknown_79_;
    char unknown_7a_[0x10e];
    struct Struct_ov000_021784d4 unknown_188_;
};

struct Struct_ov000_021784d4_3 {
    char unknown_0_[0x44];
    int unknown_44_;
    int unknown_48_;
};

struct Struct_ov000_02178074_4 {
#if defined(jpn)
    char unknown_0_[0x28];
#else
    char unknown1_0_[0x5c];
#endif
    char* unknown_5c_;
};

extern "C" Struct_ov000_02178074_4* func_020421a0();

extern "C" void func_ov000_0217c638(struct Struct_ov000_021784d4_2* arg0, int arg1, int arg2);
extern "C" void func_ov000_02178648(struct Struct_ov000_021784d4_2* arg0, void* arg1);
#if defined(jpn)
extern "C" void func_0205d304(struct Struct_ov000_021784d4* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
#else
extern "C" void func_0205d304(struct Struct_ov000_021784d4* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif

// USA: func_ov000_021784d4
extern "C" ARM void func_ov000_021784d4(struct Struct_ov000_021784d4_2* arg0, struct Struct_ov000_021784d4_3* arg1, int arg2, int arg3) {
    if (arg1 == 0) {
        return;
    }
    int var0 = arg1->unknown_44_;
    int var1 = arg1->unknown_48_;
    func_02010828(GameState::GetInstance());
    unsigned char var2 = arg0->unknown_79_;
    func_ov000_0217c638(arg0, arg2, arg3);
    struct Struct_ov000_021784d4* var3 = &arg0->unknown_188_;
#if defined(jpn)
    var3->unknown_a0_ = 0xa;
#else
    var3->unknown_a0_ = 0x10;
#endif
    var3->unknown_a2_ = 1;
    var3->unknown_a4_ = (var0 >> 3) + 9;
    var3->unknown_a6_ = (var1 >> 3) + 1;
    var3->unknown_a8_ = 0xc;
    var3->unknown_aa_ = 0xa;
    var3->unknown_ac_ = 0xa;
    var3->unknown_ae_ = 0xd;
    if (var2 == 2) {
        var3->unknown_a8_ = 0xc;
        var3->unknown_aa_ = 0xa;
    }
    if (var2 == 3) {
        var3->unknown_a8_ = 0xc;
        var3->unknown_aa_ = 8;
    }
    if (var2 == 4) {
        var3->unknown_a8_ = 0xc;
        var3->unknown_aa_ = 4;
        var3->unknown_ac_ = 0xa;
        var3->unknown_ae_ = 0xb;
    }
    var3->unknown_b1_ = 8;
    char* var4 = func_020421a0()->unknown_5c_;
#if defined(jpn)
    memset(var4, 0, 0x800);
#else
    memset(var4, 0, 0x960);
#endif
    func_ov000_02178648(arg0, var4);
#if defined(jpn)
    func_0205d304(&arg0->unknown_188_, var4, 0, 1, 0, 1, 0);
#else
    func_0205d304(var3, var4, 0, 1, 0, 1, 0, 0);
#endif
}

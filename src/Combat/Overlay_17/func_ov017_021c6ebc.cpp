#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov017_021c6ebc_1816 = 0x508 };
#else
enum { Enum_ov017_021c6ebc_1816 = 0x718 };
#endif
#include "GameState/GameState.h"

extern "C" void* func_ov017_021b8478(void* arg0);
extern "C" int func_ov017_021b8468(void* arg0);
extern "C" void* func_ov017_021b8470(void* arg0);
extern "C" int func_020100a8(GameState* arg0);
struct Struct_020886dc_2;
extern "C" void func_02088818(struct Struct_020886dc_2* arg0, unsigned short arg1);

struct Struct_ov017_021c6ebc {
    unsigned short unknown_0_0_ : 2;
    unsigned short unknown_0_2_ : 4;
    unsigned short unknown_0_6_ : 3;
    unsigned short unknown_1_1_ : 3;
    unsigned short : 4;
};

struct Struct_ov017_021c6ebc_2 {
    char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    struct Struct_ov017_021c6ebc unknown_8_;
    unsigned char unknown_a_;
    unsigned char unknown_b_;
    unsigned short unknown_c_;
    unsigned short unknown_e_;
};

// USA: func_ov017_021c6ebc
extern "C" ARM void func_ov017_021c6ebc(int arg0, struct Struct_ov017_021c6ebc_2* arg1, GameState* arg2, unsigned char* arg3) {
    unsigned char* var0 = *(unsigned char**)(arg3 + 0x3000 + Enum_ov017_021c6ebc_1816);
    unsigned char* var1 = (unsigned char*)func_ov017_021b8478(var0);
    if (var1 == 0) {
        return;
    }
    if (func_ov017_021b8468(var0) == 0) {
        return;
    }
    if (func_ov017_021b8470(var0) == 0) {
        return;
    }
    if (*(signed char*)(var1 + 0x2a) == func_020100a8(arg2)) {
        return;
    }
    if (*(unsigned short*)(var1 + 8) != arg1->unknown_4_) {
        return;
    }
    GameObject* var2 = arg2->GetCombatantByIndex(arg1->unknown_6_);
    if (var2 == 0) {
        return;
    }
    struct Struct_ov017_021c6ebc* var3;
    unsigned char var4 = arg1->unknown_8_.unknown_0_0_;
    var3 = (struct Struct_ov017_021c6ebc*)((unsigned char*)var2->currentStats_ + 0x22);
    var3->unknown_0_0_ = var4;
    unsigned char var5 = arg1->unknown_8_.unknown_0_2_;
    var3 = (struct Struct_ov017_021c6ebc*)((unsigned char*)var2->currentStats_ + 0x22);
    var3->unknown_0_2_ = var5;
    unsigned char var6 = arg1->unknown_8_.unknown_0_6_;
    var3 = (struct Struct_ov017_021c6ebc*)((unsigned char*)var2->currentStats_ + 0x22);
    var3->unknown_0_6_ = var6;
    unsigned char var7 = arg1->unknown_8_.unknown_1_1_;
    func_02088818((struct Struct_020886dc_2*)var2->currentStats_, var7);
    *((unsigned char*)var2->currentStats_ + 0x24) = arg1->unknown_a_;
    *(unsigned short*)((unsigned char*)var2->currentStats_ + 4) = arg1->unknown_c_;
    *(unsigned short*)((unsigned char*)var2->currentStats_ + 6) = arg1->unknown_e_;
}

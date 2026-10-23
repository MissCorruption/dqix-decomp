#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

extern "C" int func_ov024_021fe698(void* arg0, int arg1);
extern "C" void func_ov024_021f9874(void* arg0, void* arg1, int arg2, int arg3);

struct Struct_ov024_021fcfa0 {
    char unknown_0_[4];
    short unknown_4_;
    unsigned char unknown_6_;
    GameObject* unknown_8_;
    int unknown_c_;
};

struct Struct_ov024_021fcfa0_2 {
    signed int unknown_0_0_ : 3;
    signed int unknown_0_3_ : 3;
    signed int unknown_0_6_ : 3;
    signed int unknown_1_1_ : 3;
    signed int unknown_1_4_ : 3;
    signed int unknown_1_7_ : 3;
    signed int unknown_2_2_ : 3;
    signed int unknown_2_5_ : 3;
};

// USA: func_ov024_021fcfa0
extern "C" ARM void func_ov024_021fcfa0(struct Struct_ov024_021fcfa0* arg0) {
    int var0;
    int var1 = 0;
    if (arg0->unknown_6_ == 2) var1 = 1;
    if (arg0->unknown_6_ == 0) return;
    if (arg0->unknown_c_ >= 3) var1 = 1;
    if (!var1) return;
    if (!func_ov024_021fe698(arg0, 0x12)) return;
    var0 = 0;
    if (((struct Struct_ov024_021fcfa0_2*)((char*)arg0->unknown_8_->currentStats_ + 0x58))->unknown_0_3_ >= 2) var0++;
    if (((struct Struct_ov024_021fcfa0_2*)((char*)arg0->unknown_8_->currentStats_ + 0x58))->unknown_2_5_ >= 2) var0++;
    if (((struct Struct_ov024_021fcfa0_2*)((char*)arg0->unknown_8_->currentStats_ + 0x58))->unknown_0_0_ >= 2) var0++;
    if (var0 >= 2) return;
    char var2[0xc8];
    memset(var2, 0, 0xc8);
    *(float*)(var2 + 0xc4) = 1000.0f;
    func_ov024_021f9874(arg0, var2, 0, arg0->unknown_4_ & 0xff);
}

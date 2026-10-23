#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"
struct Struct_020e4ce8 {
    unsigned int unknown_0_0_:6, unknown_0_6_:6, unknown_1_4_:6, unknown_2_2_:6, unknown_3_0_:2, unknown_3_2_:1, unknown_3_3_:1, unknown_3_4_:1, unknown_3_5_:2, unknown_3_7_:1;
};
struct Struct_020e4ce8_2 { int unknown_0_; int unknown_4_; union { unsigned int unknown_0_; Struct_020e4ce8 unknown1_0_; } unknown_8_; };
struct Struct_020e4ce8_3 { char unknown_0_[0x14]; void* unknown_14_; Struct_020e4ce8 unknown_18_; };
struct Struct_020e4ce8_4 { char unknown_0_[0x144]; Struct_020e4ce8_3* unknown_144_; char unknown_148_[4]; char unknown_14c_[1]; };
struct Struct_02000c9c_8;
extern "C" unsigned char func_0200fb08(Struct_02000c9c_8*);
extern "C" int func_020d2ff0(const char*);
extern "C" void func_020e4b34(void*, const char*, void*, unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char);
// USA: func_020e4ce8
extern "C" ARM void func_020e4ce8(Struct_020e4ce8_2* arg0, Struct_020e4ce8_4* arg1, int arg2) {
    memset(arg0, 0, 12);
    if (arg1) {
        Struct_020e4ce8_3* var0 = arg1->unknown_144_;
        const char* var1 = arg1->unknown_14c_;
        func_020e4b34(arg0, var1, var0->unknown_14_, (unsigned char)var0->unknown_18_.unknown_0_0_,
            var0->unknown_18_.unknown_0_6_, var0->unknown_18_.unknown_1_4_, var0->unknown_18_.unknown_2_2_,
            var0->unknown_18_.unknown_3_0_, var0->unknown_18_.unknown_3_2_, var0->unknown_18_.unknown_3_3_,
            var0->unknown_18_.unknown_3_4_, 0);
        int var2 = func_020d2ff0(var1);
        int var3;
        if (var2 && var1[var2 - 1] >= 'A' && var1[var2 - 1] <= 'Z') var3 = var1[var2 - 1];
        else var3 = 0;
        if (var3 && arg2) {
            if (func_0200fb08((Struct_02000c9c_8*)GameState::GetInstance()) == 1) {
                arg0->unknown_8_.unknown1_0_.unknown_1_4_ = 0;
                arg0->unknown_8_.unknown1_0_.unknown_0_0_ = 0;
            }
            arg0->unknown_8_.unknown1_0_.unknown_3_7_ = 1;
        }
    }
}

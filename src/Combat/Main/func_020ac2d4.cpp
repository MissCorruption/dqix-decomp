#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif

#include "GameState/GameState.h"
#include "std_library_functions.h"
struct Struct_020ac2d4 { unsigned short unknown_0_; };
struct Struct_020ac2d4_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_0_:1, unknown_2_1_:1, unknown_2_2_:14;
};
struct Struct_020ac2d4_3 { char unknown_0_[0x7800]; Struct_020ac2d4 unknown_7800_[0x1d7]; };
struct Struct_020ac2d4_4 { char unknown_0_[IS_JPN ? 0x84 : 0x2c4]; Struct_020ac2d4_3 unknown_2c4_; };
// USA: func_020ac2d4
extern "C" ARM int func_020ac2d4(void*, short* arg1, Struct_020ac2d4_2* arg2, int arg3) {
    Struct_020ac2d4_3* var0 = &((Struct_020ac2d4_4*)GameState::GetInstance())->unknown_2c4_;
    for (int var1 = 0; var1 < arg3; var1++) {
        int var2 = arg1[var1];
        if (var2 >= 0) {
            int var3 = 0;
            Struct_020ac2d4* var4 = var0->unknown_7800_;
            unsigned int var5 = 0;
            for (; var5 < 0x1d7; var4++, var5++) {
                int var6 = (var4->unknown_0_ & 0xfffc) >> 2;
                if (var6 <= 0) { var3 = 1; break; }
                if (var6 == var2) { var3 = 1; break; }
            }
            if (var3) {
                Struct_020ac2d4_2 var7;
                var7.unknown_0_ = var2;
                var7.unknown_2_0_ = (var4->unknown_0_ & 2) >> 1;
                var7.unknown_2_1_ = var4->unknown_0_ & 1;
                memcpy(&arg2[var1], &var7, 4);
            }
        }
    }
    return 1;
}

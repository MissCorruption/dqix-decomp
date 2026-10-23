#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif

#include "GameState/GameState.h"
#include "std_library_functions.h"
struct Struct_020ac104 {
    short unknown_0_;
    unsigned short unknown_2_0_ : 1;
    unsigned short unknown_2_1_ : 1;
    unsigned short unknown_2_2_ : 14;
};
struct Struct_020ac104_2 {
    unsigned short unknown_0_;
};
struct Struct_020ac104_3 {
    unsigned char unknown_0_[IS_JPN ? 0x7884 : 0x7ac4];
    Struct_020ac104_2 unknown_7ac4_[0x1d7];
};
struct Struct_020a0434 {
    unsigned char unknown_0_[0x10];
    unsigned int unknown_10_0_ : 23;
    unsigned int unknown_12_7_ : 9;
    unsigned char unknown_14_[0xb0 - 0x14];
};
extern "C" int func_020ac4c0(void*);
extern "C" void func_020a0434(Struct_020a0434*, unsigned int);
extern "C" int func_020ac494(void*);
// USA: func_020ac104
extern "C" ARM int func_020ac104(int arg0, Struct_020ac104* arg1, int arg2) {
    Struct_020ac104_3* var0 = (Struct_020ac104_3*)GameState::GetInstance();
    int var1 = 0;
    Struct_020ac104_2* var2 = var0->unknown_7ac4_;
    for (int var3 = 0; var3 < arg2; var3++) {
        Struct_020ac104* var4 = &arg1[var3];
        if (var4->unknown_0_ < 0) continue;
        Struct_020ac104_2* var5 = var2;
        unsigned int var6 = 0;
        unsigned int var7;
        int var8 = var4->unknown_0_;
        for (var7 = 0; var7 < 0x1d7; var7++) {
            var6 = var7;
            int var9 = (var5->unknown_0_ & 0xfffc) >> 2;
            if (var9 <= 0) {
                if (var4->unknown_2_0_ == 1) var1++;
                break;
            }
            if (var9 == var8) {
                if (!((var5->unknown_0_ & 2) >> 1) && var4->unknown_2_0_ == 1) var1++;
                break;
            }
            var5++;
        }
        Struct_020ac104_2 var10;
        var10.unknown_0_ = (var8 << 2) | (var4->unknown_2_0_ << 1) | var4->unknown_2_1_;
        memcpy(&var0->unknown_7ac4_[var6], &var10, 2);
    }
    Struct_020a0434 var11;
    func_020ac4c0(&var11);
    func_020a0434(&var11, var1);
    func_020ac494(&var11);
    return 1;
}

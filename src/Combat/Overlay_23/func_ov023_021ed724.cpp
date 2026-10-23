#include <globaldefs.h>
#include "Combat/Main/BattleList.h"
#include "std_library_functions.h"

extern "C" int func_020ac460(void* arg0);
extern "C" int func_020ac4c0(void* arg0);
extern "C" int func_020ac3c8(unsigned int* arg0, short* arg1, int arg2);
extern "C" int func_020ac494(void* arg0);

struct Struct_020a03c4 {
    char unknown_0_[0x10];
    unsigned int unknown_10_0_ : 9;
    unsigned int unknown_11_1_ : 23;
};
extern "C" void func_020a03c4(struct Struct_020a03c4* arg0, unsigned int arg1);

// USA: func_ov023_021ed724
extern "C" ARM int func_ov023_021ed724(void* arg0, short* arg1, int arg2) {
    if (arg0 == 0) return 0;
    if (arg1 == 0) return 0;
    if (arg2 == 0) return 0;

    short var0[50];
    char var1[0xb0];
    unsigned int var2[15];

    int var3 = 0;
    func_020ac460(var2);
    memset(var0, 0, 0x64);
    for (int var4 = 0; var4 < arg2; var4++) {
        var0[var4] = arg1[var4];
    }
    func_020ac3c8(var2, var0, arg2);
    func_020ac4c0(var1);
    if (((struct Struct_020a03c4*)var1)->unknown_10_0_ == 0) {
        var3 |= 1;
    }
    func_020a03c4((struct Struct_020a03c4*)var1, arg2);
    func_020ac494(var1);
    return var3;
}

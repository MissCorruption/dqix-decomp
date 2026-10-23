#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int func_020696bc(int arg0, int* arg1, int arg2);
extern "C" int func_020421a0(void);

struct Struct_02069a4c { void* unknown_0_; };

struct Struct_02069a4c_2 {
    char unknown_0_[0x194e];
    signed char unknown_194e_[4];
    signed char unknown_1952_[4];
    signed char unknown_1956_;
};

// USA: func_02069a4c
extern "C" ARM int func_02069a4c(struct Struct_02069a4c* arg0, int arg1) {
    int var0[3];
    struct Struct_02069a4c_2* var1;
    int var2, var3;

    func_020696bc(arg1, &var0[1], 2);

    var1 = (struct Struct_02069a4c_2*)func_020421a0();
    var3 = var0[2];

    var1->unknown_1956_ = var1->unknown_1956_ % 4;
    var2 = var0[1];
    var1->unknown_194e_[var1->unknown_1956_] = (signed char)var2;
    var1->unknown_1952_[var1->unknown_1956_] = (signed char)var3;
    var1->unknown_1956_ = var1->unknown_1956_ + 1;

    {
        void* var4 = arg0->unknown_0_;
        *(unsigned short*)&var0[0] = 0xff1c;
        memcpy(var4, &var0[0], 2);
    }

    return 2;
}

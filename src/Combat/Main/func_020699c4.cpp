#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int func_020696bc(int arg0, int* arg1, int arg2);
extern "C" int func_020421a0(void);

struct Struct_020699c4 { void* unknown_0_; };

// USA: func_020699c4
extern "C" ARM int func_020699c4(struct Struct_020699c4* arg0, int arg1) {
    int var0[3];
    char* var1;

    func_020696bc(arg1, var0, 3);

    var1 = (char*)func_020421a0();
    unsigned short var2 = (unsigned short)var0[2];
    int var3 = (var0[1] != 0);
    int var4 = (var0[0] != 0);
    var1[0x1000 + 0x9c6] = var4;
    var1[0x1000 + 0x9c7] = var3;
    *(unsigned short*)(var1 + 0x1800 + 0x7e) = var2;

    void* var5 = arg0->unknown_0_;
    unsigned short var6 = 0xff1b;
    memcpy(var5, &var6, 2);

    return 2;
}

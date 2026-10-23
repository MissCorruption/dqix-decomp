#include <globaldefs.h>
#include "Combat/MapDisplay.h"
#include "std_library_functions.h"

struct Struct_020200c0_3 {
    int unknown_0_;
    short unknown_4_;
    short unknown_6_;
    short unknown_8_;
    short unknown_a_;
};

struct Struct_020200c0_4 {
    int unknown_0_;
    int unknown_4_;
    unsigned char unknown_8_;
};

extern "C" void func_02023064(struct Struct_020200c0_3* arg0, unsigned int arg1, short* arg2, short* arg3, short* arg4, short* arg5);
extern "C" void func_0205b20c(struct Struct_020200c0_4* arg0);
extern "C" void func_0205b220(void* arg0, int arg1);
extern "C" void func_0205b228(void* arg0, int arg1, unsigned char arg2);
extern "C" ARM void* __clear(void* arg0, int arg1);
extern char data_020ef6b6;
extern "C" int func_0205b234(void* arg0, int arg1, int arg2, char* arg3, int arg4, int arg5);

#if defined(jpn)
extern short data_020e790a[6], data_020e7916[6], data_020e78f2[6], data_020e78fe[6];
extern "C" int func_020d2ff0(const char* arg0);

extern "C" ARM void func_02023218(Struct_02020554* arg0, char* arg1, int arg2, unsigned int arg3) {
    Struct_020200c0_3 var0[6];
    Struct_020200c0_4 var1;
    func_02023064(var0, 6, data_020e790a, data_020e7916, data_020e78f2, data_020e78fe);
    func_0205b20c(&var1);
    func_0205b220(&var1, (int)(arg1 + arg2));
    func_0205b228(&var1, (int)var0, 6);
    func_0205b234(&var1, 14, 3, arg0->inline_02023218(), 10, 15);
    func_0205b234(&var1, (short)(func_020d2ff0(arg0->inline_02023218()) / 2 * 10 + 15), 3, arg0->inline_02023218_2(), 10, 15);
}
#else
// USA: func_02023218
extern "C" ARM void func_02023218(char* arg0, char* arg1, int arg2) {
    short var2[21];
    short var3[21];
    short var4[21];
    short var5[21];
    struct Struct_020200c0_3 var6[21];
    struct Struct_020200c0_4 var7;
    char var8[0x100];
    int var9;
    int var10;
    int var11;

    __clear(var3, 0x2a);
    for (var9 = 0; var9 < 0x15; var9++) {
        var2[var9] = var9 * 8;
        var4[var9] = 8;
        var5[var9] = 0x10;
    }
    func_02023064(var6, 0x15, var2, var3, var4, var5);

    var11 = *(int*)(arg0 + 0xbe4);
    if (var11 > 0x98) {
        var10 = -*(int*)(arg0 + 0xbe8);
    } else {
        var10 = (0x98 - var11) >> 1;
    }

    func_0205b20c(&var7);
    func_0205b220(&var7, (int)(arg1 + arg2));
    func_0205b228(&var7, (int)var6, 0x15);

    __clear(var8, 0x100);
    sprintf(var8, &data_020ef6b6, arg0 + 0x5b4, arg0 + 0x5f4);

    func_0205b234(&var7, (short)var10, 3, var8, 0xf, 0);
}

#endif

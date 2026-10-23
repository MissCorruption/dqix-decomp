#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int func_ov031_022187a4(char* arg0, void* arg1, int arg2);
extern "C" int func_020c7170(char* arg0, unsigned long arg1, const char* arg2, ...);

struct Struct_ov031_02218468 {
    char* unknown_0_;
    char* unknown_4_;
    char* unknown_8_;
    int unknown_c_;
};

extern char data_ov031_02249e5c[];
extern char data_ov031_02249eb0[];

// USA: func_ov031_02218468
extern "C" ARM int func_ov031_02218468(char* arg0) {
    Struct_ov031_02218468* var0 = (Struct_ov031_02218468*)(arg0 + 0x1f8 + 0x1800);
    int var1 = *(int*)(arg0 + 0x1008);
    char* var2 = (var1 == 0) ? data_ov031_02249e5c : data_ov031_02249eb0;

    unsigned int var3 = strlen(*(char**)(arg0 + 0x1124));
    unsigned int var4 = strlen(var2);
    unsigned int var5 = strlen(*(char**)(arg0 + 0x1128));
    unsigned int var6 = var3 + ((var4 - 4) + var5);
    var6 = var6 + 0x400;

    if (func_ov031_022187a4(arg0, arg0 + 0x1f8 + 0x1800, var6) != 1) {
        return 1;
    }

    int var7 = func_020c7170(var0->unknown_4_, var0->unknown_c_, var2,
        *(char**)(arg0 + 0x1128), *(char**)(arg0 + 0x1124));
    var0->unknown_4_ = var0->unknown_4_ + var7;
    return 0;
}

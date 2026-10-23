#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_020294cc {
    unsigned int unknown_0_;
    char unknown_4_[0x2f];
};

// USA: func_020294cc
extern "C" ARM void func_020294cc(struct Struct_020294cc* arg0, unsigned char* arg1) {
    int var0;
    int var1;
    unsigned char* var2;
    unsigned char var3;
    int var4;

    if (arg1 == 0) return;

    var0 = 0;
    var2 = arg1;
    while ((var3 = *var2) != 0) {
        var1 = 0;
        if ((var3 >= 0x81 && var3 <= 0x9f) || (var3 >= 0xe0 && var3 <= 0xea)) {
            var3 = *++var2;
            var1++;
            if (var3 == 0) break;
        }
        var4 = var0 + (var1 + 1);
        var2++;
        if ((unsigned int)var4 > 0x2e) break;
        var0 = var4;
    }
    memcpy(arg0->unknown_4_, arg1, var0);
    arg0->unknown_4_[var0] = 0;
}

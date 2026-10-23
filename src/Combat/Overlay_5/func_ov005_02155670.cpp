#include <globaldefs.h>

struct Struct_ov005_02153954;

// USA: func_ov005_02155670
extern "C" ARM int func_ov005_02155670(Struct_ov005_02153954* arg0, int arg1, int arg2) {
    for (int var0 = 0; var0 < 16; var0++) {
        int var1 = (var0 % 4) * 26 + 0x8d;
        int var2 = (var0 / 4) * 26 + 0x34;
        int var3 = var1 + 0x18;
        int var4 = var2 + 0x18;
        if (arg1 >= var1 && arg2 >= var2 && arg1 <= var3 && arg2 <= var4)
            return var0 + 8;
    }
    return -1;
}

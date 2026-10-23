#include <globaldefs.h>

// USA: func_02058680
extern "C" ARM int func_02058680(char* arg0, int arg1, void** arg2, int arg3) {
    int var0 = 0;
    if (arg3 == 0) {
        int var1;
        for (var1 = 0; var1 < 0x10; var1++) {
            if (arg1 == *(int*)(arg0 + var1 * 0xd4 + 0xd8)) var0++;
        }
    } else {
        int var2;
        for (var2 = 0; var2 < 0x10; var2++) {
            int var3 = var2 * 0xd4;
            if (arg1 == *(int*)(arg0 + var3 + 0xd8)) {
                if (var0 < arg3) {
                    arg2[var0++] = (arg0 + 8) + var3;
                }
            }
        }
    }
    return var0;
}

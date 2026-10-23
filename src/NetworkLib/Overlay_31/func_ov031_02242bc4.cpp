#include <globaldefs.h>

// USA: func_ov031_02242bc4
extern "C" ARM int func_ov031_02242bc4(char* arg0, int arg1) {
    if (arg1 == 0x20) {
        arg0[0] = 0x2b;
        return 1;
    }
    if ((arg1 >= 0x30 && arg1 <= 0x39) || (arg1 >= 0x41 && arg1 <= 0x5a) || (arg1 >= 0x61 && arg1 <= 0x7a)) {
        arg0[0] = (char)arg1;
        return 1;
    }
    int var0 = (arg1 >> 4) & 0xf;
    int var1 = arg1 & 0xf;
    arg0[0] = 0x25;
    arg0[1] = (char)(var0 < 10 ? var0 + 0x30 : var0 + 0x37);
    arg0[2] = (char)(var1 < 10 ? var1 + 0x30 : var1 + 0x37);
    return 3;
}

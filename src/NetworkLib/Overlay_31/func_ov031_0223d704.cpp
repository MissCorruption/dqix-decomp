#include <globaldefs.h>

extern "C" int func_020cedc0(int arg0);
extern unsigned char data_ov031_02290d40;

// USA: func_ov031_0223d704
extern "C" ARM void func_ov031_0223d704(void) {
    unsigned char var0 = data_ov031_02290d40;
    volatile unsigned short* var1 = (volatile unsigned short*)0x27fffa8;
    if (var0 != 0) {
        if ((*var1 & 0x8000) >> 15) return;
        if (func_020cedc0(1) == 0) return;
        data_ov031_02290d40 = 0;
    } else {
        if (((*var1 & 0x8000) >> 15) == 0) return;
        if (func_020cedc0(0) != 0) {
            data_ov031_02290d40 = 1;
        }
    }
}

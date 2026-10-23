#include <globaldefs.h>

// USA: func_ov025_021ed2a0
extern "C" ARM void func_ov025_021ed2a0(char* arg0) {
    if (*(unsigned char*)(arg0 + 0x151) == 0) {
        return;
    }
    *(unsigned char*)(arg0 + 0x151) -= 1;
    for (int var0 = 0; var0 < *(unsigned char*)(arg0 + 0x151); var0++) {
        *(int*)(arg0 + 0xf0 + var0 * 4) = *(int*)(arg0 + 0xf0 + (var0 + 1) * 4);
        *(unsigned char*)(arg0 + 0x130 + var0) = *(unsigned char*)(arg0 + 0x130 + (var0 + 1));
    }
}

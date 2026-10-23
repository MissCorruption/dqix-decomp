#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void __clear(void* arg0, int arg1);
extern "C" int func_02005a94(signed char* arg0);

// USA: func_ov023_021db564
extern "C" ARM int func_ov023_021db564(char* arg0) {
    char var0[5];
    int var1 = 0;
    __clear(var0, 5);
    strncpy(var0, arg0, 4);
    var0[3] = 0;
    short var2 = (short)func_02005a94((signed char*)(var0 + 1));
    unsigned short var3 = (unsigned short)(var2 * 100);
    char var4 = var0[0];
    if (var4 == 'C') {
        var1 = var3;
    } else if (var4 == 'M') {
        var1 = var3 + 0x3e8;
    } else if (var4 == 'X') {
        var1 = var3 + 0xfa0;
    } else if (var4 == 'D') {
        var1 = var3 + 0x358 + 0x1800;
    } else if (var4 == 'T') {
        var1 = var3 + 0x328 + 0x2000;
    } else if (var4 == 'S') {
        var1 = var3 + 0x388 + 0x1000;
    } else if (var4 == 'H') {
        var1 = var3 + 0x298 + 0x3800;
        if (var1 == 0x3db8) var1 = 0x4e58;
    }
    return var1;
}

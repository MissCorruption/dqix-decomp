#include <globaldefs.h>

// USA: func_02049390
extern "C" ARM void func_02049390(unsigned char* arg0, unsigned char arg1) {
    unsigned char* var0 = *(unsigned char**)(arg0 + 0x13c);
    if (var0 != 0 && arg1 != 0xff) {
        var0[0x1c] = arg1;
    }
}

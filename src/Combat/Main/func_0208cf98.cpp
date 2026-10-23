#include <globaldefs.h>

// USA: func_0208cf98
extern "C" ARM void func_0208cf98(unsigned char* arg0) {
    unsigned short var0 = *(unsigned short*)(arg0 + 0xda);
    if (var0 & 1) {
        arg0[0xd4] = 2;
        arg0[0xd5] = 0;
        return;
    }
    if (var0 & 2) {
        arg0[0xd4] = 3;
        arg0[0xd5] = 0;
    }
}

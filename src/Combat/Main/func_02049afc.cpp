#include <globaldefs.h>

// USA: func_02049afc
extern "C" ARM int func_02049afc(unsigned char* arg0) {
    unsigned char* var0 = *(unsigned char**)(arg0 + 0x13c);
    if (var0 == 0) {
        return 0;
    }
    return var0[0x4f] != 0;
}

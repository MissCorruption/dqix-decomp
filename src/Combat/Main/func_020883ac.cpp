#include <globaldefs.h>

// USA: func_020883ac
extern "C" ARM int func_020883ac(unsigned char* arg0) {
    int var0 = *(int*)(arg0 + 0x14);
    if (var0 & 1) {
        return 0;
    }
    return (var0 & 0x1000000) == 0;
}

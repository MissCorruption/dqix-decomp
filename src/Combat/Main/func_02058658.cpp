#include <globaldefs.h>

// USA: func_02058658
extern "C" ARM void* func_02058658(void* arg0, int arg1) {
    int var0 = arg1 - 0xd0;
    if (var0 < 0 || var0 >= 0x10) {
        return 0;
    }
    return (char*)arg0 + 0x8 + var0 * 0xd4;
}

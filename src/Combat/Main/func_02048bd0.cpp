#include <globaldefs.h>

// USA: func_02048bd0
extern "C" ARM int func_02048bd0(unsigned char* arg0) {
    int* var0 = *(int**)(arg0 + 0x13c);
    if (var0 != 0) {
        return (var0[8] & 0x80) != 0;
    }
    return 0;
}

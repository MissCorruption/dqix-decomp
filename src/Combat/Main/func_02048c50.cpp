#include <globaldefs.h>

// USA: func_02048c50
extern "C" ARM void func_02048c50(unsigned char* arg0) {
    int* var0 = *(int**)(arg0 + 0x13c);
    if (var0 != 0) {
        var0[8] &= ~0x100;
    }
}

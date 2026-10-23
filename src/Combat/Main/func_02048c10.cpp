#include <globaldefs.h>

// USA: func_02048c10
extern "C" ARM int func_02048c10(unsigned char* arg0) {
    int* var0 = *(int**)(arg0 + 0x13c);
    if (var0 != 0) {
        return (var0[8] & 0x200) != 0;
    }
    return 0;
}

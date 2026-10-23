#include <globaldefs.h>

// USA: func_ov000_02159f18
extern "C" ARM int func_ov000_02159f18(void* arg0, unsigned long long arg1, unsigned int arg2) {
    if (arg2 > 31) {
        arg1 &= ((unsigned long long)(1 << (arg2 - 31)) << 32) & 0xFFFFFFFF00000000ULL;
    } else {
        arg1 &= (unsigned long long)(1 << arg2) & 0xFFFFFFFFULL;
    }
    return arg1 != 0;
}

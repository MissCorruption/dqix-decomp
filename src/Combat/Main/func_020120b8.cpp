#include <globaldefs.h>

// USA: func_020120b8
extern "C" ARM int* func_020120b8(char* arg0, int arg1) {
#if defined(jpn)
    int* var0 = (int*)(arg0 + 0x5a7c);
#else
    int* var0 = (int*)(arg0 + 0x5cdc);
#endif
    int* var1 = &var0[arg1];
    if (((unsigned int)*var1 >> 31) == 0) {
        var1 = 0;
    }
    return var1;
}

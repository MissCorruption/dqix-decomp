#include <globaldefs.h>

#if defined(jpn)
#define COUNTER_0216c628 0xb38
#else
#define COUNTER_0216c628 0xc74
#endif

// USA: func_ov002_0216c628
extern "C" ARM int func_ov002_0216c628(unsigned char* arg0, int arg1) {
    int var0 = *(int*)(arg0 + 0x1000 + COUNTER_0216c628);
    if (var0 > arg1) {
        *(int*)(arg0 + 0x1000 + COUNTER_0216c628) = var0 - arg1;
        goto ret1;
    }
    *(int*)(arg0 + 0x1000 + COUNTER_0216c628) = 0;
    return 0;
ret1:
    return 1;
}

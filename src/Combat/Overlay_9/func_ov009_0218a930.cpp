#include <globaldefs.h>
#if defined(jpn)
#define COUNTER_OFFSET 0xd5a
#else
#define COUNTER_OFFSET 0xd96
#endif

#if defined(jpn)
#define func_ov009_0218a930 func_ov009_0218b908
#endif

// USA: func_ov009_0218a930
extern "C" ARM int func_ov009_0218a930(char* arg0, int arg1) {
    short var0 = *(short*)(arg0 + COUNTER_OFFSET);
    if (var0 > arg1) {
        *(short*)(arg0 + COUNTER_OFFSET) = var0 - arg1;
        goto ret1;
    }
    *(short*)(arg0 + COUNTER_OFFSET) = 0;
    return 0;
ret1:
    return 1;
}

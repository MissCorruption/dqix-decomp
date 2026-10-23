#if defined(jpn)
#define RECORD_ARRAY_OFFSET 0x6d8
#else
#define RECORD_ARRAY_OFFSET 0x784
#endif
#if defined(jpn)
#define RECORD_COUNT_OFFSET 0x6d4
#else
#define RECORD_COUNT_OFFSET 0x780
#endif
#include <globaldefs.h>
#include "NitroSDK/Memory.h"

// USA: func_020269e4
extern "C" ARM void func_020269e4(char* arg0, const void* arg1) {
    unsigned char var0 = *(unsigned char*)(arg0 + RECORD_COUNT_OFFSET);
    if (var0 >= 0x14) return;
    if (arg1 == NULL) return;
    VectorizedInvertedMemcpy(arg1, arg0 + RECORD_ARRAY_OFFSET + var0 * 0x1c, 0x1c);
    *(unsigned char*)(arg0 + RECORD_COUNT_OFFSET) += 1;
}

#include <globaldefs.h>
#if defined(jpn)
#define LIST_BASE 0x1b00
#define LIST_COUNT 0x37
#define LIST_DATA 0x32
#else
#define LIST_BASE 0x1c00
#define LIST_COUNT 0x73
#define LIST_DATA 0x6e
#endif

// USA: func_ov002_02157480
extern "C" ARM void func_ov002_02157480(void* arg0, int* arg1) {
    if (arg1 == NULL) return;
    for (int var0 = 0; var0 < 4; var0++) arg1[var0] = -1;
    int var1 = 0;
    while (var1 < *((signed char*)arg0 + LIST_BASE + LIST_COUNT)) {
        arg1[var1] = *((signed char*)arg0 + var1 + LIST_BASE + LIST_DATA);
        var1++;
    }
}

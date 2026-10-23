#include <globaldefs.h>
#if defined(jpn)
#define LIST_COUNT 0xb14
#define LIST_DATA 0xb18
#else
#define LIST_COUNT 0xc50
#define LIST_DATA 0xc54
#endif

// USA: func_ov002_02157424
extern "C" ARM void func_ov002_02157424(void* arg0, int* arg1) {
    if (arg1 == NULL) return;
    for (int var0 = 0; var0 < 7; var0++) arg1[var0] = -1;
    arg1[0] = 4;
    int var1 = 0;
    while (var1 < *(int*)((char*)arg0 + 0x1000 + LIST_COUNT)) {
        int var2 = *(int*)((char*)arg0 + var1 * 4 + 0x1000 + LIST_DATA);
        var1++;
        arg1[var1] = var2;
    }
}

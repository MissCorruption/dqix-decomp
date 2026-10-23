#include <globaldefs.h>

// USA: func_ov023_021d994c
extern "C" ARM void* func_ov023_021d994c(void* arg0, int arg1) {
    char* var0 = *(char**)((char*)arg0 + 0x120);
    int var1 = 0;
    while (var1 < *(unsigned char*)((char*)arg0 + 0x11e)) {
        if (*(unsigned char*)var0 == arg1) {
            return var0;
        }
        var1++;
        #if defined(jpn)
        var0 += 0x8e0;
#else
        var0 += 0x99c;
#endif
    }
    return NULL;
}

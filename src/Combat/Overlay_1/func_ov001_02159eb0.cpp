#include <globaldefs.h>

// USA: func_ov001_02159eb0
extern "C" ARM void* func_ov001_02159eb0(void* arg0) {
    char* var0 = *(char**)arg0;
    int var1;
    for (var1 = 0; var1 < *(int*)((char*)arg0 + 4); var1++, var0 += 0x40) {
        if (*(int*)var0 == 0) {
            *(int*)(var0 + 0x3c) = 0;
            return var0;
        }
    }
    return NULL;
}

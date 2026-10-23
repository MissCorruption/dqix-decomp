#include <globaldefs.h>

extern "C" int func_ov000_02169aa4(void* arg0);

// USA: func_02048ae0
extern "C" ARM int func_02048ae0(void* arg0, int, void*, int) {
    void* var0 = *(void**)((char*)arg0 + 0x13c);
    if (var0 == NULL) return 0;
    void* var1 = *(void**)var0;
    if (var1 == NULL) return 0;
    return func_ov000_02169aa4(var1);
}

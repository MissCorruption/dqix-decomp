#include <globaldefs.h>

// USA: func_ov000_02165480
extern "C" ARM void func_ov000_02165480(void* arg0, int arg1) {
    int* var0 = *(int**)((char*)arg0 + 0x13c);
    if (var0 != NULL) {
        *var0 = arg1;
    }
}

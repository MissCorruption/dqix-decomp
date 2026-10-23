#include <globaldefs.h>

// USA: func_02011408
extern "C" ARM void func_02011408(void* arg0) {
    char* var0 = (char*)arg0;
    int var1;
    for (var1 = 0; var1 < 10; var1++) {
#if defined(jpn)
        (var0 + var1)[0x5a70] = 0;
#else
        (var0 + var1)[0x5cd0] = 0;
#endif
    }
}

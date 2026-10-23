#include <globaldefs.h>

extern "C" int func_020bc0a4(int);

// USA: func_0209ca2c
extern "C" ARM int func_0209ca2c(void* arg0) {
    short var0 = *(short*)((char*)arg0 + 0xce);
    if (var0 < 0) return 0;
    if (*(unsigned char*)((char*)arg0 + 0xc9) != 0) return 1;
    return func_020bc0a4(var0) > 0;
}

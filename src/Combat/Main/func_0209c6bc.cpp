#include <globaldefs.h>

extern "C" int func_020bc0a4(int);

// USA: func_0209c6bc
extern "C" ARM int func_0209c6bc(void* arg0) {
    return func_020bc0a4(*(short*)((char*)arg0 + 0xb8)) != 0;
}

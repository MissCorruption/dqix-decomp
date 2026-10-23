#include <globaldefs.h>

// USA: func_ov000_0217f464
extern "C" ARM int func_ov000_0217f464(void* arg0) {
    signed char var0 = *((signed char*)arg0 + 0x18);
    signed char var1 = *((signed char*)arg0 + var0 + 0x10);
    return var1 < 0x64;
}

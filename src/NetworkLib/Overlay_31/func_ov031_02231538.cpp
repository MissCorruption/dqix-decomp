#include <globaldefs.h>

// USA: func_ov031_02231538
extern "C" ARM int func_ov031_02231538(void) {
    int var0 = *(unsigned short*)0x27fffa8 & 0x8000;
    return (var0 >> 15) ? 1 : 0;
}

#include <globaldefs.h>

#if defined(jpn)
#define func_020c39c8 func_020c5494
#endif

extern "C" int func_020c39c8(volatile unsigned short* arg0);

// USA: func_020dbfe0
extern "C" ARM int func_020dbfe0() {
    return func_020c39c8((volatile unsigned short*)0x400106c);
}

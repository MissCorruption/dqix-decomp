#include <globaldefs.h>

#if defined(jpn)
#define func_020c39c8 func_020c5494
#endif

extern "C" int func_020c39c8(volatile unsigned short* p);

// USA: func_020dbff4
ARM int GetMasterBrightnessMain_020dbff4() {
    return func_020c39c8((volatile unsigned short*)0x400006c);
}

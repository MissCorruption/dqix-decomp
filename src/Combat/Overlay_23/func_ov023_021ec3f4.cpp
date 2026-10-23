#include <globaldefs.h>
#include "NitroSDK/Graphics.h"

// USA: func_ov023_021ec3f4
extern "C" ARM void func_ov023_021ec3f4(int arg0, int arg1, int arg2, int arg3) {
    BG3CNT = (unsigned short)((BG3CNT & 0x43) | (arg0 << 14) | (arg1 << 7) | (arg2 << 8) | (arg3 << 2));
}

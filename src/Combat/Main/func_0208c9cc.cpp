#include <globaldefs.h>
#include "NitroSDK/Graphics.h"

// USA: func_0208c9cc
extern "C" ARM void func_0208c9cc(int arg0, int arg1, int arg2, int arg3, int arg4) {
    BG0CNTSUB = (BG0CNTSUB & 0x43) | (arg0 << 14) | (arg1 << 7) |
                (arg2 << 8) | (arg3 << 2) | (arg4 << 13);
}

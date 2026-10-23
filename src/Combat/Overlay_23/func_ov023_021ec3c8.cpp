#include <globaldefs.h>
#include <NitroSDK/Graphics.h>

// USA: func_ov023_021ec3c8
extern "C" ARM void func_ov023_021ec3c8(int arg0, int arg1, int arg2, int arg3) {
    BG3CNTSUB = (unsigned short)((BG3CNTSUB & 0x43) | (arg0 << 14) | (arg1 << 7) | (arg2 << 8) | (arg3 << 2));
}

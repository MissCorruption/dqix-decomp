#include <globaldefs.h>

// USA: func_020e29ec
extern "C" ARM void func_020e29ec(int arg0, int arg1, int arg2, int arg3) {
    *(volatile unsigned short*)0x4001040 = ((arg0 << 8) & 0xff00) | (arg2 & 0xff);
    *(volatile unsigned short*)0x4001044 = ((arg1 << 8) & 0xff00) | (arg3 & 0xff);
}

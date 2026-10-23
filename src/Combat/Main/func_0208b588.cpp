#include <globaldefs.h>

// USA: func_0208b588
// Packs the GX POLYGON_ATTR register (0x040004A4).
extern "C" ARM void func_0208b588(unsigned int arg0, unsigned int arg1, unsigned int arg2,
                                  unsigned int arg3, unsigned int arg4, unsigned int arg5) {
    *(volatile unsigned int*)0x40004a4 =
        arg0 | (arg1 << 4) | (arg2 << 6) | arg5 | (arg3 << 24) | (arg4 << 16);
}

#include <globaldefs.h>

extern "C" ARM void LoadToMainBGStandardPalette(int src, int dstOffset, unsigned int size);

// USA: func_020bbabc
extern "C" ARM void func_020bbabc(int arg0, int arg1, unsigned int arg2) {
    LoadToMainBGStandardPalette(arg0, arg1, arg2);
}

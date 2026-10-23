#include <globaldefs.h>

extern "C" ARM void LoadToMainBGStandardPalette(int src, int dstOffset, unsigned int size);

// USA: func_020bbabc
extern "C" ARM void func_020bbabc(int src, int dstOffset, unsigned int size) {
    LoadToMainBGStandardPalette(src, dstOffset, size);
}

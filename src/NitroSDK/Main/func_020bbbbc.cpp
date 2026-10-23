#include <globaldefs.h>

extern "C" void LoadToSubBGStandardPalette(int, int, unsigned int);

// USA: func_020bbbbc
extern "C" ARM void func_020bbbbc(int arg0, int arg1, unsigned int arg2) {
    LoadToSubBGStandardPalette(arg0, arg1, arg2);
}

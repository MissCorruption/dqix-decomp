#include <globaldefs.h>
extern "C" void LoadToMainBGExtendedPalette(int, int, int);

extern "C" void MemoryMapMainBGExtendedPalette(int a, int b, int c);
extern "C" void MemoryUnmapMainBGExtendedPalette(void);

// USA: func_020bbaf4
extern "C" ARM void func_020bbaf4(int arg0, int arg1, int arg2) {
    MemoryMapMainBGExtendedPalette(arg0, arg1, arg2);
    LoadToMainBGExtendedPalette((int)(arg0), (int)(arg1), (int)(arg2));
    MemoryUnmapMainBGExtendedPalette();
}

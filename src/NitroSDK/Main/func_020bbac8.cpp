#include <globaldefs.h>
extern "C" void LoadToMainObjExtendedPalette(int, int, int);

extern "C" void MemoryMapMainObjExtendedPalette(int a, int b, int c);
extern "C" void MemoryUnmapMainObjExtendedPalette(void);

// USA: func_020bbac8
extern "C" ARM void func_020bbac8(int arg0, int arg1, int arg2) {
    MemoryMapMainObjExtendedPalette(arg0, arg1, arg2);
    LoadToMainObjExtendedPalette((int)(arg0), (int)(arg1), (int)(arg2));
    MemoryUnmapMainObjExtendedPalette();
}

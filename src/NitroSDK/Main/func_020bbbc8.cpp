#include <globaldefs.h>
extern "C" void LoadToSubObjExtendedPalette(int, unsigned int, int);

extern "C" void MemoryMapSubObjExtendedPalette(void);
extern "C" void MemoryUnmapSubObjExtendedPalette(void);

// USA: func_020bbbc8
extern "C" ARM void func_020bbbc8(int arg0, int arg1, int arg2) {
    MemoryMapSubObjExtendedPalette();
    LoadToSubObjExtendedPalette((int)(arg0), (unsigned int)(arg1), (int)(arg2));
    MemoryUnmapSubObjExtendedPalette();
}

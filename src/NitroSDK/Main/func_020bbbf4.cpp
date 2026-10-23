#include <globaldefs.h>
extern "C" void LoadToSubBGExtendedPalette(int, unsigned int, int);

extern "C" void MemoryMapSubBGExtendedPalette(void);
extern "C" void MemoryUnmapSubBGExtendedPalette(void);

// USA: func_020bbbf4
extern "C" ARM void func_020bbbf4(int arg0, int arg1, int arg2) {
    MemoryMapSubBGExtendedPalette();
    LoadToSubBGExtendedPalette((int)(arg0), (unsigned int)(arg1), (int)(arg2));
    MemoryUnmapSubBGExtendedPalette();
}

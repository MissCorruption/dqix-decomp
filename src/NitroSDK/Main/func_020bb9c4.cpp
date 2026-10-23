#include <globaldefs.h>

extern "C" void MemoryMapTexturePalette(int, int, int);
extern "C" void LoadToTexturePalette(int, int, int);
extern "C" void MemoryUnmapTexturePalette(void);

// USA: func_020bb9c4
extern "C" ARM void func_020bb9c4(int arg0, int arg1, int arg2) {
    MemoryMapTexturePalette(arg0, arg1, arg2);
    LoadToTexturePalette(arg0, arg1, arg2);
    MemoryUnmapTexturePalette();
}

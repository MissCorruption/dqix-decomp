#include <globaldefs.h>

extern "C" void MemoryMapTextureImage(int, int, int);
extern "C" void LoadToTextureImage(int, int, int);
extern "C" void MemoryUnmapTextureImage(void);

// USA: func_020bb998
extern "C" ARM void func_020bb998(int arg0, int arg1, int arg2) {
    MemoryMapTextureImage(arg0, arg1, arg2);
    LoadToTextureImage(arg0, arg1, arg2);
    MemoryUnmapTextureImage();
}

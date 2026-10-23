#include <globaldefs.h>
extern "C" void LoadClearImage(int, int);

extern "C" void MemoryMapClearTexture(int a, int b, int c);
extern "C" void MemoryUnmapClearTexture(void);

// USA: func_020bb9f0
extern "C" ARM void func_020bb9f0(int arg0, int arg1, int arg2) {
    MemoryMapClearTexture(arg0, arg1, arg2);
    LoadClearImage((int)(arg0), (int)(arg2));
    MemoryUnmapClearTexture();
}

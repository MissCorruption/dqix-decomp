#include <globaldefs.h>
extern "C" void LoadClearDepthBuffer(int, int);

extern "C" void MemoryMapClearTexture(int a, int b, int c);
extern "C" void MemoryUnmapClearTexture(void);

// USA: func_020bba14
extern "C" ARM void func_020bba14(int arg0, int arg1, int arg2) {
    MemoryMapClearTexture(arg0, arg1, arg2);
    LoadClearDepthBuffer((int)(arg0), (int)(arg2));
    MemoryUnmapClearTexture();
}

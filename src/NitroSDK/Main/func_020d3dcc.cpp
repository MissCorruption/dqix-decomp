#include <globaldefs.h>

extern "C" int func_020d3df8(int, int, int);
extern void* data_021142e0[];


// USA: func_020d3dcc
extern "C" ARM int func_020d3dcc(int arg0, int arg1) {
    int var0 = func_020d3df8(arg0, arg1, 0xf00);
    if (var0 != 0) return var0;
    *(short*)((char*)data_021142e0[1] + 0x16) = 0;
    return var0;
}

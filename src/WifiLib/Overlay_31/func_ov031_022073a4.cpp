#include <globaldefs.h>

struct Struct_ov031_022073a4;
extern "C" ARM int func_ov031_022073a4(int arg0, int arg1, int arg2, int arg3, const Struct_ov031_022073a4* arg4);

// USA: func_ov031_0221e5a0
extern "C" THUMB int func_ov031_0221e5a0(int arg0, const void* arg1, int arg2, int arg3, void* arg4, int arg5) {
    *(unsigned char*)arg4 = (unsigned char)arg5;
    return func_ov031_022073a4(arg0, (int)arg1, arg2, arg3, (const Struct_ov031_022073a4*)arg4);
}

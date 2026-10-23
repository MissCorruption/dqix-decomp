#include <globaldefs.h>

extern "C" void* func_ov001_02158e0c(void*);

// USA: func_ov001_02159168
extern "C" ARM void* func_ov001_02159168(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, unsigned char arg6) {
    unsigned int* var0 = (unsigned int*)func_ov001_02158e0c(arg0);
    if (var0 != NULL) {
        var0[0] = 0xe;
        var0[1] = arg1;
        var0[2] = arg2;
        var0[3] = arg3;
        *(int*)((char*)var0 + 0x1c) = arg4;
        *(int*)((char*)var0 + 0x20) = arg5;
        *(int*)((char*)var0 + 0x24) = arg6;
    }
    return var0;
}

#include <globaldefs.h>

#if defined(jpn)
#define func_020c5188 func_020c6c54
#endif

extern "C" void Mat4x3_WriteViewMatrix(int, int, int, void*);
extern "C" void func_020c5188(int arg0);

// USA: func_020c57d4
extern "C" ARM void func_020c57d4(int arg0, int arg1, int arg2, int arg3, void* arg4) {
    unsigned char var0[0x30];
    void* var1 = arg4 ? arg4 : var0;
    Mat4x3_WriteViewMatrix(arg0, arg1, arg2, var1);
    if (!arg3) return;
    *(volatile int*)0x4000440 = 2;
    func_020c5188((int)var1);
}

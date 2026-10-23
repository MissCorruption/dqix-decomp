#include <globaldefs.h>

#if defined(jpn)
#define func_020c5188 func_020c6c54
#endif

extern "C" void Mat4x3_WriteViewMatrix(int, int, int, void*);
extern "C" void func_020c5188(int cmd);

// USA: func_020c57d4
extern "C" ARM void func_020c57d4(int a, int b, int c, int flag, void* buf) {
    unsigned char local[0x30];
    void* dst = buf ? buf : local;
    Mat4x3_WriteViewMatrix(a, b, c, dst);
    if (!flag) return;
    *(volatile int*)0x4000440 = 2;
    func_020c5188((int)dst);
}

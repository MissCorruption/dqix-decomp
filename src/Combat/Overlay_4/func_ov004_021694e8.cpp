#if defined(jpn)
#define R(j,u) (j)
#define func_ov023_021f6524 func_ov004_02168f08
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

extern "C" void* func_ov023_021f6524(void* arg0, int arg1);
extern "C" void func_ov023_021f9ba8(void* arg0, unsigned short arg1);

// USA: func_ov004_021694e8
extern "C" ARM int func_ov004_021694e8(void* arg0) {
    void* var0 = func_ov023_021f6524(arg0, 0x65);
    if (var0 != 0) {
        func_ov023_021f9ba8(var0, 1);
    }
    return 0;
}

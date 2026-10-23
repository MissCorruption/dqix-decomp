#include <globaldefs.h>

static inline int inline_020b1ec0(int arg0) {
    int var0 = arg0;
    __asm("clz %0, %0" : "+r"(var0));
    return var0;
}

extern const unsigned char data_020e91e0[32];
extern int data_020e91d4;

struct Struct_020b1d48_2;
extern "C" void func_020b1d48(Struct_020b1d48_2*, int, int, int, int, int, int);

// USA: func_020b1ec0
extern "C" ARM void func_020b1ec0(void* arg0, int arg1, int arg2, int arg3, int arg4) {
    int var0 = (arg2 >= 8) ? 3 : (0x1f - inline_020b1ec0(arg2));
    int var1 = (arg3 >= 8) ? 3 : (0x1f - inline_020b1ec0(arg3));

    const unsigned char* var2 = data_020e91e0 + var1 * 8;

    volatile int var3;
    int var4 = (var3 & ~0xff) | var2[var0 * 2];
    int var5 = (var4 & ~0xff00) | ((unsigned)(*(var2 + var0 * 2 + 1)) << 24 >> 16);
    var3 = var5;

    func_020b1d48((Struct_020b1d48_2*)arg0, arg1, arg2, arg3, arg4, (int)&data_020e91d4, var5);
}

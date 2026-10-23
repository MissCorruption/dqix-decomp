#include <globaldefs.h>

extern "C" int fix32_Divide(unsigned int, unsigned int);
extern "C" void func_0202e5d8(void*, int, int, int);

// USA: func_0202e808
extern "C" ARM void func_0202e808(void* arg0, int arg1) {
    int* var0 = (int*)arg0;
    int var1 = fix32_Divide(arg1, var0[0x1e]);
    var0[0x1d] = (int)(((long long)var0[0x1d] * var1 + 0x800) >> 12);
    var0[0x1e] = arg1;
    func_0202e5d8(arg0, var0[0x1c], var0[0x1d], arg1);
}

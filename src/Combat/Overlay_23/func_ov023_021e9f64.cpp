#include <globaldefs.h>

extern "C" int func_020ac4c0(void* arg0);
extern "C" void func_ov017_021d6134(void*, unsigned int);

// USA: func_ov023_021e9f64
extern "C" ARM int func_ov023_021e9f64(void* arg0) {
    unsigned char var0[0xb0];
    func_020ac4c0(var0);
    unsigned int var1 = *(unsigned int*)(var0 + 0x44);
    if (var1 > 0x7fffffff) var1 = 0x7fffffff;
    func_ov017_021d6134(arg0, var1);
    return 1;
}

#include <globaldefs.h>

extern "C" int func_020ac4c0(void* arg0);
extern "C" int func_ov017_021d60f4(void* arg0);
extern "C" void func_ov017_021d6134(void* arg0, int arg1);

// USA: func_ov023_021e9278
extern "C" ARM int func_ov023_021e9278(void* arg0) {
    char var0[0xb0];
    func_020ac4c0(var0);
    int var1 = 0;
    int var2 = func_ov017_021d60f4(arg0);
    unsigned int var3 = *(unsigned int*)(var0 + 0x4c + (var2 / 32) * 4);
    if (var3 & (1 << (var2 % 32))) {
        var1 = 1;
    }
    if (var1 != 0) {
        func_ov017_021d6134((char*)arg0 + 8, 1);
    } else {
        func_ov017_021d6134((char*)arg0 + 8, 0);
    }
    return 1;
}

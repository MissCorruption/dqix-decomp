#include <globaldefs.h>

extern "C" int func_020ac4c0(void* arg0);
extern "C" void func_ov017_021d6134(void* arg0, int arg1);

// USA: func_ov023_021eae0c
extern "C" ARM int func_ov023_021eae0c(void* arg0) {
    unsigned char var0[0xb0];
    func_020ac4c0(var0);
    func_ov017_021d6134(arg0, *(int*)(var0 + 0xac));
    return 1;
}

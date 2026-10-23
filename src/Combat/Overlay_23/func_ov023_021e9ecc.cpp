#include <globaldefs.h>

extern "C" int func_020ac0b4(void* arg0);
extern "C" void func_ov017_021d6134(void*, int);

// USA: func_ov023_021e9ecc
extern "C" ARM int func_ov023_021e9ecc(void* arg0) {
    int var0 = 0;
    func_020ac0b4(&var0);
    func_ov017_021d6134(arg0, var0);
    return 1;
}

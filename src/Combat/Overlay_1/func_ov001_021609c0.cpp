#include <globaldefs.h>

extern "C" int func_020421a0();
extern "C" int func_020457e0();
extern "C" void func_ov017_021d6134(void*, unsigned int);

// USA: func_ov001_021609c0
extern "C" ARM int func_ov001_021609c0(void* arg0) {
    func_020421a0();
    int var0 = func_020457e0();
    func_ov017_021d6134(arg0, var0);
    return 1;
}

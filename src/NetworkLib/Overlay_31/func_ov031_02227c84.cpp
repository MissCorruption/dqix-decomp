#include <globaldefs.h>

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

extern "C" int func_ov031_02222adc(void *arg0);
extern "C" void func_020c9be0(void);
extern "C" void func_ov031_02236250(void *arg0);

// USA: func_ov031_02227c84
extern "C" ARM void func_ov031_02227c84(void) {
    char var0[0xe8];
    if (func_ov031_02222adc(var0) != 1) {
        func_020c9be0();
    }
    func_ov031_02236250(var0);
}

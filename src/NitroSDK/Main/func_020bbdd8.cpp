#include <globaldefs.h>
extern "C" void func_020d2680(unsigned int);

extern "C" int func_020d26ec(void);

extern "C" void func_020bd02c(void);
extern "C" void func_020d1f0c(int arg0, int arg1, int arg2, int arg3);
extern "C" void func_020d24c4(int arg0);

// USA: func_020bbdd8
extern "C" ARM void func_020bbdd8(void) {
    func_020bd02c();
    func_020d1f0c(0, 0, 0, 0);
    int var0 = func_020d26ec();
    func_020d24c4(1);
    func_020d2680((unsigned int)(var0));
}

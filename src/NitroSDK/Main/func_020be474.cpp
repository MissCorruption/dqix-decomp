#include <globaldefs.h>

extern "C" void func_020be3f4(int, void*, unsigned int);

extern "C" void func_020d2c00(int);
extern "C" void func_020d20a4(int, int);

// USA: func_020be474
extern "C" ARM void func_020be474(int arg0, int arg1, int arg2, int arg3) {
    func_020be3f4((int)(arg0), (void*)(arg2), (unsigned int)(arg3));
    func_020d20a4(arg0, arg0 + arg1);
    func_020d2c00(arg0);
}

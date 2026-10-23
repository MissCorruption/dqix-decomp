#include <globaldefs.h>
extern "C" void func_020be3f4(int, void*, unsigned int);

extern "C" void func_020d2c98(int arg0);

// USA: func_020be4d4
extern "C" ARM void func_020be4d4(int arg0, int arg1, int arg2, int arg3) {
    func_020be3f4((int)(arg0), (void*)(arg2), (unsigned int)(arg3));
    func_020d2c98(arg0);
}

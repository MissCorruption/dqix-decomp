#include <globaldefs.h>
extern "C" void func_020be3f4(int, void*, unsigned int);

extern "C" void func_020d2084(int arg0, int arg1);

// USA: func_020be44c
extern "C" ARM void func_020be44c(int arg0, int arg1, int arg2, int arg3) {
    func_020be3f4((int)(arg0), (void*)(arg2), (unsigned int)(arg3));
    func_020d2084(arg0, arg0 + arg1);
}

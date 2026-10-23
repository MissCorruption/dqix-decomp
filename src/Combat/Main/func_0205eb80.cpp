#include <globaldefs.h>

extern "C" void func_0203aa80(void* obj, int arg2);

// USA: func_0205eb80
extern "C" ARM void func_0205eb80(void* obj) {
    func_0203aa80(obj, *(int*)((char*)obj + 0xc0));
}

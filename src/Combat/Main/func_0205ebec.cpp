#include <globaldefs.h>

extern "C" void func_0203aa80(void* obj, int arg2);

// USA: func_0205ebec
extern "C" ARM void func_0205ebec(void* obj) {
    func_0203aa80(obj, *(int*)((char*)obj + 0xc0));
}

#include <globaldefs.h>

extern "C" void func_0203aa80(void* obj, int arg2);
extern "C" int func_0203aa98(void*, int);

// USA: func_0205ebc0
extern "C" ARM void func_0205ebc0(void* obj, int arg1, int arg2) {
    func_0203aa80(obj, *(int*)((char*)obj + 0xc0));
    func_0203aa98(obj, arg1);
    *(short*)((char*)obj + 0xc4) = (short)arg2;
}

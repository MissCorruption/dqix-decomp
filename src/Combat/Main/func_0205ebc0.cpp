#include <globaldefs.h>

extern "C" void func_0203aa80(void* arg0, int arg1);
extern "C" int func_0203aa98(void*, int);

// USA: func_0205ebc0
extern "C" ARM void func_0205ebc0(void* arg0, int arg1, int arg2) {
    func_0203aa80(arg0, *(int*)((char*)arg0 + 0xc0));
    func_0203aa98(arg0, arg1);
    *(short*)((char*)arg0 + 0xc4) = (short)arg2;
}

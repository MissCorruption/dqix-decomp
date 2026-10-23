#include <globaldefs.h>

extern "C" void func_0202eab8(void* arg0);
struct Struct_0202ed7c;
extern "C" int func_020a0d6c(struct Struct_0202ed7c*, int*, int*, int, int, int);

// USA: func_0202edf8
extern "C" ARM void func_0202edf8(char* arg0, int arg1, int arg2, int arg3, int arg4) {
    func_0202eab8(arg0);
    func_020a0d6c((struct Struct_0202ed7c*)(arg0 + 0x1bc), (int*)(arg0 + 0x70), (int*)arg1, arg2, arg3, arg4);
}

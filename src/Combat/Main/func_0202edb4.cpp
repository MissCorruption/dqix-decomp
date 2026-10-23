#include <globaldefs.h>

struct Struct_0202ed7c;
extern "C" int func_020a0d6c(struct Struct_0202ed7c*, int*, int*, int, int, int);

// USA: func_0202edb4
extern "C" ARM void func_0202edb4(char* arg0, int arg1, int arg2, int arg3, int arg4) {
    func_020a0d6c((struct Struct_0202ed7c*)(arg0 + 0x194), (int*)(arg0 + 0x10), (int*)arg1, arg2, arg3, arg4);
    *(int*)(arg0 + 0x168) &= ~0x2;
}

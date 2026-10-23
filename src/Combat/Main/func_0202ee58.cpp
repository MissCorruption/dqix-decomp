#include <globaldefs.h>

struct Struct_0202ee38;
extern "C" int func_020a0db8(struct Struct_0202ee38*, int*, int*, int);

// USA: func_0202ee58
extern "C" ARM void func_0202ee58(char* arg0, int arg1, int arg2) {
    func_020a0db8((struct Struct_0202ee38*)(arg0 + 0x194), (int*)(arg0 + 0x10), (int*)arg1, arg2);
    *(int*)(arg0 + 0x168) &= ~0x2;
}

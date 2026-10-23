#include <globaldefs.h>

struct Vec3PairRecord020a0db8;
extern "C" int func_020a0db8(struct Vec3PairRecord020a0db8*, int*, int*, int);

// USA: func_0202ee58
extern "C" ARM void func_0202ee58(char* obj, int a, int b) {
    func_020a0db8((struct Vec3PairRecord020a0db8*)(obj + 0x194), (int*)(obj + 0x10), (int*)a, b);
    *(int*)(obj + 0x168) &= ~0x2;
}

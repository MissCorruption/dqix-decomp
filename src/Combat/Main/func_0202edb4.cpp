#include <globaldefs.h>

struct Vec3PairRecord020a0d6c;
extern "C" int func_020a0d6c(struct Vec3PairRecord020a0d6c*, int*, int*, int, int, int);

// USA: func_0202edb4
extern "C" ARM void func_0202edb4(char* obj, int a, int b, int c, int d) {
    func_020a0d6c((struct Vec3PairRecord020a0d6c*)(obj + 0x194), (int*)(obj + 0x10), (int*)a, b, c, d);
    *(int*)(obj + 0x168) &= ~0x2;
}

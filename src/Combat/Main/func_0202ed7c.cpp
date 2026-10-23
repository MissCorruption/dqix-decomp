#include <globaldefs.h>

struct Vec3PairRecord020a0d6c;
extern "C" int func_020a0d6c(struct Vec3PairRecord020a0d6c*, int*, int*, int, int, int);

// USA: func_0202ed7c
extern "C" ARM int func_0202ed7c(char* obj, int a, int b, int c, int d) {
    return func_020a0d6c((struct Vec3PairRecord020a0d6c*)(obj + 0x16c), (int*)(obj + 0x4), (int*)a, b, c, d);
}

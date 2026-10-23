#include <globaldefs.h>

struct Vec3PairRecord020a0db8;
extern "C" int func_020a0db8(struct Vec3PairRecord020a0db8*, int*, int*, int);

// USA: func_0202ee38
extern "C" ARM int func_0202ee38(char* obj, int a, int b) {
    return func_020a0db8((struct Vec3PairRecord020a0db8*)(obj + 0x16c), (int*)(obj + 0x4), (int*)a, b);
}

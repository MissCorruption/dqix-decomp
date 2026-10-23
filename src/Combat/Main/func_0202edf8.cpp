#include <globaldefs.h>

extern "C" void func_0202eab8(void* obj);
struct Vec3PairRecord020a0d6c;
extern "C" int func_020a0d6c(struct Vec3PairRecord020a0d6c*, int*, int*, int, int, int);

// USA: func_0202edf8
extern "C" ARM void func_0202edf8(char* obj, int a, int b, int c, int d) {
    func_0202eab8(obj);
    func_020a0d6c((struct Vec3PairRecord020a0d6c*)(obj + 0x1bc), (int*)(obj + 0x70), (int*)a, b, c, d);
}

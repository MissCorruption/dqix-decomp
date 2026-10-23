#include <globaldefs.h>

struct Struct_0202c1a4;
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);

struct Struct_0202b2f0;
extern "C" void func_0202c5bc(struct Struct_0202b2f0* arg0, int arg1);

// USA: func_ov017_021cea64
extern "C" ARM void func_ov017_021cea64(int arg0, int* arg1, int arg2, int arg3, struct Struct_0202c1a4* arg4) {
    int var0 = arg1[1];
    int var1 = func_0202c1a4(arg4);
    if (var0 == var1) return;
    func_0202c5bc((struct Struct_0202b2f0*)arg4, var0);
}

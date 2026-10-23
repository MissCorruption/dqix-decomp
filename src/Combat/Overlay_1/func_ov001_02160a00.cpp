#include <globaldefs.h>

extern "C" void* func_0202ae18(void*);
extern "C" void func_ov017_021d6134(void*, int);
extern "C" int func_0202b7d8(int* arg0);
struct Struct_0202c1a4;
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);

// USA: func_ov001_02160a00
extern "C" ARM int func_ov001_02160a00(void* arg0) {
    void* var0 = func_0202ae18(arg0);
    int var1;
    if (!func_0202b7d8((int*)var0)) {
        goto setOne;
    }
    if (func_0202c1a4((struct Struct_0202c1a4*)var0) != 0) {
        goto setZero;
    }
setOne:
    var1 = 1;
    goto call;
setZero:
    var1 = 0;
call:
    func_ov017_021d6134(arg0, var1);
    return 1;
}

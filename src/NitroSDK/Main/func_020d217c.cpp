#include <globaldefs.h>

extern "C" void* func_020d2404(int);
struct Struct_020d217c_2;
extern "C" int func_020d248c(Struct_020d217c_2*);

struct Struct_020d217c {
    int unknown_0_;
    int unknown_4_;
    int arg1;
    int arg2;
    int arg3;
    int arg4;
};

// USA: func_020d217c
// Kept as extern "C" func_020d217c: 18 decompiled EnqueueEvent/PostEvent/SubmitCommand
// wrappers reference this symbol directly, so the raw name must be preserved.
extern "C" ARM int func_020d217c(int arg0, int arg1, int arg2, int arg3, int arg4) {
    struct Struct_020d217c* var0 = (struct Struct_020d217c*)func_020d2404(1);
    if (var0 == NULL) return (int)var0;
    var0->unknown_4_ = arg0;
    var0->arg1 = arg1;
    var0->arg2 = arg2;
    var0->arg3 = arg3;
    var0->arg4 = arg4;
    return func_020d248c((Struct_020d217c_2*)var0);
}

#include <globaldefs.h>
extern "C" struct Struct_020976e0* func_02097720(struct Struct_020976e0_2*, int);

struct Struct_020976e0 { struct Struct_020976e0* unknown_0_; char unknown_4_[0xa]; short unknown_e_; };

// USA: func_020976e0
extern "C" ARM void func_020976e0(void* arg0) {
    struct Struct_020976e0* var0 = *(struct Struct_020976e0**)arg0 = func_02097720((struct Struct_020976e0_2*)(arg0), (int)(-1));
    if (var0 == 0) return;
    while (var0 != 0) {
        struct Struct_020976e0* var1 = func_02097720((struct Struct_020976e0_2*)(arg0), (int)(var0->unknown_e_));
        var0->unknown_0_ = var1;
        var0 = var1;
    }
}

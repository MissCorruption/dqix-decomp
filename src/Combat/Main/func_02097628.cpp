#include <globaldefs.h>
extern "C" struct Struct_02097628* func_02097668(struct Struct_02097628_2*, int);

struct Struct_02097628 { struct Struct_02097628* unknown_0_; char unknown_4_[0x16]; short unknown_1a_; };

// USA: func_02097628
extern "C" ARM void func_02097628(void* arg0) {
    struct Struct_02097628* var0 = *(struct Struct_02097628**)arg0 = func_02097668((struct Struct_02097628_2*)(arg0), (int)(-1));
    if (var0 == 0) return;
    while (var0 != 0) {
        struct Struct_02097628* var1 = func_02097668((struct Struct_02097628_2*)(arg0), (int)(var0->unknown_1a_));
        var0->unknown_0_ = var1;
        var0 = var1;
    }
}

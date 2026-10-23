#include <globaldefs.h>

struct Struct_ov003_0215f4e4_2;
struct Struct_ov003_0215f4e4 {
    Struct_ov003_0215f4e4_2* unknown_0_;
};

extern "C" Struct_ov003_0215f4e4_2* func_ov003_0215f4a4(Struct_ov003_0215f4e4* arg0, int arg1);

// USA: func_ov003_0215f4e4
extern "C" ARM void func_ov003_0215f4e4(Struct_ov003_0215f4e4* arg0, int arg1) {
    Struct_ov003_0215f4e4_2* var0 = func_ov003_0215f4a4(arg0, arg1);
    if (var0 != 0) {
        arg0->unknown_0_ = var0;
    }
}

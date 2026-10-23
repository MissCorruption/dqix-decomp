#include <globaldefs.h>

struct Struct_02080f8c_2 { int unknown_0_; };
struct Struct_0207f524 { struct Struct_02080f8c_2* unknown_0_; short unknown_4_; };
extern "C" struct Struct_02080f8c_2* func_0207f6ac(struct Struct_0207f524* arg0, int arg1);

struct Struct_02080f8c { char unknown_0_[4]; struct Struct_0207f524 unknown_4_; };

// USA: func_02080f8c
extern "C" ARM void func_02080f8c(struct Struct_02080f8c* arg0, int arg1, int arg2) {
    struct Struct_02080f8c_2* var0 = func_0207f6ac(&arg0->unknown_4_, arg1);
    if (var0 != NULL) {
        var0->unknown_0_ = arg2;
    }
}

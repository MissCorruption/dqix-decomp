#include <globaldefs.h>

struct Struct_02104b60 {
    struct Struct_02104b60* unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

extern struct Struct_02104b60* data_020f33b0;

// USA: func_0200efd0
extern "C" ARM void __register_global_object(int arg0, int arg1, struct Struct_02104b60* arg2) {
    arg2->unknown_0_ = data_020f33b0;
    arg2->unknown_4_ = arg1;
    arg2->unknown_8_ = arg0;
    data_020f33b0 = arg2;
}

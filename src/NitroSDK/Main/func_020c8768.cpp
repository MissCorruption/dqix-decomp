#include <globaldefs.h>

struct Struct_020c8768 {
    struct Struct_020c8768* unknown_0_;
    struct Struct_020c8768* unknown_4_;
};

// USA: func_020c8768
extern "C" ARM struct Struct_020c8768* func_020c8768(struct Struct_020c8768* arg0, struct Struct_020c8768* arg1) {
    arg1->unknown_4_ = arg0;
    arg1->unknown_0_ = 0;
    if (arg0 != 0) {
        arg0->unknown_0_ = arg1;
    }
    return arg1;
}

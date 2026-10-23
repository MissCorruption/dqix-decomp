#include <globaldefs.h>

struct Struct_020a2928 { unsigned int unknown_0_[4]; };
struct Struct_020a2928_2 { unsigned int unknown_0_[3]; };

struct Struct_020a2908 {
    struct Struct_020a2928 unknown_0_;
    unsigned int unknown_10_;
    struct Struct_020a2928_2 unknown_14_;
    struct Struct_020a2928_2 unknown_20_;
};

// USA: func_020a2928
extern "C" ARM struct Struct_020a2908* func_020a2928(struct Struct_020a2908* arg0, struct Struct_020a2908* arg1) {
    arg0->unknown_0_ = arg1->unknown_0_;
    arg0->unknown_10_ = arg1->unknown_10_;
    arg0->unknown_14_ = arg1->unknown_14_;
    arg0->unknown_20_ = arg1->unknown_20_;
    return arg0;
}

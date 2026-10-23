#include <globaldefs.h>

struct Struct_020e53bc_3 {
    unsigned int unknown_0_;
};

// USA: func_020e544c
extern "C" ARM unsigned int func_020e544c(struct Struct_020e53bc_3* arg0) {
    return (arg0->unknown_0_ & 0xFFF) << 4;
}

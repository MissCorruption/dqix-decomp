#include <globaldefs.h>

struct Struct_0206ea7c_2 {
    unsigned int unknown_0_[7];
};

struct Struct_0206ea7c {
    char unknown_0_[0x334];
    struct Struct_0206ea7c_2 unknown_334_[1];
};

// USA: func_0206ea7c
extern "C" ARM struct Struct_0206ea7c_2* func_0206ea7c(struct Struct_0206ea7c* arg0, int arg1) {
    return &arg0->unknown_334_[arg1];
}

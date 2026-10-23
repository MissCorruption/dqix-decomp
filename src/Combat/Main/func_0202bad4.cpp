#include <globaldefs.h>

struct Struct_0202bad4 {
    char unknown_0_[0xc0];
};

struct Struct_0202bad4_2 {
    char unknown_0_[0x10];
    struct Struct_0202bad4 unknown_10_[1];
};

// USA: func_0202bad4
extern "C" ARM struct Struct_0202bad4* func_0202bad4(struct Struct_0202bad4_2* arg0, int arg1) {
    return &arg0->unknown_10_[arg1];
}

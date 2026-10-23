#include <globaldefs.h>

struct Struct_0202ea20 {
    char unknown_0_[0x168];
    unsigned int unknown_168_;
    char unknown_16c_[0x78];
    int unknown_1e4_;
    int unknown_1e8_;
};

// USA: func_0202ea20
extern "C" ARM void func_0202ea20(struct Struct_0202ea20* arg0) {
    arg0->unknown_1e4_ = 0;
    arg0->unknown_1e8_ = 0;
    arg0->unknown_168_ &= ~0x4;
}

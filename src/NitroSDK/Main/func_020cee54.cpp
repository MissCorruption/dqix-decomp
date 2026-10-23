#include <globaldefs.h>

struct Struct_0210cfd0 {
    char unknown_0_[8];
    struct Struct_0210cfd0* unknown_8_;
};

struct Struct_020cee54 {
    struct Struct_0210cfd0* unknown_0_;
};

// USA: func_020cee54
extern "C" ARM void func_020cee54(struct Struct_020cee54* arg0, struct Struct_0210cfd0* arg1) {
    if (arg0 != 0) {
        arg1->unknown_8_ = arg0->unknown_0_;
        arg0->unknown_0_ = arg1;
    }
}

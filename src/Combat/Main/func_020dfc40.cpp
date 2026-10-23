#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_020dfc40;
extern "C" int func_020dfe88(struct Struct_020dfc40*);

struct Struct_0201099c_14 {
    unsigned char unknown_0_[0xc];
    short unknown_c_;
    int unknown_10_;
};

// USA: func_020dfc40
extern "C" ARM void func_020dfc40(Struct_0201099c_14* arg0) {
    memset(arg0, 0, 0xc);
    arg0->unknown_c_ = -1;
    arg0->unknown_10_ = -1;
    func_020dfe88((struct Struct_020dfc40*)arg0);
}

#include <globaldefs.h>

struct Struct_02032fd0 {
    char unknown_0_[0xba];
    short unknown_ba_;
    short unknown_bc_;
};

// USA: func_02032fd0
extern "C" ARM void func_02032fd0(Struct_02032fd0* arg0, short arg1, unsigned short arg2) {
    arg0->unknown_ba_ = arg1;
    arg0->unknown_bc_ = arg2;
}

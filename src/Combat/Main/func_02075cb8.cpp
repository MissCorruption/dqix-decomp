#include <globaldefs.h>
extern "C" void func_020d0050(int);


struct Struct_02108dfc {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
};

extern struct Struct_02108dfc data_02108dfc;

// USA: func_02075cb8
extern "C" ARM void func_02075cb8(void) {
    func_020d0050((int)(data_02108dfc.unknown_2_));
    data_02108dfc.unknown_0_ = 1;
}

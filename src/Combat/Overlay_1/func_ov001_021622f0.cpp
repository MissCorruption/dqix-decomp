#include <globaldefs.h>

struct Struct_ov001_02165880_48 {
    unsigned char unknown_0_[0x28];
    int unknown_28_;
};
extern struct Struct_ov001_02165880_48 data_ov001_02165880;

// USA: func_ov001_021622f0
extern "C" ARM void func_ov001_021622f0(void) {
    data_ov001_02165880.unknown_28_ += 1;
}

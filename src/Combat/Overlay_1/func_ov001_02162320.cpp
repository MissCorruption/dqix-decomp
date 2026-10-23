#include <globaldefs.h>

struct Struct_ov001_02165880_50 {
    unsigned char unknown_0_[0x28];
    int unknown_28_;
};
extern struct Struct_ov001_02165880_50 data_ov001_02165880;

// USA: func_ov001_02162320
extern "C" ARM void func_ov001_02162320(void) {
    data_ov001_02165880.unknown_28_ += 3;
}

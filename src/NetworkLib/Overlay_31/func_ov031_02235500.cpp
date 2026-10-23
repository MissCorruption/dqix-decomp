#include <globaldefs.h>

struct Struct_ov031_02235500 { unsigned char unknown_0_[0x1c]; unsigned char unknown_1c_; unsigned char unknown_1d_; };
extern Struct_ov031_02235500* data_ov031_02290cf4;

// USA: func_ov031_02235500
extern "C" ARM void func_ov031_02235500(int arg0) {
    data_ov031_02290cf4->unknown_1c_ = (unsigned char)arg0;
    data_ov031_02290cf4->unknown_1d_ = (arg0 == 2) ? 4 : 6;
}

#include <globaldefs.h>

struct Struct_ov031_02223fb4 { unsigned char unknown_0_[0x123]; unsigned char unknown_123_; };
extern Struct_ov031_02223fb4* data_ov031_02250bfc;

// USA: func_ov031_02223fb4
extern "C" ARM void func_ov031_02223fb4(int arg0) {
    data_ov031_02250bfc->unknown_123_ = (unsigned char)arg0;
}

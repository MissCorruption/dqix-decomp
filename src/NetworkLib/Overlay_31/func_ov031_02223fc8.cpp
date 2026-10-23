#include <globaldefs.h>

struct Struct_ov031_02223fc8 { unsigned char unknown_0_[0x124]; unsigned char unknown_124_; };
extern Struct_ov031_02223fc8* data_ov031_02250bfc;

// USA: func_ov031_02223fc8
extern "C" ARM void func_ov031_02223fc8(int arg0) {
    data_ov031_02250bfc->unknown_124_ = (unsigned char)arg0;
}

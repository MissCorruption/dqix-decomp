#include <globaldefs.h>

struct Struct_ov001_02165880_6 { char unknown_0_[0x1c]; char* unknown_1c_; };
extern struct Struct_ov001_02165880_6 data_ov001_02165880;

// USA: func_ov001_0215ab20
extern "C" ARM int func_ov001_0215ab20(int arg0) {
    if (arg0 < 0 || arg0 >= 0x18) return 0;
    return (int)(data_ov001_02165880.unknown_1c_ + arg0 * 0x588);
}

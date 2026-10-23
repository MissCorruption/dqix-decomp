#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov023_021e338c_1252 = 0x4e0, Enum_ov023_021e338c_1588 = 0x56c };
#else
enum { Enum_ov023_021e338c_1252 = 0x4e4, Enum_ov023_021e338c_1588 = 0x634 };
#endif

struct Struct_ov023_021e3030 {
    unsigned char unknown_0_[Enum_ov023_021e338c_1252];
    unsigned char unknown_4e4_;
    unsigned char unknown_4e5_;
    signed char unknown_4e6_;
    signed char unknown_4e7_;
    unsigned char unknown_4e8_[Enum_ov023_021e338c_1588 - Enum_ov023_021e338c_1252 - 4];
    unsigned short unknown_634_;
    unsigned char unknown_636_;
};

// USA: func_ov023_021e338c
extern "C" ARM void func_ov023_021e338c(char* arg0) {
    Struct_ov023_021e3030* var0 = (Struct_ov023_021e3030*)arg0;
    var0->unknown_634_ |= 0x1000;
}

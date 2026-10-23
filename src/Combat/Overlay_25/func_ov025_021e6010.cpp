#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov025_021e6010_12 = 0x4 };
#else
enum { Enum_ov025_021e6010_12 = 0xc };
#endif

struct Struct_ov025_021ef988_18 {
    char unknown_0_[Enum_ov025_021e6010_12];
    unsigned char* unknown_c_;
};

extern struct Struct_ov025_021ef988_18 data_ov025_021ef988;

struct Struct_ov025_021e6010 { char unknown_0_[8]; unsigned short unknown_8_; };

// USA: func_ov025_021e6010
extern "C" ARM int func_ov025_021e6010(struct Struct_ov025_021e6010* arg0) {
    *(unsigned short*)(data_ov025_021ef988.unknown_c_ + 0x21c) = arg0->unknown_8_;
    return 1;
}

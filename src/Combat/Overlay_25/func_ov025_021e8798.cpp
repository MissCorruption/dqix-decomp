#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov025_021e8798_12 = 0x4 };
#else
enum { Enum_ov025_021e8798_12 = 0xc };
#endif

struct Struct_ov025_021ef988_40 {
    char unknown_0_[Enum_ov025_021e8798_12];
    unsigned char* unknown_c_;
};

extern struct Struct_ov025_021ef988_40 data_ov025_021ef988;

struct Struct_ov025_021e8798 { char unknown_0_[8]; short unknown_8_; };

// USA: func_ov025_021e8798
extern "C" ARM int func_ov025_021e8798(struct Struct_ov025_021e8798* arg0) {
    short var0 = arg0->unknown_8_;
    if (var0 > 0) {
        *(short*)(data_ov025_021ef988.unknown_c_ + 0x220) = var0;
    } else if (var0 == -2) {
        *(short*)(data_ov025_021ef988.unknown_c_ + 0x220) = 0x1e;
    } else {
        *(short*)(data_ov025_021ef988.unknown_c_ + 0x220) = -1;
    }
    return 1;
}

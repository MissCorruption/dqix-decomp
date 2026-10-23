#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov025_021e6f20_12 = 0x4 };
#else
enum { Enum_ov025_021e6f20_12 = 0xc };
#endif

extern "C" int func_ov025_021ed110(void*, int);

struct Struct_ov025_021ef988_27 {
    char unknown_0_[Enum_ov025_021e6f20_12];
    char* unknown_c_;
};
extern struct Struct_ov025_021ef988_27 data_ov025_021ef988;

struct Struct_ov025_021e6f20 {
    char unknown_0_[8];
    short unknown_8_;
};

// USA: func_ov025_021e6f20
extern "C" ARM int func_ov025_021e6f20(struct Struct_ov025_021e6f20* arg0) {
    func_ov025_021ed110(data_ov025_021ef988.unknown_c_ + 0x22c, arg0->unknown_8_);
    return 1;
}

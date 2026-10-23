#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov025_021e4a90_28 = 0xc };
#else
enum { Enum_ov025_021e4a90_28 = 0x1c };
#endif

struct Struct_ov025_021ef988_12 {
    char unknown_0_[Enum_ov025_021e4a90_28];
    unsigned int unknown_1c_;
};

extern struct Struct_ov025_021ef988_12 data_ov025_021ef988;

// USA: func_ov025_021e4a90
extern "C" ARM int func_ov025_021e4a90(void) {
    data_ov025_021ef988.unknown_1c_ |= 0x100;
    return 1;
}

#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov025_021e856c_12 = 0x4 };
#else
enum { Enum_ov025_021e856c_12 = 0xc };
#endif

struct Struct_ov025_021ef988_38 {
    char unknown_0_[Enum_ov025_021e856c_12];
    unsigned char* unknown_c_;
};

extern struct Struct_ov025_021ef988_38 data_ov025_021ef988;

// USA: func_ov025_021e856c
extern "C" ARM int func_ov025_021e856c(void) {
    data_ov025_021ef988.unknown_c_[0x578] = 1;
    return 1;
}

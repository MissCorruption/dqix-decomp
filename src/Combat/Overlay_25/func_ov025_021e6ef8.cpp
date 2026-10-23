#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov025_021e6ef8_12 = 0x4 };
#else
enum { Enum_ov025_021e6ef8_12 = 0xc };
#endif

struct Struct_ov025_021e6ef8 {
    char unknown_0_[8];
    unsigned short unknown_8_;
    short unknown_a_;
};

struct Struct_ov025_021e6ef8_2 {
    char unknown_0_[0x3e];
    unsigned short unknown_3e_;
    short unknown_40_;
};

struct Struct_ov025_021e6ef8_3 {
    char unknown_0_[0x540];
    struct Struct_ov025_021e6ef8_2 unknown_540_;
};

struct Struct_ov025_021ef988_26 {
    char unknown_0_[Enum_ov025_021e6ef8_12];
    struct Struct_ov025_021e6ef8_3* unknown_c_;
};
extern struct Struct_ov025_021ef988_26 data_ov025_021ef988;

// USA: func_ov025_021e6ef8
extern "C" ARM int func_ov025_021e6ef8(struct Struct_ov025_021e6ef8* arg0) {
    short var0 = arg0->unknown_a_;
    unsigned short var1 = arg0->unknown_8_;
    struct Struct_ov025_021e6ef8_3* var2 = data_ov025_021ef988.unknown_c_;
    var2->unknown_540_.unknown_3e_ = var1;
    var2->unknown_540_.unknown_40_ = var0;
    return 1;
}

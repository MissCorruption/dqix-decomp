#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov025_021e62a8_12 = 0x4 };
#else
enum { Enum_ov025_021e62a8_12 = 0xc };
#endif

struct Struct_ov025_021e62a8 {
    char unknown_0_[0x14];
    unsigned short unknown_14_;
};

struct Struct_ov025_021e62a8_2 {
    char unknown_0_[0x540];
    struct Struct_ov025_021e62a8 unknown_540_;

    struct Struct_ov025_021e62a8* inline_ov025_021e62a8() { return &unknown_540_; }
};

struct Struct_ov025_021ef988_20 {
    char unknown_0_[Enum_ov025_021e62a8_12];
    struct Struct_ov025_021e62a8_2* unknown_c_;
};
extern struct Struct_ov025_021ef988_20 data_ov025_021ef988;

// USA: func_ov025_021e62a8
extern "C" ARM int func_ov025_021e62a8(void* arg0) {
    data_ov025_021ef988.unknown_c_->inline_ov025_021e62a8()->unknown_14_ = *(unsigned short*)((char*)arg0 + 8);
    return 1;
}

#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov025_021e8064_12 = 0x4 };
#else
enum { Enum_ov025_021e8064_12 = 0xc };
#endif

struct Struct_ov025_021e8064 {
    char unknown_0_[0x1e];
    unsigned short unknown_1e_;
};

struct Struct_ov025_021e8064_2 {
    char unknown_0_[0x540];
    struct Struct_ov025_021e8064 unknown_540_;

    struct Struct_ov025_021e8064* inline_ov025_021e8064() { return &unknown_540_; }
};

struct Struct_ov025_021ef988_31 {
    char unknown_0_[Enum_ov025_021e8064_12];
    struct Struct_ov025_021e8064_2* unknown_c_;
};
extern struct Struct_ov025_021ef988_31 data_ov025_021ef988;

// USA: func_ov025_021e8064
extern "C" ARM int func_ov025_021e8064(void* arg0) {
    data_ov025_021ef988.unknown_c_->inline_ov025_021e8064()->unknown_1e_ =*(unsigned short*)((char*)arg0 + 8);
    return 1;
}

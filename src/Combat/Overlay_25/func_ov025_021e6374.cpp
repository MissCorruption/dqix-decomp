#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov025_021e6374_12 = 0x4 };
#else
enum { Enum_ov025_021e6374_12 = 0xc };
#endif

struct Struct_ov025_021e6374 {
    char unknown_0_[0x1c];
    unsigned short unknown_1c_;
};

struct Struct_ov025_021e6374_2 {
    char unknown_0_[0x540];
    struct Struct_ov025_021e6374 unknown_540_;

    struct Struct_ov025_021e6374* inline_ov025_021e6374() { return &unknown_540_; }
};

struct Struct_ov025_021ef988_21 {
    char unknown_0_[Enum_ov025_021e6374_12];
    struct Struct_ov025_021e6374_2* unknown_c_;
};
extern struct Struct_ov025_021ef988_21 data_ov025_021ef988;

// USA: func_ov025_021e6374
extern "C" ARM int func_ov025_021e6374(void* arg0) {
    data_ov025_021ef988.unknown_c_->inline_ov025_021e6374()->unknown_1c_ =*(unsigned short*)((char*)arg0 + 8);
    return 1;
}

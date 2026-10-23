#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov025_021e6cd4_12 = 0x4 };
#else
enum { Enum_ov025_021e6cd4_12 = 0xc };
#endif

struct Struct_ov025_021e6cd4 {
    char unknown_0_[0x24];
    unsigned short unknown_24_;
};

struct Struct_ov025_021e6cd4_2 {
    char unknown_0_[0x540];
    struct Struct_ov025_021e6cd4 unknown_540_;

    struct Struct_ov025_021e6cd4* inline_ov025_021e6cd4() { return &unknown_540_; }
};

struct Struct_ov025_021ef988_25 {
    char unknown_0_[Enum_ov025_021e6cd4_12];
    struct Struct_ov025_021e6cd4_2* unknown_c_;
};
extern struct Struct_ov025_021ef988_25 data_ov025_021ef988;

// USA: func_ov025_021e6cd4
extern "C" ARM int func_ov025_021e6cd4(void* arg0) {
    data_ov025_021ef988.unknown_c_->inline_ov025_021e6cd4()->unknown_24_ = (unsigned short)*(unsigned int*)((char*)arg0 + 8);
    return 1;
}

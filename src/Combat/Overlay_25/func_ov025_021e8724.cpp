#include <globaldefs.h>

struct Struct_ov025_021ef988_22 {
#if defined(jpn)
    char unknown1_0_[4];
#else
    char unknown_0_[0xc];
#endif
    void* unknown_c_;
};
extern struct Struct_ov025_021ef988_22 data_ov025_021ef988;

struct Struct_ov025_021e8724 { char unknown_0_[8]; unsigned char unknown_8_; };

// USA: func_ov025_021e8724
extern "C" ARM int func_ov025_021e8724(struct Struct_ov025_021e8724* arg0) {
    *(unsigned char*)((char*)data_ov025_021ef988.unknown_c_ + 0x5d0) = arg0->unknown_8_;
    return 1;
}

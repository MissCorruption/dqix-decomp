#include <globaldefs.h>

struct Struct_ov025_021ea604_4 {
    char unknown_0_[0x150];
    unsigned char unknown_150_;
    unsigned char unknown_151_;
    unsigned char unknown_152_[0x152 - 0x152];
};

// USA: func_ov025_021ed35c
extern "C" ARM void func_ov025_021ed35c(char* arg0) {
    *(unsigned short*)(arg0 + 0x100 + 0x5e) = 0;
    arg0[0x150] = 0;
    *(unsigned short*)(arg0 + 0x100 + 0x52) = 0;
    *(unsigned short*)(arg0 + 0x100 + 0x54) = 0;
    arg0[0x151] = 0;
    *(unsigned short*)(arg0 + 0x100 + 0x5c) = 0;
}

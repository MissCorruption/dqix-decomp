#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov025_021e80d8_12 = 0x4 };
#else
enum { Enum_ov025_021e80d8_12 = 0xc };
#endif

struct Struct_ov025_021ef988_32 {
    char unknown_0_[Enum_ov025_021e80d8_12];
    unsigned char* unknown_c_;
};

extern struct Struct_ov025_021ef988_32 data_ov025_021ef988;
extern "C" void func_ov025_021ed344(unsigned char* arg0, int arg1);

// USA: func_ov025_021e80d8
extern "C" ARM int func_ov025_021e80d8(unsigned short* arg0) {
    func_ov025_021ed344(data_ov025_021ef988.unknown_c_ + 0x5e8, arg0[4]);
    return 1;
}

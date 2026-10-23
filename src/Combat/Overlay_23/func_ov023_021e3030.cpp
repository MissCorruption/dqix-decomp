#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov023_021e3030_1252 = 0x4e0, Enum_ov023_021e3030_1588 = 0x56c };
#else
enum { Enum_ov023_021e3030_1252 = 0x4e4, Enum_ov023_021e3030_1588 = 0x634 };
#endif

struct Struct_ov023_021e3030 {
    unsigned char unknown_0_[Enum_ov023_021e3030_1252];
    unsigned char unknown_4e4_;
    unsigned char unknown_4e5_;
    signed char unknown_4e6_;
    signed char unknown_4e7_;
    unsigned char unknown_4e8_[Enum_ov023_021e3030_1588 - Enum_ov023_021e3030_1252 - 4];
    unsigned short unknown_634_;
    unsigned char unknown_636_;
};

extern "C" Struct_ov023_021e3030* func_ov023_021e4e3c(Struct_ov023_021e3030* arg0);
extern "C" void func_ov023_021e33b4(void* arg0);
extern "C" void func_ov023_021e3db0(void* arg0);
extern "C" void func_ov023_021e3f34(void* arg0);

// USA: func_ov023_021e3030
extern "C" ARM void func_ov023_021e3030(Struct_ov023_021e3030* arg0) {
    func_ov023_021e4e3c(arg0);
    switch (arg0->unknown_4e6_) {
    case 0:
        func_ov023_021e33b4(arg0);
        break;
    case 3:
        func_ov023_021e3db0(arg0);
        break;
    case 1:
        func_ov023_021e3f34(arg0);
        break;
    }
}

#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov006_0215f9e8_20 = 0xc };
#else
enum { Enum_ov006_0215f9e8_20 = 0x14 };
#endif

struct Struct_02080fa8;
struct Struct_ov006_0215f9e8 {
    unsigned char unknown_0_[Enum_ov006_0215f9e8_20];
    Struct_02080fa8* unknown_14_;
    unsigned char unknown_18_[0x36e - Enum_ov006_0215f9e8_20 - 4];
    unsigned short unknown_36e_;
    unsigned char unknown_370_[0x38b - 0x370];
    unsigned char unknown_38b_;
};

extern "C" void func_02080fa8(Struct_02080fa8*, int, int);
extern "C" int func_020813ec(void*, int);

// USA: func_ov006_0215f9e8
extern "C" ARM void func_ov006_0215f9e8(Struct_ov006_0215f9e8* arg0) {
    func_02080fa8(arg0->unknown_14_, 0x3d, arg0->unknown_38b_);
    func_020813ec(arg0->unknown_14_, 10);
    arg0->unknown_36e_ = 10;
}

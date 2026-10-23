#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov006_0215a5dc_16 = 8 };
#else
enum { Enum_ov006_0215a5dc_16 = 0x10 };
#endif

struct Struct_ov006_021553bc;

extern "C" void func_ov006_021571b8(void* arg0, unsigned char arg1);
extern "C" void func_ov006_021571cc(Struct_ov006_021553bc* arg0);

struct Struct_ov006_02157a60 {
    char unknown_0_[Enum_ov006_0215a5dc_16];
    Struct_ov006_021553bc* unknown_10_;
    char unknown_14_[0x38b - Enum_ov006_0215a5dc_16 - 4];
    unsigned char unknown_38b_;
};

// USA: func_ov006_0215a5dc
extern "C" ARM void func_ov006_0215a5dc(Struct_ov006_02157a60* arg0) {
    func_ov006_021571b8(arg0->unknown_10_, arg0->unknown_38b_);
    func_ov006_021571cc(arg0->unknown_10_);
}

#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov006_021571cc_2788 = 0x964, Enum_ov006_021571cc_1908 = 0x6f0, Enum_ov006_021571cc_1947 = 0x717 };
#else
enum { Enum_ov006_021571cc_2788 = 0xae4, Enum_ov006_021571cc_1908 = 0x774, Enum_ov006_021571cc_1947 = 0x79b };
#endif

extern "C" void func_ov023_021dd344(void* arg0);

struct Struct_ov006_021571cc {
    unsigned char unknown_0_[Enum_ov006_021571cc_1908];
    unsigned short unknown_774_;
    unsigned char unknown_776_[Enum_ov006_021571cc_1947 - Enum_ov006_021571cc_1908 - 2];
    unsigned char unknown_79b_;
};

struct Struct_ov006_021553bc {
    unsigned char unknown_0_[Enum_ov006_021571cc_2788];
    Struct_ov006_021571cc unknown_ae4_;
};

// USA: func_ov006_021571cc
extern "C" ARM void func_ov006_021571cc(struct Struct_ov006_021553bc* arg0) {
    int var0 = (arg0->unknown_ae4_.unknown_774_ & 0x800) != 0;
    if (var0) {
        func_ov023_021dd344(&arg0->unknown_ae4_);
    }
}

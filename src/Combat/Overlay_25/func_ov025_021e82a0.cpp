#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov025_021e82a0_12 = 0x4 };
#else
enum { Enum_ov025_021e82a0_12 = 0xc };
#endif

struct Struct_ov025_021ef988_35 {
    char unknown_0_[Enum_ov025_021e82a0_12];
    void* unknown_c_;
};

extern Struct_ov025_021ef988_35 data_ov025_021ef988;

struct Struct_ov025_021e82a0 {
    char unknown_0_[0x8];
    short unknown_8_;
    short unknown_a_;
    short unknown_c_;
    unsigned char unknown_e_;
};

// USA: func_ov025_021e82a0
extern "C" ARM int func_ov025_021e82a0(struct Struct_ov025_021e82a0* arg0) {
    char* var0 = (char*)data_ov025_021ef988.unknown_c_ + 0x540;
    *(unsigned short*)(var0 + 0x28) |= 2;
    *(unsigned char*)(var0 + 0x35) = arg0->unknown_e_;
    *(short*)(var0 + 0x2e) = arg0->unknown_8_;
    *(short*)(var0 + 0x30) = arg0->unknown_a_;
    *(short*)(var0 + 0x32) = arg0->unknown_c_;
    return 1;
}

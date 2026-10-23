#include <globaldefs.h>

struct Struct_ov023_021f8198 { int unknown_0_; int unknown_4_; };
struct Struct_ov023_021f8198_2 {
    unsigned char unknown_0_[0xcc];
    unsigned short unknown_cc_;
    unsigned short unknown_ce_;
    unsigned char unknown_d0_[0x100 - 0xd0];
    unsigned short unknown_100_;
    unsigned short unknown_102_;
};

// USA: func_ov023_021f8198
extern "C" ARM void func_ov023_021f8198(struct Struct_ov023_021f8198_2* arg0, struct Struct_ov023_021f8198* arg1) {
    arg0->unknown_100_ = (unsigned short)((float)arg1->unknown_0_ / 4096.0f);
    arg0->unknown_102_ = (unsigned short)((float)arg1->unknown_4_ / 4096.0f);
    unsigned short var0 = arg0->unknown_102_;
    unsigned short var1 = arg0->unknown_100_;
    arg0->unknown_cc_ = var1;
    arg0->unknown_ce_ = var0;
}

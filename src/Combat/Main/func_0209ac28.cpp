#include <globaldefs.h>

struct Struct_0209ac28_2 { unsigned short unknown_0_; unsigned short unknown_2_; };
struct Struct_0209ac28_5 {
    unsigned char unknown_0_[0xc];
    struct Struct_0209ac28_2 unknown_c_[17];
};
struct Struct_0209ac28 {
    unsigned char unknown_0_[0x100];
    struct Struct_0209ac28_5 unknown_100_[13];
    unsigned char unknown_510_[0xc];
    int unknown_51c_[16];
};
struct Struct_0209ac28_3 {
    struct Struct_0209ac28* unknown_0_;
};
struct Struct_0209ac28_4 {
#if defined(jpn)
    unsigned char unknown_0_[0x8b8];
#else
    unsigned char unknown1_0_[0x950];
#endif
    int unknown_950_;
};

extern "C" int func_02053c6c(unsigned char* arg0);

// USA: func_0209ac28
extern "C" ARM int func_0209ac28(struct Struct_0209ac28_3* arg0, unsigned char* arg1, int arg2) {
    if (&arg0->unknown_0_->unknown_100_[0].unknown_c_[0] == NULL) return 0;
    if (&arg0->unknown_0_->unknown_51c_[0] == NULL) return 0;
    struct Struct_0209ac28_4* var0 = (struct Struct_0209ac28_4*)func_02053c6c(arg1);
    if (var0 == 0) return 0;
    int var1 = var0->unknown_950_ & 0xff;
    int var2 = *(unsigned short*)((unsigned char*)var0 + var1 * 2 + 0x100 + 0x6c) & 0xff;
    int var3;
    for (var3 = 0; var3 < arg0->unknown_0_->unknown_51c_[var1]; var3++) {
        if (arg0->unknown_0_->unknown_100_[var1].unknown_c_[var3].unknown_0_ == arg2) {
            return arg0->unknown_0_->unknown_100_[var1].unknown_c_[var3].unknown_2_ <= var2;
        }
    }
    return 0;
}

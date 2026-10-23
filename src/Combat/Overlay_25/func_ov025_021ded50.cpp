#include <globaldefs.h>

struct Struct_ov025_021ded50_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
};

extern "C" void func_ov025_021ded84(struct Struct_ov025_021ded50_2* arg0, struct Struct_ov025_021ded50_2* arg1);

struct Struct_ov025_021ded50 {
#if defined(jpn)
    char unknown_0_[0x78dc];
#else
    char unknown1_0_[0x76ec];
#endif
    struct Struct_ov025_021ded50_2 unknown_76ec_[5];
    unsigned short unknown_770a_;
};

// USA: func_ov025_021ded50
extern "C" ARM void func_ov025_021ded50(struct Struct_ov025_021ded50* arg0, struct Struct_ov025_021ded50_2* arg1) {
    unsigned short var0 = arg0->unknown_770a_;
    if (var0 >= 5) return;

    struct Struct_ov025_021ded50_2* var1 = &arg0->unknown_76ec_[var0];
    arg0->unknown_770a_ = var0 + 1;
    func_ov025_021ded84(var1, arg1);
}

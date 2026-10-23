#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x79c6
#else
#define REGION_OFFSET_0 0x77d6
#endif


struct Struct_ov000_0216867c {
    signed char unknown_0_;
    unsigned char unknown_1_;
    short unknown_2_;
    short unknown_4_;

    signed char inline_ov000_0216867c() const { return unknown_0_; }
};

struct Struct_ov000_0216867c_2 {
    char unknown_0_[REGION_OFFSET_0];
    Struct_ov000_0216867c unknown_77d6_[4];
    unsigned char unknown_77ee_;
};

// USA: func_ov000_0216867c
extern "C" ARM void func_ov000_0216867c(Struct_ov000_0216867c_2* arg0, int arg1) {
    int var0 = 0;
    int var1 = 0;
    for (int var2 = 0; var2 < arg0->unknown_77ee_; var2++) {
        if (arg1 == arg0->unknown_77d6_[var2].inline_ov000_0216867c()) {
            var0 = 1;
        } else {
            arg0->unknown_77d6_[var1].unknown_0_ = arg0->unknown_77d6_[var2].unknown_0_;
            arg0->unknown_77d6_[var1].unknown_1_ = arg0->unknown_77d6_[var2].unknown_1_;
            arg0->unknown_77d6_[var1].unknown_2_ = arg0->unknown_77d6_[var2].unknown_2_;
            arg0->unknown_77d6_[var1].unknown_4_ = arg0->unknown_77d6_[var2].unknown_4_;
            var1++;
        }
    }
    if (var0) {
        arg0->unknown_77ee_--;
    }
}

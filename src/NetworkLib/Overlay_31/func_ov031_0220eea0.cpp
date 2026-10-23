#include <globaldefs.h>

struct Struct_ov031_0220eea0_3 {
    unsigned char unknown_0_[4];
    unsigned int unknown_4_;
    Struct_ov031_0220eea0_3* unknown_8_;
    Struct_ov031_0220eea0_3* unknown_c_;
};
struct Struct_ov031_0220eea0 {
    unsigned int unknown_0_;
    Struct_ov031_0220eea0_3* unknown_4_;
    Struct_ov031_0220eea0_3* unknown_8_;
};
struct Struct_ov031_0220eea0_2 {
    char unknown_0_[0x2270];
    Struct_ov031_0220eea0* unknown_2270_;
    unsigned int unknown_2274_;
};
extern "C" Struct_ov031_0220eea0_2* func_ov031_0220d60c();

// USA: func_ov031_0220eea0
extern "C" ARM void func_ov031_0220eea0(Struct_ov031_0220eea0_3* arg0) {
    Struct_ov031_0220eea0_2* var0 = func_ov031_0220d60c();
    Struct_ov031_0220eea0* var1 = var0->unknown_2270_;
    if (!arg0 || !var1) return;
    if (var0->unknown_2274_ <= 12) return;
    Struct_ov031_0220eea0_3* var2 = var1->unknown_4_;
    if (var2) do {
        if (var2 == arg0) {
            if (var2->unknown_8_) var2->unknown_8_->unknown_c_ = var2->unknown_c_;
            else var1->unknown_4_ = var2->unknown_c_;
            if (var2->unknown_c_) var2->unknown_c_->unknown_8_ = var2->unknown_8_;
            else var1->unknown_8_ = var2->unknown_8_;
            break;
        }
        var2 = var2->unknown_c_;
    } while (var2);
    arg0->unknown_c_ = NULL;
    arg0->unknown_8_ = var1->unknown_8_;
    var1->unknown_8_ = arg0;
    if (arg0->unknown_8_) arg0->unknown_8_->unknown_c_ = arg0;
    else var1->unknown_4_ = arg0;
    if (var2 == NULL) {
        arg0->unknown_4_ = var1->unknown_0_;
        var1->unknown_0_++;
    } else return;
}

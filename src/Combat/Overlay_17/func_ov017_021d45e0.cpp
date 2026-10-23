#include <globaldefs.h>

struct Struct_ov017_021c8f3c_3 { unsigned short unknown_0_; short unknown_2_; unsigned short unknown_4_; unsigned short unknown_6_; unsigned short unknown_8_; unsigned char unknown_a_; };
extern "C" void func_ov017_021c90f8(Struct_ov017_021c8f3c_3* arg0, Struct_ov017_021c8f3c_3* arg1);

struct Struct_ov017_021d45e0 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned char unknown_4_[14];
    Struct_ov017_021c8f3c_3 unknown_12_;
};

extern "C" ARM void func_ov017_021d46a4(Struct_ov017_021d45e0* arg0, Struct_ov017_021d45e0* arg1);

// USA: func_ov017_021d45e0
extern "C" ARM void func_ov017_021d45e0(Struct_ov017_021d45e0* arg0, Struct_ov017_021c8f3c_3* arg1) {
    Struct_ov017_021d45e0* var0 = NULL;
    Struct_ov017_021d45e0* var1 = NULL;
    int var2 = 0;
    for (var2 = 0; var2 < 0x30; var2++) {
        if (arg1->unknown_0_ == arg0[var2].unknown_2_) {
            var0 = &arg0[var2];
            break;
        }
        if (var1 == NULL && arg0[var2].unknown_0_ == 0) {
            var1 = &arg0[var2];
        }
    }
    if (var0 != NULL) {
        func_ov017_021c90f8(&var0->unknown_12_, arg1);
        var0->unknown_2_ = arg1->unknown_0_;
        var0->unknown_0_ |= 0x2;
        func_ov017_021d46a4(arg0, var0);
        return;
    }
    if (var1 == NULL) {
        return;
    }
    func_ov017_021c90f8(&var1->unknown_12_, arg1);
    var1->unknown_2_ = arg1->unknown_0_;
    var1->unknown_0_ |= 0x2;
    func_ov017_021d46a4(arg0, var1);
}

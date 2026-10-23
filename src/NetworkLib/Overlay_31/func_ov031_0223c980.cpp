#include <globaldefs.h>

struct Struct_ov031_0223c980_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    signed char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
};
struct Struct_ov031_0223c980 {
    unsigned char unknown_0_[8];
    Struct_ov031_0223c980_2* unknown_8_;
};
struct Struct_ov031_0223c980_3 {
    Struct_ov031_0223c980* unknown_0_;
};
struct Struct_ov031_0223c980_4 {
    void* unknown_0_;
    Struct_ov031_0223c980_3* unknown_4_;
    int unknown_8_;
    int unknown_c_;
};
struct Struct_ov031_0223c980_5 {
    char unknown_0_[0x18];
    Struct_ov031_0223c980_4 unknown_18_;
};
struct Struct_ov031_0223c980_6 { signed char unknown_0_, unknown_1_; };

extern "C" void func_020b26e8(Struct_ov031_0223c980_4* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, const char* arg7, Struct_ov031_0223c980_6 arg8);

// USA: func_ov031_0223c980
extern "C" ARM void func_ov031_0223c980(Struct_ov031_0223c980_5* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, const char* arg7) {
    Struct_ov031_0223c980_3* var0 = arg0->unknown_18_.unknown_4_;
    Struct_ov031_0223c980_6 var1 = {0, 0};
    switch (var0->unknown_0_->unknown_8_->unknown_7_) {
    case 0:
    case 7:
        var1.unknown_0_ = 1;
        break;
    case 1:
    case 2:
        var1.unknown_1_ = 1;
        break;
    case 3:
    case 4:
        var1.unknown_0_ = -1;
        break;
    case 5:
    case 6:
        var1.unknown_1_ = -1;
        break;
    }
    func_020b26e8(&arg0->unknown_18_, arg1, arg2, arg3, arg4, arg5, arg6, arg7, var1);
}

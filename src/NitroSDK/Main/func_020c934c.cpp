#include <globaldefs.h>

struct Struct_020c92d0_2 {
    unsigned char unknown_0_[0x14];
    Struct_020c92d0_2* unknown_14_; // +0x14
    Struct_020c92d0_2* unknown_18_; // +0x18
};

struct Struct_02111654_3 {
    unsigned char unknown_0_[0xc];
    Struct_020c92d0_2* unknown_c_; // +0xc
    Struct_020c92d0_2* unknown_10_; // +0x10
};

extern Struct_02111654_3 data_02111654;
extern "C" void func_020c945c(void);

// USA: func_020c934c
extern "C" ARM void func_020c934c(Struct_020c92d0_2* arg0) {
    Struct_020c92d0_2* var0 = data_02111654.unknown_10_;
    arg0->unknown_14_ = var0;
    arg0->unknown_18_ = NULL;
    data_02111654.unknown_10_ = arg0;
    if (var0 != NULL) {
        var0->unknown_18_ = arg0;
        return;
    }
    data_02111654.unknown_c_ = arg0;
    func_020c945c();
}

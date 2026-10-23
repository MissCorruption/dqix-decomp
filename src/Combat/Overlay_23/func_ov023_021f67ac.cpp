#include <globaldefs.h>

struct Struct_ov004_0215c30c {
    void* unknown_0_;
};

struct Struct_ov004_0215c30c_2 {
    char unknown_0_[0x6];
    unsigned short unknown_6_;
    char unknown_8_[0xc];
    struct Struct_ov004_0215c30c_2* unknown_14_;
    struct Struct_ov004_0215c30c_2* unknown_18_;
};

// USA: func_ov023_021f67ac
extern "C" ARM void func_ov023_021f67ac(struct Struct_ov004_0215c30c* arg0, struct Struct_ov004_0215c30c_2* arg1) {
    struct Struct_ov004_0215c30c_2* var0;
    if (arg1->unknown_6_ == 0) {
        return;
    }
    var0 = (struct Struct_ov004_0215c30c_2*)arg0->unknown_0_;
    if (var0 != NULL) {
        while (var0->unknown_18_ != NULL) {
            var0 = var0->unknown_18_;
        }
        var0->unknown_18_ = arg1;
        arg1->unknown_14_ = var0;
        return;
    }
    arg0->unknown_0_ = arg1;
}

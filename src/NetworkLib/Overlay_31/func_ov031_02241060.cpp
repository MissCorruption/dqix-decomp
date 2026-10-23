#include <globaldefs.h>

struct Struct_ov031_02241060_2 {
    Struct_ov031_02241060_2* unknown_0_;
};

struct Struct_ov031_02241060 {
    char unknown_0_[0x10];
    void* unknown_10_;
    void* unknown_14_;
    char unknown_18_[4];
    Struct_ov031_02241060_2* unknown_1c_;
};

extern "C" void (*data_ov031_02290fc8)(void*);

// USA: func_ov031_02241060
extern "C" ARM void func_ov031_02241060(Struct_ov031_02241060* arg0) {
    Struct_ov031_02241060_2* var0 = arg0->unknown_1c_;
    if (var0 != NULL) {
        do {
            Struct_ov031_02241060_2* var1 = var0->unknown_0_;
            data_ov031_02290fc8(var0);
            arg0->unknown_1c_ = var1;
        } while ((var0 = arg0->unknown_1c_) != NULL);
    }
    if (arg0->unknown_10_ != NULL) data_ov031_02290fc8(arg0->unknown_10_);
    if (arg0->unknown_14_ != NULL) data_ov031_02290fc8(arg0->unknown_14_);
    data_ov031_02290fc8(arg0);
}

#include <globaldefs.h>

extern "C" void __clear(void* arg0, int arg1);

struct Struct_02049b54_3 {
    unsigned int unknown_0_[3];
};
struct Struct_02049b54 {
    unsigned int unknown_0_, unknown_4_, unknown_8_, unknown_c_;
};
struct Struct_02049b54_2 {
    unsigned char unknown_0_[0x13c];
    struct Struct_02049b54* unknown_13c_;
};

// USA: func_02049b54
extern "C" ARM struct Struct_02049b54_3 func_02049b54(struct Struct_02049b54_2* arg0) {
    struct Struct_02049b54_3 var0;
    __clear(&var0, 0xc);
    if (arg0->unknown_13c_ == NULL) return var0;
    unsigned int var1 = arg0->unknown_13c_->unknown_4_;
    unsigned int var2 = arg0->unknown_13c_->unknown_c_;
    var0.unknown_0_[0] = var1;
    var0.unknown_0_[1] = 0xcc;
    var0.unknown_0_[2] = var2;
    return var0;
}

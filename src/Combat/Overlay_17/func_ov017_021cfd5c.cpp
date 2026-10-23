#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021cfd5c {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned char unknown_4_;
};

struct Struct_ov017_021cfd5c_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    Struct_ov017_021cfd5c unknown_4_;
    unsigned char unknown_a_[7];
};

// USA: func_ov017_021cfd5c
extern "C" ARM void func_ov017_021cfd5c(unsigned char arg0, unsigned short arg1, unsigned short arg2) {
    Struct_ov017_021cfd5c_2 var0;
    void* var1 = func_0202ae24();
    var0.unknown_0_ = 0xa4;
    Struct_ov017_021cfd5c* var2 = &var0.unknown_4_;
    var2->unknown_4_ = arg0;
    var2->unknown_0_ = arg1;
    var2->unknown_2_ = arg2;
    func_0205e330(var1, &var0, 0);
}

#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021cefe0 {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
};

struct Struct_ov017_021cefe0_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    Struct_ov017_021cefe0 unknown_4_;
    unsigned char unknown_8_[12];
};

// USA: func_ov017_021cefe0
extern "C" ARM void func_ov017_021cefe0(unsigned short arg0, unsigned char arg1, unsigned char arg2) {
    Struct_ov017_021cefe0_2 var0;
    void* var1 = func_0202ae24();
    var0.unknown_0_ = 0x6c;
    Struct_ov017_021cefe0* var2 = &var0.unknown_4_;
    var2->unknown_0_ = arg0;
    var2->unknown_2_ = arg1;
    var2->unknown_3_ = arg2;
    func_0205e330(var1, &var0, 0);
}

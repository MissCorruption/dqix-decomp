#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021d27a0 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
};

struct Struct_ov017_021d27a0_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    Struct_ov017_021d27a0 unknown_4_;
    unsigned char unknown_7_[13];
};

// USA: func_ov017_021d27a0
extern "C" ARM void func_ov017_021d27a0(int arg0, int arg1, int arg2) {
    Struct_ov017_021d27a0_2 var0;
    void* var1 = func_0202ae24();
    var0.unknown_0_ = 0x22;
    Struct_ov017_021d27a0* var2 = &var0.unknown_4_;
    var2->unknown_0_ = arg0;
    var2->unknown_1_ = arg1;
    var2->unknown_2_ = arg2;
    func_0205e330(var1, &var0, 0);
}

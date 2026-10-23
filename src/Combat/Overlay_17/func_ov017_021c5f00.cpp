#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021c530c_2 { unsigned short unknown_0_; unsigned short unknown_2_; unsigned char unknown_4_; unsigned char unknown_5_; unsigned char unknown_6_; };

struct Struct_ov017_021c5f00 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    unsigned char unknown_a_;
    unsigned char unknown_b_[9];
};

// USA: func_ov017_021c5f00
extern "C" ARM void func_ov017_021c5f00(Struct_ov017_021c530c_2* arg0) {
    Struct_ov017_021c5f00 var0;
    void* var1 = func_0202ae24();
    var0.unknown_0_ = 0x3f;
    var0.unknown_4_ = arg0->unknown_0_;
    var0.unknown_6_ = arg0->unknown_2_;
    var0.unknown_8_ = arg0->unknown_4_;
    var0.unknown_9_ = arg0->unknown_5_;
    var0.unknown_a_ = arg0->unknown_6_;
    func_0205e330(var1, &var0, 0);
}

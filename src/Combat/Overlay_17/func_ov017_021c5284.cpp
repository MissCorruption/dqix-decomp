#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);
extern "C" void func_0202ae18(void);
extern "C" int func_0202c508(void);
extern "C" void func_ov017_021cdaa0(void);

struct Struct_ov017_021b7284_10 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned short unknown_6_;
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    unsigned short unknown_a_;
    unsigned char unknown_c_;
};

struct Struct_ov017_021c5284 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    unsigned short unknown_a_;
    unsigned char unknown_c_;
    unsigned char unknown_d_;
    unsigned short unknown_e_;
    unsigned char unknown_10_;
};

// USA: func_ov017_021c5284
extern "C" ARM void func_ov017_021c5284(Struct_ov017_021b7284_10* arg0) {
    void* var0 = func_0202ae24();

    Struct_ov017_021c5284 var1;
    var1.unknown_0_ = 0x3d;
    var1.unknown_4_ = arg0->unknown_0_;
    var1.unknown_6_ = arg0->unknown_2_;
    var1.unknown_8_ = arg0->unknown_4_;
    var1.unknown_9_ = arg0->unknown_5_;
    var1.unknown_a_ = arg0->unknown_6_;
    var1.unknown_c_ = arg0->unknown_8_;
    var1.unknown_d_ = arg0->unknown_9_;
    var1.unknown_e_ = arg0->unknown_a_;
    var1.unknown_10_ = arg0->unknown_c_;
    func_0205e330(var0, &var1, 0);

    func_0202ae18();
    if (func_0202c508()) {
        func_ov017_021cdaa0();
    }
}

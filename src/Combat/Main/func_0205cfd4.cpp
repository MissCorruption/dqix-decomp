#include <globaldefs.h>

struct Struct_0205c53c;
extern "C" void func_0205c53c(struct Struct_0205c53c* arg0);

struct Struct_0205cfd4 {
    char unknown_0_[0x98];
    int unknown_98_;
    int unknown_9c_;
    unsigned short unknown_a0_;
    unsigned short unknown_a2_;
    unsigned short unknown_a4_;
    unsigned short unknown_a6_;
    unsigned short unknown_a8_;
    unsigned short unknown_aa_;
    unsigned short unknown_ac_;
    unsigned short unknown_ae_;
    unsigned char unknown_b0_;
    unsigned char unknown_b1_;
    unsigned char unknown_b2_;
    unsigned char unknown_b3_;
    unsigned char unknown_b4_;
    unsigned char unknown_b5_;
    unsigned char unknown_b6_;
    unsigned char unknown_b7_;
    unsigned char unknown_b8_;
};

// USA: func_0205cfd4
extern "C" ARM void func_0205cfd4(struct Struct_0205cfd4* arg0) {
    func_0205c53c((struct Struct_0205c53c*)arg0);
    arg0->unknown_98_ = 0;
    arg0->unknown_9c_ = 0;
    arg0->unknown_a0_ = 1;
    arg0->unknown_a2_ = 1;
    arg0->unknown_a4_ = 0;
    arg0->unknown_a6_ = 0;
    arg0->unknown_a8_ = 4;
    arg0->unknown_aa_ = 4;
    arg0->unknown_ac_ = 0xa;
    arg0->unknown_ae_ = 0xb;
    arg0->unknown_b0_ = 0;
    arg0->unknown_b1_ = 0;
    arg0->unknown_b2_ = 0;
    arg0->unknown_b3_ = 0;
    arg0->unknown_b4_ = 0;
    arg0->unknown_b5_ = 0;
    arg0->unknown_b6_ = 0;
    arg0->unknown_b7_ = 0xa;
    arg0->unknown_b8_ = 0xff;
}

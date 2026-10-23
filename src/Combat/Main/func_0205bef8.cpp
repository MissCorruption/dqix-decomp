#include <globaldefs.h>

struct Struct_0205ba2c;
extern "C" void func_0205ba2c(struct Struct_0205ba2c*);

struct Struct_0205bef8 {
    char unknown_0_[0x30];
    int unknown_30_;
    short unknown_34_;
    unsigned char unknown_36_;
    unsigned char unknown_37_;
    unsigned char unknown_38_;
    unsigned char unknown_39_;
    unsigned char unknown_3a_;
    unsigned char unknown_3b_;
    unsigned char unknown_3c_;
    unsigned char unknown_3d_;
};

// USA: func_0205bef8
extern "C" ARM void func_0205bef8(struct Struct_0205bef8* arg0) {
    func_0205ba2c((struct Struct_0205ba2c*)arg0);
    arg0->unknown_30_ = 0;
    arg0->unknown_34_ = 0;
    arg0->unknown_36_ = 0;
    arg0->unknown_37_ = 0;
    arg0->unknown_38_ = 0;
    arg0->unknown_39_ = 0x14;
    arg0->unknown_3a_ = 0xa;
    arg0->unknown_3c_ = 1;
    arg0->unknown_3d_ = 1;
}

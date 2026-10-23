#include <globaldefs.h>

struct Struct_0205ba2c;
extern "C" void func_0205ba2c(struct Struct_0205ba2c*);

struct Struct_0205bbcc {
    char unknown_0_[0x30];
    int unknown_30_;
    int unknown_34_;
    short unknown_38_;
    short unknown_3a_;
    int unknown_3c_;
    int unknown_40_;
    int unknown_44_;
    int unknown_48_;
    unsigned char unknown_4c_;
    unsigned char unknown_4d_;
    unsigned char unknown_4e_;
};

// USA: func_0205bbcc
extern "C" ARM void func_0205bbcc(struct Struct_0205bbcc* arg0) {
    func_0205ba2c((struct Struct_0205ba2c*)arg0);
    arg0->unknown_30_ = -1;
    arg0->unknown_34_ = 0;
    arg0->unknown_38_ = 0;
    arg0->unknown_3a_ = 0;
    arg0->unknown_3c_ = 0;
    arg0->unknown_40_ = 0;
    arg0->unknown_44_ = 0;
    arg0->unknown_48_ = 0;
    arg0->unknown_4c_ = 0;
    arg0->unknown_4d_ = 0;
    arg0->unknown_4e_ = 0;
}

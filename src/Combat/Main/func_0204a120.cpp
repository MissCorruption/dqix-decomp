#include <globaldefs.h>

struct Struct_0204a120_2;
extern "C" void func_020a2cf0(struct Struct_0204a120_2*);
extern "C" ARM void func_0202e08c(unsigned int* arg0, unsigned int arg1);

struct Struct_0204a120 {
    char unknown_0_[0x21c];
    int unknown_21c_;
    int unknown_220_;
    unsigned char unknown_224_;
    char unknown_225_[0xf];
    unsigned char unknown_234_;
    char unknown_235_[0xf];
    unsigned char unknown_244_;
    char unknown_245_[0xf];
    int unknown_254_;
    int unknown_258_;
    int unknown_25c_;
    int unknown_260_;
    unsigned char unknown_264_;
    unsigned char unknown_265_;
};

// USA: func_0204a120
extern "C" ARM void func_0204a120(struct Struct_0204a120* arg0) {
    func_020a2cf0((struct Struct_0204a120_2*)arg0);
    func_0202e08c((unsigned int*)arg0, 0x10);
    arg0->unknown_21c_ = 0;
    arg0->unknown_220_ = 0;
    arg0->unknown_224_ = 0;
    arg0->unknown_234_ = 0;
    arg0->unknown_244_ = 0;
    arg0->unknown_254_ = -1;
    arg0->unknown_258_ = -1;
    arg0->unknown_25c_ = -1;
    arg0->unknown_260_ = -1;
    arg0->unknown_264_ = 0;
    arg0->unknown_265_ = 0;
}

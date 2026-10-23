#include <globaldefs.h>
extern "C" void func_0202e9a4(struct Struct_0202df68*, int);

extern "C" void func_0202e694(void*, int*);

struct Struct_020a2800 {
    char unknown_0_[0x220];
    int unknown_220_;
    int unknown_224_;
    int unknown_228_;
};

// USA: func_020a2800
extern "C" ARM void func_020a2800(struct Struct_020a2800* arg0) {
    arg0->unknown_224_ = 0x6000;
    arg0->unknown_228_ = 0xb000;
    func_0202e694(arg0, &arg0->unknown_220_);
    func_0202e9a4((struct Struct_0202df68*)(arg0), (int)(0xf000));
}

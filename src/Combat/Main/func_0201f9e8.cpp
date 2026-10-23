#include <globaldefs.h>

struct Struct_020fdc60_3 {
    unsigned char unknown_0_; // +0
    unsigned char unknown_1_;    // +1
    unsigned char unknown_2_;    // +2
    unsigned char unknown_3_;    // +3
};

extern "C" void func_0201fa00(void*);

// USA: func_0201f9e8
extern "C" ARM void func_0201f9e8(struct Struct_020fdc60_3* arg0) {
    arg0->unknown_2_ = 0;
    arg0->unknown_3_ = 0;
    func_0201fa00(arg0);
}

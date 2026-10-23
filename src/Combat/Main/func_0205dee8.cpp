#include <globaldefs.h>
extern "C" void func_0205d904(unsigned char*);

struct Struct_0205dee8 {
    char unknown_0_[0xb0];
    unsigned char unknown_b0_;           // 0xb0
};


// USA: func_0205dee8
extern "C" ARM void func_0205dee8(struct Struct_0205dee8* arg0, int arg1) {
    arg0->unknown_b0_ = arg1;
    func_0205d904((unsigned char*)(arg0));
}

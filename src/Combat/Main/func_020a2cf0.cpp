#include <globaldefs.h>

extern "C" void func_0202df68(void*);
extern "C" void func_0202e08c(unsigned int*, unsigned int);

struct Struct_0204a120_2 {
    char unknown_0_[0x218];
    int unknown_218_;
};

// USA: func_020a2cf0
extern "C" ARM void func_020a2cf0(struct Struct_0204a120_2* arg0) {
    func_0202df68(arg0);
    func_0202e08c((unsigned int*)arg0, 2);
    arg0->unknown_218_ = 0;
}

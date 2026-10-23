#include <globaldefs.h>

struct Struct_ov023_021e98dc {
    char unknown_0_[0x10];
    unsigned int unknown_10_0_ : 9;
    unsigned int unknown_11_1_ : 14;
};

extern "C" int func_020ac4c0(void* arg0);
extern "C" void func_ov017_021d6134(void*, int);

// USA: func_ov023_021e98dc
extern "C" ARM int func_ov023_021e98dc(void* arg0) {
    char var0[0xb0];
    func_020ac4c0(var0);
    func_ov017_021d6134(arg0, ((struct Struct_ov023_021e98dc*)var0)->unknown_11_1_);
    return 1;
}

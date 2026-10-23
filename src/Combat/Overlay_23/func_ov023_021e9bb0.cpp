#include <globaldefs.h>

struct Struct_ov023_021e9bb0 {
    char unknown_0_[0x18];
    unsigned int unknown_18_0_ : 16;
    unsigned int unknown_1a_0_ : 4;
};

extern "C" int func_020ac4c0(void* arg0);
extern "C" void func_ov017_021d6134(void*, int);

// USA: func_ov023_021e9bb0
extern "C" ARM int func_ov023_021e9bb0(void* arg0) {
    char var0[0xb0];
    func_020ac4c0(var0);
    func_ov017_021d6134(arg0, ((struct Struct_ov023_021e9bb0*)var0)->unknown_1a_0_);
    return 1;
}

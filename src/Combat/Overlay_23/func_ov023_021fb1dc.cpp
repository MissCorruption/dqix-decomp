#include <globaldefs.h>

extern "C" void __clear(void* arg0, int arg1);

struct Struct_ov023_021fb1dc {
    unsigned int unknown_0_[3];
};

// USA: func_ov023_021fb1dc
extern "C" ARM void func_ov023_021fb1dc(void* arg0, void* arg1) {
    struct Struct_ov023_021fb1dc var0;
    __clear(&var0, 0xc);
    var0.unknown_0_[0] = *(unsigned int*)((char*)arg1 + 0x28);
    var0.unknown_0_[2] = *(unsigned int*)((char*)arg1 + 0x2c);
    *(struct Struct_ov023_021fb1dc*)arg0 = var0;
}

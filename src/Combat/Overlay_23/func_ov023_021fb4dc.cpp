#include <globaldefs.h>

extern "C" void __clear(void* arg0, int arg1);

struct Struct_ov023_021fb4dc { unsigned int unknown_0_[3]; };

// USA: func_ov023_021fb4dc
extern "C" ARM void func_ov023_021fb4dc(void* arg0, void* arg1) {
    struct Struct_ov023_021fb4dc var0;
    __clear(&var0, 0xc);
    var0.unknown_0_[0] = *(unsigned short*)((char*)arg1 + 0x28) << 0xc;
    var0.unknown_0_[2] = *(unsigned short*)((char*)arg1 + 0x2a) << 0xc;
    *(struct Struct_ov023_021fb4dc*)arg0 = var0;
}

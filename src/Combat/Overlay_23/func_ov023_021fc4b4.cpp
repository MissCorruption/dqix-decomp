#include <globaldefs.h>

extern "C" void __clear(void* arg0, int arg1);

struct Struct_ov023_021fc4b4 { unsigned int unknown_0_[3]; };

// USA: func_ov023_021fc4b4
extern "C" ARM void func_ov023_021fc4b4(void* arg0, void* arg1) {
    struct Struct_ov023_021fc4b4 var0;
    __clear(&var0, 0xc);
    var0.unknown_0_[0] = *(unsigned short*)((char*)arg1 + 0x26) << 0xc;
    var0.unknown_0_[1] = *(unsigned short*)((char*)arg1 + 0x28) << 0xc;
    *(struct Struct_ov023_021fc4b4*)arg0 = var0;
}

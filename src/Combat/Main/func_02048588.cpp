#include <globaldefs.h>
#include "World/Object3D.h"

extern "C" void _ZN8Object3D14ShallowCloneToEPS_(void* arg0);

struct Struct_02048588 {
    unsigned char unknown_0_[0x10];
    unsigned int unknown_10_0_ : 27;
    unsigned int unknown_13_3_ : 1;
    unsigned int unknown_13_4_ : 4;
};

// USA: func_02048588
extern "C" ARM void func_02048588(unsigned char* arg0, unsigned char* arg1) {
    _ZN8Object3D14ShallowCloneToEPS_(arg0);
    *(int*)(arg1 + 0x148) = *(int*)(arg0 + 0xb0);
    *(int*)(arg1 + 0x144) = *(int*)(arg0 + 0xac);
    int* var0 = *(int**)(arg1 + 0x13c);
    if (var0 != 0) {
        *var0 = *(int*)(arg0 + 0xb4);
    }
    *(int*)(arg1 + 0x134) = *(int*)(arg0 + 0xb0) + 0x2c;
    if (((Object3D*)arg0)->GetFlags() & 0x20000000) {
        ((Object3D*)arg1)->EnableFlag(0x20000000);
    }
    Struct_02048588* var1 = *(Struct_02048588**)(arg0 + 0xb0);
    unsigned int var2 = var1->unknown_13_3_;
    if (var2) {
        *(arg1 + 0xc2) &= ~0x10;
    } else {
        *(arg1 + 0xc2) |= 0x10;
    }
    void* var3 = *(void**)(arg0 + 0xac);
    *(short*)(arg1 + 0x18e) = *(short*)((char*)var3 + 0x12);
}

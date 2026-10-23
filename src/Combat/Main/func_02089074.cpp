#include <globaldefs.h>

struct Struct_02089074 {
    unsigned int unknown_0_0_ : 20;
    unsigned int unknown_2_4_ : 1;
    unsigned int unknown_2_5_ : 1;
    unsigned int unknown_2_6_ : 10;
};

// USA: func_02089074
extern "C" ARM void func_02089074(unsigned char* arg0) {
    struct Struct_02089074* var0;
    arg0[0x7a] = 3;
    arg0[0x9d] = 0;
    *(int*)(arg0 + 0x18) |= 0x40;
    var0 = (struct Struct_02089074*)(arg0 + 0x14);
    var0->unknown_2_4_ = 0;
    var0->unknown_2_5_ = 0;
}

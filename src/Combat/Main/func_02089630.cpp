#include <globaldefs.h>
#include "Util/Random.h"

struct Struct_02082828;
extern "C" void func_02082d38(struct Struct_02082828* arg0, struct Struct_02082828* arg1);

extern "C" void func_020891cc(void* arg0, void* arg1, int arg2);

struct Struct_02089630 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int unknown_3_6_ : 2;
};

// USA: func_02089630
extern "C" ARM void func_02089630(char* arg0, char* arg1, int arg2) {
    func_020891cc(arg0, arg1, arg2);
    struct Random* var0 = GetBTRandom();

    if (arg2 != 0) {
        unsigned short var1 = *(unsigned short*)(arg1 + 0x30);
        *(unsigned short*)(arg0 + 0x4) = var1;
        *(unsigned short*)(arg0 + 0x0) = var1;
    } else {
        unsigned int var2 = *(unsigned short*)(arg1 + 0x30);
        *(unsigned short*)(arg0 + 0x4) = (unsigned short)(unsigned int)(0.5f +
            (float)var2 * NextRandomFloatBetween(var0, 0.8f, 1.0f));
        *(unsigned short*)(arg0 + 0x0) = *(unsigned short*)(arg0 + 0x4);
    }
    unsigned short var3 = *(unsigned short*)(arg1 + 0x32);
    *(unsigned short*)(arg0 + 0x6) = var3;
    *(unsigned short*)(arg0 + 0x2) = var3;
    *(unsigned short*)(arg0 + 0xc) = *(unsigned short*)(arg1 + 0x38);
    *(unsigned short*)(arg0 + 0x8) = *(unsigned short*)(arg1 + 0x34);
    *(unsigned short*)(arg0 + 0xa) = *(unsigned short*)(arg1 + 0x36);
    ((Struct_02089630*)(arg0 + 0x10))->unknown_0_0_ = (unsigned short)((Struct_02089630*)(arg1 + 0x3c))->unknown_0_0_;
    ((Struct_02089630*)(arg0 + 0x10))->unknown_1_2_ = (unsigned short)((Struct_02089630*)(arg1 + 0x3c))->unknown_1_2_;
    ((Struct_02089630*)(arg0 + 0x10))->unknown_2_4_ = (unsigned short)((Struct_02089630*)(arg1 + 0x3c))->unknown_2_4_;
    func_02082d38((struct Struct_02082828*)(arg0 + 0x3e), (struct Struct_02082828*)(arg1 + 0x40));
}

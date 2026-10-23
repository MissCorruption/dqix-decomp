#include <globaldefs.h>

struct Struct_02082828;
extern "C" void func_02082d38(struct Struct_02082828* arg0, struct Struct_02082828* arg1);

struct Struct_02089494 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int unknown_3_6_ : 2;
};

// USA: func_02089494
extern "C" ARM void func_02089494(char* arg0, char* arg1, char* arg2) {
    *(unsigned short*)(arg0 + 0x4) = *(unsigned short*)(arg2 + 0x30);
    *(unsigned short*)(arg0 + 0x6) = *(unsigned short*)(arg2 + 0x32);
    func_02082d38((struct Struct_02082828*)(arg0 + 0x3e), (struct Struct_02082828*)(arg1 + 0x9));
    *(unsigned short*)(arg0 + 0xc) = *(unsigned short*)(arg2 + 0x38);
    *(unsigned short*)(arg0 + 0x8) = *(unsigned short*)(arg2 + 0x34);
    *(unsigned short*)(arg0 + 0xa) = *(unsigned short*)(arg2 + 0x36);
    ((Struct_02089494*)(arg0 + 0x10))->unknown_0_0_ = (unsigned short)((Struct_02089494*)(arg2 + 0x3c))->unknown_0_0_;
    ((Struct_02089494*)(arg0 + 0x10))->unknown_1_2_ = (unsigned short)((Struct_02089494*)(arg2 + 0x3c))->unknown_1_2_;
    ((Struct_02089494*)(arg0 + 0x10))->unknown_2_4_ = (unsigned short)((Struct_02089494*)(arg2 + 0x3c))->unknown_2_4_;
}

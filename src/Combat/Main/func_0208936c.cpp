#include <globaldefs.h>

struct Struct_02082828;
extern "C" void func_02082d38(struct Struct_02082828* arg0, struct Struct_02082828* arg1);

extern "C" void func_020891cc(void* arg0, void* arg1, void* arg2);

struct Struct_0208936c {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int unknown_3_6_ : 2;
};

// USA: func_0208936c
extern "C" ARM void func_0208936c(char* arg0, char* arg1, char* arg2) {
    func_020891cc(arg0, arg1, arg2);

    *(unsigned short*)(arg0 + 0x0) = *(unsigned short*)(arg1 + 0x4);
    *(unsigned short*)(arg0 + 0x2) = *(unsigned short*)(arg1 + 0x6);
    *(unsigned short*)(arg0 + 0x4) = *(unsigned short*)(arg2 + 0x30);
    *(unsigned short*)(arg0 + 0x6) = *(unsigned short*)(arg2 + 0x32);
    func_02082d38((struct Struct_02082828*)(arg0 + 0x3e), (struct Struct_02082828*)(arg1 + 0x9));

    *(unsigned char*)(arg0 + 0x24) = *(unsigned char*)(arg1 + 0x8);

    unsigned int var0 = *(unsigned int*)(arg1 + 0x0);
    *(unsigned int*)(arg0 + 0x14) = var0;
    if (var0 & 0x2) {
        unsigned short var1 = *(unsigned short*)(arg0 + 0x22);
        var1 = (var1 & ~3) | 1;
        *(unsigned short*)(arg0 + 0x22) = var1;
    }

    unsigned char var2 = *(unsigned char*)(arg0 + 0x24);
    if (var2 != 0) {
        *(unsigned int*)(arg0 + 0x14) |= 0x800000;
        *(unsigned char*)(arg0 + 0x24) = var2;
    }

    *(unsigned short*)(arg0 + 0xc) = *(unsigned short*)(arg2 + 0x38);
    *(unsigned short*)(arg0 + 0x8) = *(unsigned short*)(arg2 + 0x34);
    *(unsigned short*)(arg0 + 0xa) = *(unsigned short*)(arg2 + 0x36);
    ((Struct_0208936c*)(arg0 + 0x10))->unknown_0_0_ = (unsigned short)((Struct_0208936c*)(arg2 + 0x3c))->unknown_0_0_;
    ((Struct_0208936c*)(arg0 + 0x10))->unknown_1_2_ = (unsigned short)((Struct_0208936c*)(arg2 + 0x3c))->unknown_1_2_;
    ((Struct_0208936c*)(arg0 + 0x10))->unknown_2_4_ = (unsigned short)((Struct_0208936c*)(arg2 + 0x3c))->unknown_2_4_;
    *(unsigned char*)(arg0 + 0x26) = 1;
}

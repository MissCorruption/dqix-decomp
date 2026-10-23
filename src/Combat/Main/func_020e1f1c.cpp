#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_020200c0_3 {
    int unknown_0_;
    short unknown_4_;
    short unknown_6_;
    short unknown_8_;
    short unknown_a_;
};

struct Struct_020e1f1c {
    int unknown_0_;
    int unknown_4_;
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    unsigned char unknown_a_;
    unsigned char unknown_b_;
};

struct Struct_020e1f1c_2 {
    Struct_020200c0_3* unknown_0_;
    void* unknown_4_;
    Struct_020e1f1c* unknown_8_;
    char unknown_c_[0x30 - 0xc];
    int unknown_30_;
    int unknown_34_;
    char unknown_38_[0x3c - 0x38];
    unsigned char unknown_3c_;
};

struct Struct_020e1f1c_3 {
    void* unknown_0_;
    Struct_020e1f1c_2* unknown_4_;
};

void* AllocateVRAMStagingMemory(unsigned int value);
struct Struct_020e1288;
extern "C" int func_020e1288(Struct_020e1288*);
extern "C" void func_020e2018(void* arg0);
extern "C" void func_02020520(Struct_020200c0_3* arg0);
struct Struct_020200c0_4;
extern "C" void func_0205b20c(Struct_020200c0_4*);
extern "C" void func_0205b220(void* arg0, int arg1);
extern "C" void func_0205b228(void* arg0, int arg1, unsigned char arg2);

// USA: func_020e1f1c
extern "C" ARM void* func_020e1f1c(Struct_020e1f1c_3* arg0) {
    void* var0 = AllocateVRAMStagingMemory(0x4000);
    arg0->unknown_0_ = var0;
    if (var0 != 0) {
        Struct_020e1f1c_2* var1 = arg0->unknown_4_;
        int var2 = func_020e1288((Struct_020e1288*)var1);
        memset((char*)arg0->unknown_0_ + var1->unknown_30_, 0, var1->unknown_34_ + var2);
        func_020e2018(arg0);
        int var3 = arg0->unknown_4_->unknown_3c_;
        for (int var4 = 0; var4 < var3; var4++) {
            Struct_020200c0_3* var5 = &arg0->unknown_4_->unknown_0_[var4];
            Struct_020e1f1c* var6 = &arg0->unknown_4_->unknown_8_[var4];
            func_02020520(var5);
            var5->unknown_0_ = var6->unknown_4_;
            var5->unknown_4_ = var6->unknown_8_;
            var5->unknown_6_ = var6->unknown_9_;
            var5->unknown_8_ = var6->unknown_a_;
            var5->unknown_a_ = var6->unknown_b_;
        }
        void* var7 = arg0->unknown_4_->unknown_4_;
        func_0205b20c((Struct_020200c0_4*)var7);
        func_0205b220(var7, (int)((unsigned int)arg0->unknown_0_ + arg0->unknown_4_->unknown_30_));
        func_0205b228(var7, (int)arg0->unknown_4_->unknown_0_, var3);
    }
    return arg0->unknown_0_;
}

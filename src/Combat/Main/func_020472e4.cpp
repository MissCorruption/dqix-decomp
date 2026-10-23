#include <globaldefs.h>

extern "C" void func_02031278(void*);
extern "C" void func_02031234(int);
extern "C" void func_020311f0(int);
extern "C" void func_02047448(void* arg0, int arg1, int arg2);

struct Struct_020472e4 {
    char unknown_0_[8];
    int unknown_8_;
};

struct Struct_020472e4_2 {
    int unknown_0_;
    struct Struct_020472e4* unknown_4_;
};

struct Struct_020472e4_3 {
    unsigned char unknown_0_0_ : 1;
    unsigned char unknown_0_1_ : 1;
    unsigned char unknown_0_2_ : 6;
};

struct Struct_0201730c_2 {
    char unknown_0_[0xc];
    struct Struct_020472e4_2* unknown_c_; // 0xc
    char unknown_10_[0x1c - 0xc - 4];
    int unknown_1c_; // 0x1c
    int unknown_20_; // 0x20
    int unknown_24_; // 0x24
    void* unknown_28_;   // 0x28
    void* unknown_2c_;   // 0x2c
    void* unknown_30_; // 0x30
    int unknown_34_; // 0x34
    int unknown_38_; // 0x38
    int unknown_3c_; // 0x3c
    char unknown_40_[0x70 - 0x40];
    int unknown_70_; // 0x70
    int unknown_74_; // 0x74
    char unknown_78_[0x82 - 0x78];
    short unknown_82_; // 0x82
    struct Struct_020472e4_3 unknown_84_; // 0x84
};

// USA: func_020472e4
extern "C" ARM void func_020472e4(struct Struct_0201730c_2* arg0, int arg1) {
    struct Struct_020472e4_2* var0;
    struct Struct_020472e4* var1;
    if (!arg0->unknown_84_.unknown_0_0_) return;
    if (!arg0->unknown_84_.unknown_0_1_) return;
    if (arg0->unknown_82_ <= 0) return;
    var0 = &arg0->unknown_c_[arg0->unknown_74_];
    var1 = &var0->unknown_4_[arg0->unknown_70_];
    *(volatile int*)0x4000444 = 0;
    {
        int var2 = arg0->unknown_24_, var3 = arg0->unknown_20_, var4 = arg0->unknown_1c_;
        *(volatile int*)0x4000470 = var4;
        *(volatile int*)0x4000470 = var3;
        *(volatile int*)0x4000470 = var2;
    }
    {
        int var5 = arg0->unknown_3c_, var6 = arg0->unknown_38_, var7 = arg0->unknown_34_;
        *(volatile int*)0x400046c = var7;
        *(volatile int*)0x400046c = var6;
        *(volatile int*)0x400046c = var5;
    }
    if (arg0->unknown_30_ != NULL) func_02031278(arg0->unknown_30_);
    if (arg0->unknown_2c_ != NULL) func_02031234((int)arg0->unknown_2c_);
    if (arg0->unknown_28_ != NULL) func_020311f0((int)arg0->unknown_28_);
    func_02047448(arg0, var1->unknown_8_, arg1);
    *(volatile int*)0x4000448 = 1;
}

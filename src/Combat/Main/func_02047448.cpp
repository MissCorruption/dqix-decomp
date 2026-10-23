#include <globaldefs.h>

extern "C" void func_02047718(void* arg0, void* arg1, int arg2);
extern "C" void func_02031234(int);

struct Struct_02047448 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    unsigned char* unknown_4_;
};

struct Struct_02047448_2 {
    unsigned char unknown_0_0_ : 1;
    unsigned char unknown_0_1_ : 1;
    unsigned char unknown_0_2_ : 6;
};

struct Struct_02047448_3 {
    char unknown_0_[0x8];
    struct Struct_02047448* unknown_8_; // 0x8
    char unknown_c_[0x1c - 0x8 - 4];
    int unknown_1c_; // 0x1c
    int unknown_20_; // 0x20
    int unknown_24_; // 0x24
    void* unknown_28_;  // 0x28
    void* unknown_2c_;  // 0x2c
    void* unknown_30_; // 0x30
    int unknown_34_; // 0x34
    int unknown_38_; // 0x38
    int unknown_3c_; // 0x3c
    char unknown_40_[0x82 - 0x40];
    short unknown_82_; // 0x82
    struct Struct_02047448_2 unknown_84_; // 0x84
};

// USA: func_02047448
extern "C" ARM void func_02047448(struct Struct_02047448_3* arg0, int arg1, int arg2) {
    if (!arg0->unknown_84_.unknown_0_0_) return;
    if (!arg0->unknown_84_.unknown_0_1_) return;
    if (arg0->unknown_82_ <= 0) return;

    struct Struct_02047448* var0 = arg0->unknown_8_ + arg1;
    if (var0->unknown_4_ == 0 || var0->unknown_2_ == 0) return;

    volatile int* var1 = (volatile int*)0x4000444;
    *var1 = 0;
    *(volatile int*)((char*)var1 + 0x7c) = 0x7fffffff;
    *(volatile int*)((char*)var1 + 0x80) = 0x4210;

    int var2 = arg0->unknown_1c_ - (var0->unknown_0_ >> 1) * arg0->unknown_34_;
    int var3 = arg0->unknown_24_;
    int var4 = arg0->unknown_20_;
    *(volatile int*)((char*)var1 + 0x2c) = var2;
    *(volatile int*)((char*)var1 + 0x2c) = var4;
    *(volatile int*)((char*)var1 + 0x2c) = var3;

    func_02031234((int)arg0->unknown_2c_);

    int var5 = arg0->unknown_34_;
    int var6 = arg0->unknown_3c_;
    int var7 = arg0->unknown_38_;
    volatile int* var8 = (volatile int*)0x400046c;
    *var8 = var5;
    *var8 = var7;
    *var8 = var6;

    unsigned char* var9 = var0->unknown_4_;
    int var10;
    for (var10 = 0; var10 < var0->unknown_2_; ) {
        func_02047718(arg0, var9, arg2);
        var10++;
        var9 += 8;
    }
    *(volatile int*)0x4000448 = 1;
}

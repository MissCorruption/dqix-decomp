#include <globaldefs.h>

extern "C" void func_02047718(void* arg0, void* arg1, int arg2);

struct Struct_02047648 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    unsigned char* unknown_4_;
};

struct Struct_02047648_2 {
    unsigned char unknown_0_0_ : 1;
    unsigned char unknown_0_1_ : 1;
    unsigned char unknown_0_2_ : 6;
};

// USA: func_02047648
extern "C" ARM void func_02047648(unsigned char* arg0, int arg1, int arg2) {
    struct Struct_02047648_2* var0 = (struct Struct_02047648_2*)(arg0 + 0x84);
    if (!var0->unknown_0_0_) return;
    if (!var0->unknown_0_1_) return;
    if (*(short*)(arg0 + 0x82) <= 0) return;

    struct Struct_02047648* var1 = ((struct Struct_02047648*)(*(unsigned char**)(arg0 + 0x8))) + arg1;
    if (var1->unknown_4_ == NULL || var1->unknown_2_ == 0) return;

    volatile int* var2 = (volatile int*)0x4000444;
    *var2 = 0;
    *(volatile int*)((char*)var2 + 0x7c) = 0x7fffffff;
    *(volatile int*)((char*)var2 + 0x80) = 0x4210;
    *(volatile int*)((char*)var2 + 0x2c) = -(int)(var1->unknown_0_ << 12) >> 1;
    *(volatile int*)((char*)var2 + 0x2c) = 0;
    *(volatile int*)((char*)var2 + 0x2c) = 0;

    unsigned char* var3 = var1->unknown_4_;
    int var4;
    for (var4 = 0; var4 < var1->unknown_2_; ) {
        func_02047718(arg0, var3, arg2);
        var4++;
        var3 += 8;
    }
    *(volatile int*)0x4000448 = 1;
}

#include <globaldefs.h>

struct Struct_0205d304_2;
extern "C" void func_0205d594(struct Struct_0205d304_2* arg0, unsigned char* arg1, unsigned char* arg2);

struct Struct_0205de24 {
    char unknown_0_[0x4];
    void* unknown_4_;
    char unknown_8_[0xE0 - 0x8];
};

struct Struct_0205de24_2 {
    char unknown_0_[0x98];
    unsigned char* unknown_98_;
    unsigned char* unknown_9c_;
    char unknown_a0_[0xb2 - 0xa0];
    unsigned char unknown_b2_;
    char unknown_b3_[0xb4 - 0xb3];
    unsigned char unknown_b4_;
};

// USA: func_0205de24
extern "C" ARM void func_0205de24(struct Struct_0205de24_2* arg0, unsigned char arg1, unsigned char arg2) {
    if (arg0->unknown_98_ == 0 || arg0->unknown_9c_ == 0) return;
    struct Struct_0205de24* var0 = (struct Struct_0205de24*)(arg0->unknown_9c_ + arg0->unknown_b4_ * 0xE0);
    if (var0 == 0) return;
    unsigned char* var1;
    unsigned char var2 = 0;
    unsigned char var3, var4;
    while (var2 < arg0->unknown_b2_) {
        var1 = arg0->unknown_98_ + var2 * 0x20;
        func_0205d594((struct Struct_0205d304_2*)var1, &var3, &var4);
        if (var3 == arg1 && var4 == arg2) {
            var0->unknown_4_ = var1;
            return;
        }
        var2++;
    }
}

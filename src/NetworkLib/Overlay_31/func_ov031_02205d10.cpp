#include <globaldefs.h>
#include <NitroSDK/Memory.h>
#include <NitroSDK/ProcessorContext.h>

struct Struct_ov031_02205d10 {
    unsigned char unknown_0_[0xf8];
    int unknown_f8_;
    unsigned short unknown_fc_;
};
struct Struct_ov031_02205d10_2 {
    unsigned char unknown_0_[8];
    unsigned char unknown_8_;
    unsigned char unknown_9_[0x64 - 9];
    Struct_ov031_02205d10* unknown_64_;
    unsigned char unknown_68_[8];
    short unknown_70_;
    signed char unknown_72_;
    signed char unknown_73_;
};
struct Struct_ov031_02205d10_3 {
    unsigned int unknown_0_;
    Struct_ov031_02205d10_2* unknown_4_;
    unsigned char unknown_8_[8];
    void* unknown_10_;
    unsigned int unknown_14_;
    unsigned short* unknown_18_;
    unsigned int* unknown_1c_;
};
extern "C" const void* func_ov031_0220357c(unsigned int*);
extern "C" void func_ov031_02203670(unsigned int);
extern "C" int func_ov031_02205b48(Struct_ov031_02205d10_2*, void*, unsigned int, unsigned short*, unsigned int*);
extern "C" void func_ov031_02205ebc(Struct_ov031_02205d10_2*);

// USA: func_ov031_02205d10
extern "C" ARM int func_ov031_02205d10(Struct_ov031_02205d10_3* arg0) {
    Struct_ov031_02205d10_2* var0 = arg0->unknown_4_;
    Struct_ov031_02205d10* var1 = var0->unknown_64_;
    unsigned int var2 = var1->unknown_f8_;
    unsigned int var3 = arg0->unknown_14_;
    void* var4 = arg0->unknown_10_;
    unsigned short* var5 = arg0->unknown_18_;
    unsigned int* var6 = arg0->unknown_1c_;
    unsigned int var7;
    const void* var8;
    for (;;) {
        var8 = func_ov031_0220357c(&var7);
        if (!var8 || (int)(var7 - var2) > 0) break;
        int var9 = 1;
        if (var0->unknown_73_ != 0 && var0->unknown_73_ != 4) var9 = 0;
        if (var9 && var0->unknown_8_ != 4) {
            var8 = 0;
            break;
        }
        SleepCurrentContext(10);
    }
    if (var0->unknown_70_ & 128) return -15;
    if (var0->unknown_73_ == 4) {
        if (!var8) return 0;
        if (var3 > var7) var3 = var7;
        VectorizedInvertedMemcpy(var8, var4, var3);
        func_ov031_02203670(var3);
        return var3;
    }
    int var10;
    if (var8) var10 = func_ov031_02205b48(var0, var4, var3, var5, var6);
    else var10 = 0;
    if (var10 <= 0) return var10;
    if (var1->unknown_f8_ >= var1->unknown_fc_) func_ov031_02205ebc(var0);
    return var10;
}

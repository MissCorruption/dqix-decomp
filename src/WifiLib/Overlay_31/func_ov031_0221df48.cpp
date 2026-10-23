#include <globaldefs.h>

struct Struct_ov031_0221df48 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
};
extern unsigned char data_ov031_0224e700[];
extern unsigned char data_ov031_0224e6e0[];
extern "C" void func_ov031_0221e51c(void*, const void*, unsigned int);
extern "C" unsigned short func_ov031_0221e5f8(unsigned short);
extern "C" unsigned int func_ov031_0221e5d0(unsigned int);

// USA: func_ov031_0221df48
extern "C" THUMB short func_ov031_0221df48(Struct_ov031_0221df48* arg0) {
    short var0 = 0;
    arg0->unknown_0_ = *(signed char*)(data_ov031_0224e700 + 0x1d);
    arg0->unknown_1_ = 1;
    short var1 = *(int*)(data_ov031_0224e6e0 + 0x28);
    func_ov031_0221e51c(arg0 + 1, *(void**)(data_ov031_0224e6e0 + 0x24), var1);
    arg0->unknown_2_ = func_ov031_0221e5f8(var1);
    short var2 = (((short)(var1 + 6) + 1) / 2) * 2;
    arg0->unknown_4_ = func_ov031_0221e5f8(var2);
    var0 += var2;
    Struct_ov031_0221df48* var3 = (Struct_ov031_0221df48*)((unsigned char*)arg0 + var2);
    var3->unknown_0_ = 0x60;
    var3->unknown_1_ = 0;
    var3->unknown_4_ = func_ov031_0221e5f8(0);
    unsigned int var4 = func_ov031_0221e5d0(14);
    func_ov031_0221e51c(var3 + 1, &var4, 4);
    var3->unknown_2_ = func_ov031_0221e5f8(4);
    var0 += 10;
    return var0;
}

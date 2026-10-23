#include <globaldefs.h>

struct Struct_ov031_0221e080 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned int unknown_4_;
};
extern unsigned char data_ov031_0224e6e0[];
extern unsigned char data_ov031_0224e700[];
extern "C" void func_ov031_0221e52c(void*, int, unsigned int);
extern "C" unsigned short func_ov031_0221e5f8(unsigned short);
extern "C" unsigned int func_ov031_0221e5d0(unsigned int);
extern "C" int func_ov031_0221e5a0(int, const void*, int, int, void*, int);

// USA: func_ov031_0221e080
extern "C" THUMB int func_ov031_0221e080(const void* arg0, int arg1, int arg2, int arg3) {
    Struct_ov031_0221e080 var0;
    func_ov031_0221e52c(&var0, 0, 8);
    var0.unknown_1_ = 2;
    var0.unknown_2_ = func_ov031_0221e5f8(0x5790);
    var0.unknown_4_ = func_ov031_0221e5d0(*(unsigned int*)(data_ov031_0224e6e0 + 0x34));
    if (arg2 == 0xff || *(signed char*)(data_ov031_0224e700 + 0x1c) == 0)
        var0.unknown_4_ = -1;
    return func_ov031_0221e5a0(arg3, arg0, arg1, 0, &var0, 8);
}

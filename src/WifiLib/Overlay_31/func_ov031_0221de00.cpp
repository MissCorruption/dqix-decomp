#include <globaldefs.h>
#include "NitroSDK/OverlayResponse.h"

struct Struct_ov031_0221de00_2 {
    signed char unknown_0_;
    unsigned char unknown_1_;
    short unknown_2_;
    short unknown_4_;
};
struct Struct_ov031_0221de00 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned int unknown_4_;
};
struct Struct_ov031_0224e6e0_9 {
    int unknown_0_;
    unsigned char unknown_4_[0x10];
    unsigned char* unknown_14_;
    unsigned char unknown_18_[0x14];
    unsigned int unknown_2c_;
};
extern Struct_ov031_0224e6e0_9 data_ov031_0224e6e0;
extern char data_ov031_0224b0dc[];
extern "C" void func_ov031_0221e52c(void*, int, unsigned int);
extern "C" void func_ov031_0221d060(int);
extern "C" void func_ov031_0221e51c(void*, const void*, unsigned int);
extern "C" unsigned short func_ov031_0221e5f8(unsigned short);
extern "C" unsigned int func_ov031_0221e5d0(unsigned int);
extern "C" void func_ov031_0221dfd4(int, void*, const void*, short*, short*, signed char*);
extern "C" int func_ov031_0221e354(void*, int, const char*, int);
extern "C" void func_ov031_0221e028(void*, int, int, int, signed char, signed char, const void*);
extern "C" int func_ov031_0221e080(const void*, int, int, int);

// USA: func_ov031_0221de00
extern "C" THUMB int func_ov031_0221de00(int arg0, const void* arg1, int arg2) {
    Struct_ov031_0221d7e0 var0;
    Struct_ov031_0221de00 var1;
    Struct_ov031_0221de00_2 var2;
    var2.unknown_0_ = 0;
    var2.unknown_4_ = 0;
    var2.unknown_2_ = 0;
    unsigned char* var3 = data_ov031_0224e6e0.unknown_14_;
    func_ov031_0221e52c(&var1, 0, 8);
    func_ov031_0221e52c(var3, 0, 1500);
    var1.unknown_0_ = 2;
    var1.unknown_1_ = 0;
    var1.unknown_2_ = func_ov031_0221e5f8(4);
    var1.unknown_4_ = data_ov031_0224e6e0.unknown_2c_;
    var1.unknown_4_ = func_ov031_0221e5d0(var1.unknown_4_);
    var2.unknown_4_ = 8;
    func_ov031_0221dfd4(data_ov031_0224e6e0.unknown_0_, var3 + sizeof(Struct_ov031_0221d3b0), &var1, &var2.unknown_4_, &var2.unknown_2_, &var2.unknown_0_);
    func_ov031_0221e51c(&var0, (const char*)arg1 + 8, 8);
    if (func_ov031_0221e354(&var0, 8, data_ov031_0224b0dc, 6)) {
        func_ov031_0221d060(2);
        return -1;
    }
    func_ov031_0221e028(var3, 0x2000, var2.unknown_4_, var2.unknown_2_, var2.unknown_0_, 0x11, &var0);
    var2.unknown_4_ += 24;
    func_ov031_0221e080(var3, var2.unknown_4_, 0, arg2);
    return 0;
}

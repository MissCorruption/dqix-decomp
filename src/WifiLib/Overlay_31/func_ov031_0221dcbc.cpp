#include <globaldefs.h>
#include "NitroSDK/OverlayResponse.h"

struct Struct_ov031_0221dcbc_2 {
    signed char unknown_0_;
    unsigned char unknown_1_;
    short unknown_2_;
    short unknown_4_;
    Struct_ov031_0221d7e0 unknown_6_;
};
struct Struct_ov031_0221dcbc { unsigned char unknown_0_; unsigned char unknown_1_; unsigned short unknown_2_; unsigned char unknown_4_[524]; };
struct Struct_ov031_0224e6e0_8 { unsigned char unknown_0_[0x14]; unsigned char* unknown_14_; };
extern Struct_ov031_0224e6e0_8 data_ov031_0224e6e0;
extern unsigned char data_ov031_0224f440[8];
extern char data_ov031_0224b0dc[];
extern "C" void func_ov031_0221e52c(void*, int, unsigned int);
extern "C" void* func_ov031_0221c49c(int);
extern "C" void func_ov031_0221d060(int);
extern "C" void func_ov031_0221e51c(void*, const void*, unsigned int);
extern "C" short func_ov031_0221df48(void*);
extern "C" void func_ov031_0221c4ac(int);
extern "C" unsigned short func_ov031_0221e5f8(unsigned short);
extern "C" void func_ov031_0221dfd4(int, void*, const void*, short*, short*, signed char*);
extern "C" int func_ov031_0221e354(void*, int, const char*, int);
extern "C" void func_ov031_0221e028(void*, int, int, int, signed char, signed char, const void*);
extern "C" int func_ov031_0221e080(const void*, int, int, int);

// USA: func_ov031_0221dcbc
extern "C" THUMB int func_ov031_0221dcbc(int arg0, const void* arg1, int arg2) {
    Struct_ov031_0221dcbc_2 var0;
    var0.unknown_0_ = 0;
    var0.unknown_4_ = 0;
    var0.unknown_2_ = 0;
    unsigned char* var1 = data_ov031_0224e6e0.unknown_14_;
    func_ov031_0221e52c(var1, 0, 1500);
    Struct_ov031_0221dcbc* var2 = static_cast<Struct_ov031_0221dcbc*>(func_ov031_0221c49c(528));
    if (!var2) { func_ov031_0221d060(2); return -1; }
    func_ov031_0221e52c(var2, 0, 528);
    unsigned char* var3 = var1 + sizeof(Struct_ov031_0221d3b0);
    func_ov031_0221e51c(data_ov031_0224f440, arg1, 8);
    func_ov031_0221e51c(&var0.unknown_6_, data_ov031_0224f440, 8);
    var0.unknown_4_ = func_ov031_0221df48(var2->unknown_4_);
    if (var0.unknown_4_ < 0) {
        func_ov031_0221d060(3);
        if (var2) func_ov031_0221c4ac((int)var2);
        return -1;
    }
    var2->unknown_0_ = 0;
    var2->unknown_2_ = func_ov031_0221e5f8(var0.unknown_4_);
    var0.unknown_4_ += 4;
    func_ov031_0221dfd4(0, var3, var2, &var0.unknown_4_, &var0.unknown_2_, &var0.unknown_0_);
    var0.unknown_2_ |= 0x10;
    if (func_ov031_0221e354(&var0.unknown_6_, 8, data_ov031_0224b0dc, 6)) {
        func_ov031_0221d060(2);
        if (var2) func_ov031_0221c4ac((int)var2);
        return -1;
    }
    func_ov031_0221e028(var1, 0x1000, var0.unknown_4_, var0.unknown_2_, var0.unknown_0_, 0x11, &var0.unknown_6_);
    var0.unknown_4_ += 24;
    func_ov031_0221e080(var1, var0.unknown_4_, 255, arg2);
    if (var2) func_ov031_0221c4ac((int)var2);
    return 0;
}

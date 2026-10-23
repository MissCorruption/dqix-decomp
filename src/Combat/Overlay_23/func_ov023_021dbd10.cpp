#include <globaldefs.h>

extern "C" void* func_ov023_021db4e4(void* arg0, int arg1);
extern "C" void func_ov023_021e23d0(void* arg0, int arg1, int arg2, unsigned char arg3, unsigned char arg4);
struct Struct_0201099c_3;
extern "C" int func_020e0434(struct Struct_0201099c_3*, int);

struct Struct_ov023_021dbd10 {
    char unknown_0_[0x16];
    unsigned char unknown_16_;
};

struct Struct_ov023_021dbd10_2 {
    char unknown_0_[8];
    unsigned int unknown_8_0_ : 4;
};

struct Struct_ov023_021ff9e0_2 {
#if !defined(jpn)
    unsigned char unknown_0_[0x14];
#endif
    struct Struct_0201099c_3* unknown_14_;
};
extern struct Struct_ov023_021ff9e0_2 data_ov023_021ff9e0;

// USA: func_ov023_021dbd10
extern "C" ARM void func_ov023_021dbd10(void* arg0, struct Struct_ov023_021dbd10_2* arg1) {
    struct Struct_ov023_021dbd10* var0;
    if (!arg0 || !arg1) return;

    int var1 = (arg1->unknown_8_0_ <= 7) ? 1 : 0;
    if (var1) {
        var0 = (struct Struct_ov023_021dbd10*)func_ov023_021db4e4(arg0, 0x9);
        if (var0) var0->unknown_16_ &= ~1;
        var0 = (struct Struct_ov023_021dbd10*)func_ov023_021db4e4(arg0, 0x1c);
        if (var0) var0->unknown_16_ &= ~1;
        var0 = (struct Struct_ov023_021dbd10*)func_ov023_021db4e4(arg0, 0x1b);
        if (var0) var0->unknown_16_ &= ~1;
        var0 = (struct Struct_ov023_021dbd10*)func_ov023_021db4e4(arg0, 0xb);
        if (var0) var0->unknown_16_ &= ~1;
        var0 = (struct Struct_ov023_021dbd10*)func_ov023_021db4e4(arg0, 0x2a);
        if (var0) var0->unknown_16_ &= ~1;
        var0 = (struct Struct_ov023_021dbd10*)func_ov023_021db4e4(arg0, 0x2c);
        if (var0) var0->unknown_16_ &= ~1;
        return;
    }

    var0 = (struct Struct_ov023_021dbd10*)func_ov023_021db4e4(arg0, 0x14);
    if (var0) var0->unknown_16_ &= ~1;
    var0 = (struct Struct_ov023_021dbd10*)func_ov023_021db4e4(arg0, 0x13);
    if (var0) var0->unknown_16_ &= ~1;
    var0 = (struct Struct_ov023_021dbd10*)func_ov023_021db4e4(arg0, 0x10);
    if (var0) var0->unknown_16_ &= ~1;
    var0 = (struct Struct_ov023_021dbd10*)func_ov023_021db4e4(arg0, 0x12);
    if (var0) var0->unknown_16_ &= ~1;
    var0 = (struct Struct_ov023_021dbd10*)func_ov023_021db4e4(arg0, 0xf);
    if (var0) var0->unknown_16_ &= ~1;
    var0 = (struct Struct_ov023_021dbd10*)func_ov023_021db4e4(arg0, 0xe);
    if (var0) var0->unknown_16_ &= ~1;

    func_ov023_021e23d0(arg0, 0x19, func_020e0434(data_ov023_021ff9e0.unknown_14_, 0x24), 0xa, 0xf);
    func_ov023_021e23d0(arg0, 0x17, func_020e0434(data_ov023_021ff9e0.unknown_14_, 0x23), 0x8, 0xf);
    func_ov023_021e23d0(arg0, 0x1a, func_020e0434(data_ov023_021ff9e0.unknown_14_, 0x25), 0xa, 0xf);
    func_ov023_021e23d0(arg0, 0x18, func_020e0434(data_ov023_021ff9e0.unknown_14_, 0x23), 0x8, 0xf);
    func_ov023_021e23d0(arg0, 0x15, func_020e0434(data_ov023_021ff9e0.unknown_14_, 0x26), 0xa, 0xf);
    func_ov023_021e23d0(arg0, 0x16, func_020e0434(data_ov023_021ff9e0.unknown_14_, 0x27), 0xa, 0xf);
}

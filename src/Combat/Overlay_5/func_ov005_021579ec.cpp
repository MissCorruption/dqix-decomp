#if defined(jpn)
#define R(j,u) (j)
#define data_ov005_0215cbd4 data_ov005_0215dfb4
#define data_ov005_0215cd60 data_ov005_0215e140
#define data_ov014_02189480 data_ov014_0218a2c0
#define data_ov014_02189498 data_ov014_0218a2d8
#define data_ov015_02193fe0 data_ov015_02194b20
#define data_ov015_02194564 data_ov015_02195184
#define data_ov015_02194570 data_ov015_02195190
#define data_ov015_021945a0 data_ov015_021951c0
#define data_ov015_021945d0 data_ov015_021951f0
#define data_ov024_021ff17c data_ov023_021ff17c
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov005_021579ec;

struct Struct_ov005_02153954 {
    char unknown_0_[R(0x19ac, 0x1a34)];
    char unknown_1a34_[4];
};

extern "C" void func_ov005_02154d18(Struct_ov005_021579ec* arg0, int arg1, int arg2);
extern "C" void func_ov005_02154d50(Struct_ov005_021579ec* arg0, int arg1, int arg2);
extern "C" void func_ov005_021553b4(Struct_ov005_02153954* arg0, int arg1, int* arg2, int* arg3);

// USA: func_ov005_021579ec
extern "C" ARM void func_ov005_021579ec(Struct_ov005_02153954* arg0, unsigned int arg1, unsigned char arg2) {
    int var0 = 0;
    int var1 = 0;
    switch (arg1) {
    case 2:
        var0 = arg2 * 16 + 0x81;
        if (arg2 == 7)
            var0--;
        func_ov005_02154d18((Struct_ov005_021579ec*)arg0->unknown_1a34_, var0 << 12, 0x1000);
        func_ov005_02154d50((Struct_ov005_021579ec*)arg0->unknown_1a34_, 0xf000, 0x11000);
        break;
    case 3:
        func_ov005_02154d18((Struct_ov005_021579ec*)arg0->unknown_1a34_, 0x85000, 0x17000);
        func_ov005_02154d50((Struct_ov005_021579ec*)arg0->unknown_1a34_, 0x76000, 0x16000);
        break;
    case 4:
    case 6:
        func_ov005_021553b4(arg0, arg2, &var0, &var1);
        func_ov005_02154d18((Struct_ov005_021579ec*)arg0->unknown_1a34_, var0 << 12, var1 << 12);
        func_ov005_02154d50((Struct_ov005_021579ec*)arg0->unknown_1a34_, 0x18000, 0x18000);
        break;
    }
}

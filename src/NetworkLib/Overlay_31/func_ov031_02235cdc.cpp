#include <globaldefs.h>
#include <NitroSDK/Memory.h>

struct Struct_ov031_02235cdc {
    unsigned char unknown_0_[0x480];
    unsigned char unknown_480_[16];
    unsigned char unknown_490_[0x56];
    unsigned char unknown_4e6_0_ : 2;
    unsigned char unknown_4e6_2_ : 6;
};
extern Struct_ov031_02235cdc* data_ov031_02290cfc;
extern "C" int func_ov031_0223dd34(unsigned char*, int);
extern "C" unsigned int func_ov031_02236760(unsigned int);

// USA: func_ov031_02235cdc
extern "C" ARM void func_ov031_02235cdc(unsigned char* arg0) {
    int var0;
    VectorizedMemset(data_ov031_02290cfc->unknown_480_, 0, 16);
    int var1 = func_ov031_0223dd34(arg0, 32);
    switch (var1) {
    case 0:
    case 10:
    case 26:
    case 32: {
        data_ov031_02290cfc->unknown_4e6_2_ = 0;
        unsigned char* var2 = data_ov031_02290cfc->unknown_480_;
        var0 = 0;
        if (var0 < var1) do {
            unsigned char* var3 = arg0 + var0;
            unsigned int var4 = func_ov031_02236760(arg0[var0]);
            unsigned int var5 = func_ov031_02236760(var3[1]);
            *var2++ = (var4 << 4) + var5;
            var0 += 2;
        } while (var0 < var1);
        break;
    }
    default:
        data_ov031_02290cfc->unknown_4e6_2_ = 1;
        VectorizedInvertedMemcpy(arg0, data_ov031_02290cfc->unknown_480_, 16);
        break;
    }
    switch (var1) {
    case 0:
        data_ov031_02290cfc->unknown_4e6_0_ = 0;
        break;
    case 5:
    case 10:
        data_ov031_02290cfc->unknown_4e6_0_ = 1;
        break;
    case 13:
    case 26:
        data_ov031_02290cfc->unknown_4e6_0_ = 2;
        break;
    default:
        data_ov031_02290cfc->unknown_4e6_0_ = 3;
        break;
    }
}

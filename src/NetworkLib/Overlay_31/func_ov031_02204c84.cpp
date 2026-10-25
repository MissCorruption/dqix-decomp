#include <globaldefs.h>

struct Struct_ov031_02204c84 {
    unsigned long long unknown_0_;
    unsigned long long unknown_8_;
    unsigned long long unknown_10_;
};

struct Struct_ov031_0224c980 {
    char unknown_0_[0x68];
    Struct_ov031_02204c84 unknown_68_;
    char unknown_80_[0x4e8 - 0x80];
};

extern "C" Struct_ov031_0224c980 data_ov031_0224c980;

static inline unsigned int inline_ov031_02204c84(Struct_ov031_02204c84* arg0, unsigned int arg1) {
    arg0->unknown_0_ = arg0->unknown_8_ * arg0->unknown_0_ + arg0->unknown_10_;
    if (arg1 == 0)
        return (unsigned int)(arg0->unknown_0_ >> 32);
    return (unsigned int)(((arg0->unknown_0_ >> 32) * arg1) >> 32);
}

extern "C" int func_ov031_02204b84(const unsigned char* arg0, unsigned int* arg1);
extern "C" int func_ov031_02204c20(const unsigned char* arg0, unsigned int arg1, unsigned short arg2);
extern "C" unsigned int data_ov031_0224c9e0[2];

// USA: func_ov031_02204c84
extern "C" ARM unsigned int func_ov031_02204c84(const unsigned char* arg0) {
    unsigned char var0[2];
    unsigned int var1;
    unsigned short var2[2];
    var2[0] = inline_ov031_02204c84(&data_ov031_0224c980.unknown_68_, 0x10000);
    var2[1] = inline_ov031_02204c84(&data_ov031_0224c980.unknown_68_, 0x10000);
    if (func_ov031_02204b84(arg0, &var1))
        return var1;
    var0[0] = 1;
    var0[1] = 1;
    for (int var3 = 0; var3 < 3; var3++) {
        for (int var4 = 0; var4 < 2; var4++) {
            if (var0[var4]) {
                var1 = func_ov031_02204c20(arg0, data_ov031_0224c9e0[var4], var2[var4]);
                if (var1 != 0 && var1 != 0xffffffff)
                    goto label0;
                if (var1 == 0xffffffff)
                    var0[var4] = 0;
            }
        }
    }
label0:
    if (var1 == 0xffffffff)
        var1 = 0;
    return var1;
}

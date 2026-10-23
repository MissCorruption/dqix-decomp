#include <globaldefs.h>
#include <NitroSDK/Memory.h>

struct Struct_020c0430 {
    unsigned long unknown_0_, unknown_4_, unknown_8_, unknown_c_;
    unsigned long long unknown_10_;
    union {
        unsigned long unknown_18_[16];
        unsigned char unknown1_18_[64];
    };
};

extern "C" void func_020c0368(Struct_020c0430* arg0, const void* arg1, unsigned long arg2);
extern "C" void func_020c04e8(Struct_020c0430* arg0);

extern unsigned char data_020f1f8c;

// USA: func_020c0430
extern "C" ARM void func_020c0430(unsigned char* arg0, Struct_020c0430* arg1) {
    unsigned long long var0;
    unsigned long var1;
    unsigned long var2;

    var0 = arg1->unknown_10_ << 3;
    func_020c0368(arg1, &data_020f1f8c, 1);
    var1 = (unsigned long)(arg1->unknown_10_ & (64 - 1));
    var2 = 64 - var1;
    if (var2 < sizeof(var0)) {
        VectorizedMemset(&arg1->unknown1_18_[var1], 0, var2);
        func_020c04e8(arg1);
        var1 = 0;
        var2 = 64;
    }
    if (var2 > sizeof(var0))
        VectorizedMemset(&arg1->unknown1_18_[var1], 0, var2 - sizeof(var0));

    arg1->unknown_18_[14] = (unsigned long)var0;
    arg1->unknown_18_[15] = (unsigned long)(var0 >> 32);
    func_020c04e8(arg1);
    VectorizedInvertedMemcpy(arg1, arg0, 16);
    VectorizedMemset(arg1, 0, sizeof(Struct_020c0430));
}

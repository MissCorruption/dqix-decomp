#include <globaldefs.h>

struct Struct_0203d028_16;
struct Struct_0203e2c4_2;
extern "C" void func_0203db34(unsigned char* arg0, int arg1, int arg2, int arg3);
extern "C" void func_0204085c(struct Struct_0203d028_16* arg0, int arg1, int arg2, int arg3);
extern "C" void func_02040b2c(struct Struct_0203e2c4_2* arg0, int arg1);

struct Struct_ov001_02164320 {
    int unknown_0_;
    char unknown_4_[8];
    unsigned char* unknown_c_;
};

// USA: func_ov001_02164320
extern "C" ARM int func_ov001_02164320(struct Struct_ov001_02164320* arg0, int arg1, int arg2, int arg3, int arg4) {
    struct Struct_ov001_02164320* var0;
    unsigned char* var1;

    if (arg1 < 0 || arg1 >= 0x20) {
        return 0;
    }
    var0 = &arg0[arg1];
    switch (var0->unknown_0_) {
    case 4:
    case 5:
        var1 = var0->unknown_c_;
        if (var1 == NULL) return 0;
        func_0203db34(var1, arg2, arg3, arg4);
        return 1;
    case 0:
        var1 = var0->unknown_c_;
        if (var1 == NULL) return 0;
        func_0203db34(var1, arg2, arg3, arg4);
        return 1;
    case 1:
        var1 = var0->unknown_c_;
        if (var1 == NULL) return 0;
        func_0203db34(var1, arg2, arg3, arg4);
        return 1;
    case 2:
    case 6:
        var1 = var0->unknown_c_;
        if (var1 == NULL) return 0;
        func_0204085c((struct Struct_0203d028_16*)var1, arg2, arg3, arg4);
        func_02040b2c((struct Struct_0203e2c4_2*)var0->unknown_c_, arg3);
        return 1;
    }
    return 0;
}

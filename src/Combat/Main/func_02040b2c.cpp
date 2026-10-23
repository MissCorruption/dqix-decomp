#include <globaldefs.h>
#if defined(jpn)
enum { Enum_02040b2c_724 = 0x2c8 };
#else
enum { Enum_02040b2c_724 = 0x2d4 };
#endif

struct Struct_0203cda8;
extern "C" void func_0203cda8(struct Struct_0203cda8* arg0, int arg1);
extern "C" void func_0203db34(unsigned char* arg0, int arg1, int arg2, int arg3);

struct Struct_02040b2c { int unknown_0_, unknown_4_, unknown_8_; };

struct Struct_0203e2c4_2 {
    char unknown_0_[0x14];
    struct Struct_0203cda8* unknown_14_;
    unsigned char* unknown_18_;
    unsigned char* unknown_1c_;
};

// USA: func_02040b2c
extern "C" ARM void func_02040b2c(struct Struct_0203e2c4_2* arg0, int arg1) {
    struct Struct_0203cda8* var0;
    unsigned char* var1;

    var0 = arg0->unknown_14_;
    if (var0 != NULL) {
        func_0203cda8(var0, arg1);
        return;
    }
    var1 = arg0->unknown_18_;
    if (var1 != NULL) {
        struct Struct_02040b2c var2 = *(struct Struct_02040b2c*)(var1 + 0x50);
        func_0203db34(var1, var2.unknown_0_, arg1, var2.unknown_8_);
        var1 = arg0->unknown_18_;
        *(int*)(var1 + 0xb0) = arg1;
        return;
    }
    var1 = arg0->unknown_1c_;
    if (var1 == NULL) return;
    {
        struct Struct_02040b2c var3 = *(struct Struct_02040b2c*)(var1 + 0x50);
        func_0203db34(var1, var3.unknown_0_, arg1, var3.unknown_8_);
    }
    var1 = arg0->unknown_1c_;
    *(int*)(var1 + Enum_02040b2c_724) = arg1;
}

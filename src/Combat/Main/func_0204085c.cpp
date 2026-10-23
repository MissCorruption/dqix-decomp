#include <globaldefs.h>
#if defined(jpn)
enum { Enum_0204085c_724 = 0x2c8 };
#else
enum { Enum_0204085c_724 = 0x2d4 };
#endif

struct Struct_0203cda8;
extern "C" void func_0203cda8(struct Struct_0203cda8* arg0, int arg1);
extern "C" void func_0203db34(unsigned char* arg0, int arg1, int arg2, int arg3);

struct Struct_0203d028_16 {
    char unknown_0_[0x14];
    struct Struct_0203cda8* unknown_14_;
    unsigned char* unknown_18_;
    unsigned char* unknown_1c_;
};

// USA: func_0204085c
extern "C" ARM void func_0204085c(struct Struct_0203d028_16* arg0, int arg1, int arg2, int arg3) {
    struct Struct_0203cda8* var0;
    unsigned char* var1;
    var0 = arg0->unknown_14_;
    if (var0 != NULL) {
        *(int*)((char*)var0 + 0x10) = arg1;
        *(int*)((char*)var0 + 0x14) = arg2;
        *(int*)((char*)var0 + 0x18) = arg3;
        func_0203cda8(arg0->unknown_14_, arg2);
        return;
    }
    var1 = arg0->unknown_18_;
    if (var1 != NULL) {
        func_0203db34(var1, arg1, arg2, arg3);
        var1 = arg0->unknown_18_;
        *(int*)(var1 + 0xb0) = arg2;
        return;
    }
    var1 = arg0->unknown_1c_;
    if (var1 == NULL) {
        return;
    }
    func_0203db34(var1, arg1, arg2, arg3);
    var1 = arg0->unknown_1c_;
    *(int*)(var1 + Enum_0204085c_724) = arg2;
}

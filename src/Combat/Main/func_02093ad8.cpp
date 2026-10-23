#include <globaldefs.h>

struct Struct_02093b54 {
#if defined(jpn)
    char unknown1_0_[11];
#else
    char unknown_0_[48];
#endif
};

struct Struct_02093ad8 {
    Struct_02093b54 unknown_0_;
#if defined(jpn)
    unsigned char unknown_b_;
#endif
    short unknown_30_;
    signed char unknown_32_;
    unsigned char unknown_33_;
};

extern "C" void func_02093980(char* arg0);
extern "C" void func_02093b54(Struct_02093ad8* arg0, Struct_02093ad8* arg1);

// USA: func_02093ad8
extern "C" ARM void func_02093ad8(void* arg0, Struct_02093ad8* arg1, Struct_02093ad8* arg2, int arg3) {
    int var0;
    for (var0 = 0; var0 < 8; var0++) {
        func_02093980((char*)(arg2 + var0));
    }
    int var1;
    for (var1 = 0; var1 < arg3; var1++) {
        func_02093b54(arg2 + var1, arg1 + var1);
    }
    int var2;
    for (var2 = 0; var2 < 8; var2++) {
        func_02093980((char*)(arg1 + var2));
    }
}

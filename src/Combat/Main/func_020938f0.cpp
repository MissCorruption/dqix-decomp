#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif

#include "std_library_functions.h"

struct Struct_020938f0 {
    char unknown_0_[IS_JPN ? 0x100 : 0x340];
    int unknown_340_;
    int unknown_344_;
    char unknown_348_[IS_JPN ? 0x30 : 0x80];
    unsigned char unknown_3c8_0_ : 7;
    unsigned char unknown_3c8_7_ : 1;
    unsigned char unknown_3c9_0_ : 1;
    unsigned char unknown_3ca_;
    unsigned char unknown_3cb_;
    unsigned char unknown_3cc_;
    unsigned char unknown_3cd_;
};

extern "C" void func_02093980(char* arg0);

// USA: func_020938f0
extern "C" ARM void func_020938f0(char* arg0) {
    int var0;
    for (var0 = 0; var0 < 8; var0++) {
        func_02093980(arg0 + var0 * (IS_JPN ? 0x10 : 0x34));
        func_02093980(arg0 + (IS_JPN ? 0x80 : 0x1a0) + var0 * (IS_JPN ? 0x10 : 0x34));
    }
    struct Struct_020938f0* var1 = (struct Struct_020938f0*)arg0;
    var1->unknown_340_ = -1;
    var1->unknown_344_ = 0;
    memset(arg0 + (IS_JPN ? 0x108 : 0x348), 0, (IS_JPN ? 0x30 : 0x80));
    var1->unknown_3c8_0_ = 0;
    ((unsigned char*)arg0)[(IS_JPN ? 0x138 : 0x3c8)] |= 0x80;
    var1->unknown_3c9_0_ = 0;
    var1->unknown_3cb_ = var1->unknown_3ca_ = 0;
    var1->unknown_3cc_ = 0;
    var1->unknown_3cd_ = var1->unknown_3cc_ | 8;
}

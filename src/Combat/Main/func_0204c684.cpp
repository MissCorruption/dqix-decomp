#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif

#include "std_library_functions.h"

extern "C" void func_0204f0ec(char* arg0);
struct Struct_02020cb8_7;
extern "C" void func_0204acb0(struct Struct_02020cb8_7* arg0);

struct Struct_0204c684 {
    unsigned char unknown_0_0_ : 1;
    unsigned char unknown_0_1_ : 1;
#if defined(jpn)
    unsigned char unknown_0_3_ : 6;
#else
    unsigned char unknown_0_2_ : 1;
    unsigned char unknown_0_3_ : 5;
#endif
};

// USA: func_0204c684
extern "C" ARM void func_0204c684(char* arg0) {
    *(int*)(arg0 + 0x0) = 0;
    *(int*)(arg0 + 0x4) = 0;
    *(int*)(arg0 + 0x8) = 0;
    func_0204f0ec(arg0);

    *(int*)(arg0 + 0x9c) = 0;
    *(int*)(arg0 + 0xa0) = 0;
    *(int*)(arg0 + 0xa4) = 0;
    *(short*)(arg0 + 0xac) = 0;
    *(short*)(arg0 + 0xae) = 0;
    *(short*)(arg0 + 0xa8) = 0;
    *(short*)(arg0 + 0xaa) = 0;
    *(short*)(arg0 + 0xb0) = 4;
    *(short*)(arg0 + 0xb2) = 4;
    *(short*)(arg0 + 0xb4) = 0xa;
    *(short*)(arg0 + 0xb6) = 0xb;
    *(short*)(arg0 + 0xb8) = 0;
    *(short*)(arg0 + 0xba) = 0;
    *(short*)(arg0 + 0xbc) = 0;
    *(short*)(arg0 + 0xbe) = 0;
    *(short*)(arg0 + 0xc0) = 0;
    *(short*)(arg0 + 0xc2) = 0;
    *(unsigned char*)(arg0 + 0xc5) = 0;
    *(unsigned char*)(arg0 + 0xc4) = 0xff;
    *(unsigned char*)(arg0 + 0xc6) = 2;
    *(unsigned char*)(arg0 + 0xc7) = 0xa;

    func_0204acb0((struct Struct_02020cb8_7*)(arg0 + 0xc8));

    Struct_0204c684* var0 = (Struct_0204c684*)(arg0 + 0xd8);
    var0->unknown_0_0_ = 0;
    var0->unknown_0_3_ = 0;
    *(unsigned char*)(arg0 + 0xd9) = 0;
    *(unsigned char*)(arg0 + 0xda) = 0;

    var0->unknown_0_1_ = 1;
#if !defined(jpn)
    var0->unknown_0_2_ = 0;
#endif

    memset(arg0 + 0xdb, 0, 4);
}

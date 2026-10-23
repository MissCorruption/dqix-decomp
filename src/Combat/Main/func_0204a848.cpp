#include <globaldefs.h>
#include "std_library_functions.h"

void CleanInvalidateCacheRange(const void* addr, unsigned int size);

struct Struct_0204a848 {
    unsigned int   unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned char  unknown_a_;
    unsigned char  unknown_b_;
};

// USA: func_0204a848
extern "C" ARM int func_0204a848(Struct_0204a848* arg0, void (*arg1)(const void*, int, unsigned int), unsigned char* arg2, void*) {
    int var0;
    int var1;
    memcpy(&var1, arg2, 4);
    memcpy(&arg0->unknown_4_, arg2 + 4, 2);
    memcpy(&arg0->unknown_6_, arg2 + 6, 2);
    memcpy(&arg0->unknown_8_, arg2 + 8, 2);
    memcpy(&arg0->unknown_a_, arg2 + 0xa, 1);
    memcpy(&arg0->unknown_b_, arg2 + 0xb, 1);
    memcpy(&var0, arg2 + 0xc, 4);
    CleanInvalidateCacheRange(arg2 + 0x10, var0);
    arg1(arg2 + 0x10, arg0->unknown_0_, var0);
    return 0;
}

#include <globaldefs.h>
#include "std_library_functions.h"

typedef void (*Type_0204aa64)(void*, int, unsigned int);

struct Struct_0204aa64 {
    unsigned char  unknown_0_;
    unsigned char  unknown_1_;
    unsigned short unknown_2_;
};

void CleanInvalidateCacheRange(const void* addr, unsigned int size);

// USA: func_0204aa64
extern "C" ARM int func_0204aa64(Struct_0204aa64* arg0, Type_0204aa64 arg1, unsigned char* arg2, void* arg3) {
    int var0;
    int var1;
    char var2[3];
    memcpy(&var1, arg2, 4);
    memcpy(arg0, arg2 + 4, 1);
    memcpy(var2, arg2 + 5, 3);
    memcpy(&var0, arg2 + 8, 4);
    if (arg0->unknown_2_ == 0xffff) {
        CleanInvalidateCacheRange(arg2 + 0xc, var0);
        arg1(arg2 + 0xc, 0, var0);
    } else {
        int var3 = arg0->unknown_2_ & 0xff;
        int var4;
        for (var4 = 0; var4 < 16; var4++) {
            if (var3 & 1) {
                CleanInvalidateCacheRange(arg2 + 0xc + var4 * 32, 32);
                arg1(arg2 + 0xc + var4 * 32, var4 * 32, 32);
            }
            var3 = (var3 >> 1) & 0xff;
        }
    }
    return 0;
}
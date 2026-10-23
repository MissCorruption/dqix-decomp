#include <globaldefs.h>
#include "std_library_functions.h"
#if defined(jpn)
#include "Resource/MessageSystem.h"
extern "C" int func_02069430(void*, unsigned short);

// JPN: func_0206c730
extern "C" ARM unsigned short* func_0206c730(void* arg0, unsigned short arg1, unsigned short* arg2) {
    Struct_02021b84* var0 = static_cast<Struct_02021b84*>(arg0);
    if (!arg2) return NULL;
    if (!func_02069430(arg0, arg1)) return NULL;
    unsigned int var1 = 0;
    while (arg2) {
        if (*arg2 == arg1) return arg2;
        var1++;
        arg2++;
        if (var0->unknown_34_ < var1) break;
    }
    return NULL;
}
#else

struct Struct_0204254c {
    int unknown_0_;
    char unknown_4_;
    signed char unknown_5_0_ : 6;
    signed char unknown_5_6_ : 2;
    char unknown_6_[2];
};

extern "C" bool func_02044494(void* arg0, void* arg1);
extern "C" bool func_0206ac6c(void* arg0, void* arg1);
extern "C" int func_02001aec(unsigned char* arg0, unsigned char* arg1, int arg2);
extern "C" int func_0206abf8(void* arg0, void* arg1);
extern "C" struct Struct_0204254c* func_0204254c(int arg0, int arg1);

// USA: func_0206ac94
extern "C" ARM int func_0206ac94(void* arg0, unsigned short arg1, unsigned char* arg2) {
    unsigned int var0;
    unsigned char* var1 = arg2;
    if (!var1) {
        return 0;
    }
    if (!func_02044494(arg0, &arg1)) {
        return 0;
    }
    var0 = 0;
    for (;;) {
        if (!*var1) {
            break;
        }
        if (func_0206ac6c(arg0, var1)) {
            int var2;
            if (!func_02001aec((unsigned char*)&arg1, var1, 2)) {
                return (int)var1;
            }
            var2 = func_0206abf8(arg0, var1) * 2 + 2;
            var1 += var2;
            var0 += var2;
        } else {
            struct Struct_0204254c* var3;
            int var4 = 1;
            var3 = func_0204254c((int)var1, *(unsigned char*)((char*)arg0 + 0x19dc));
            if (var3) {
                var4 = var3->unknown_5_0_;
            }
            var1 += var4;
            var0 += var4;
            if (*(unsigned int*)((char*)arg0 + 0x68) >= var0) {
                continue;
            }
            break;
        }
    }
    return 0;
}

#endif

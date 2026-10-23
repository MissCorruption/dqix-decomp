#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

struct Struct_020de714_3;
extern "C" int func_020de7a4(Struct_020de714_3* arg0);

struct Struct_020de714;
struct Struct_020de7d0;
typedef void (*Type_020de714)(Struct_020de714*, Struct_020de7d0*);
extern "C" int func_020de7d0(Struct_020de714* arg0, Type_020de714 arg1);

struct Struct_020de5b0;
extern "C" int func_020de5b0(Struct_020de5b0* arg0);

extern "C" ARM int func_020de574(void* arg0, void* arg1);

struct Struct_020de888 {
    unsigned int unknown_0_0_ : 31;
    unsigned int unknown_3_7_ : 1;
};

struct Struct_020de888_2 {
    char unknown_0_[8];
    union {
        unsigned int unknown_0_;
        struct Struct_020de888 unknown1_0_;
    } unknown_8_;
    void* unknown_c_;
    void* unknown_10_;
};

// USA: func_020de888
extern "C" ARM int func_020de888(Struct_020de888_2* arg0, SafeAllocator* arg1, void* arg2, void* arg3) {
    int var0;
    unsigned int var1;
    Type_020de714 var2;

    if (arg1 == 0 || arg2 == 0 || arg3 == 0) {
        return 0;
    }
    if (arg1 != 0 && arg2 != 0) {
        memcpy(arg0, arg2, 0xc);
        var0 = func_020de7a4((Struct_020de714_3*)arg0);
        var1 = arg0->unknown_8_.unknown1_0_.unknown_0_0_;
        if (var0 != 0)
            arg0->unknown_c_ = arg1->Allocate(var0);
        else
            arg0->unknown_c_ = 0;
        arg0->unknown_10_ = (var1 != 0) ? arg1->Allocate(var1) : 0;
        if (arg0->unknown_c_ != 0) {
            memcpy(arg0->unknown_c_, (char*)arg2 + 0xc, var0);
        }
        if (arg0->unknown_10_ != 0) {
            memcpy(arg0->unknown_10_, (char*)arg2 + (func_020de7a4((Struct_020de714_3*)arg0) + 0xc), var1);
        }
        var2 = (Type_020de714)func_020de574;
        if (var2 != 0) {
            func_020de7d0((Struct_020de714*)arg0, var2);
        }
        arg0->unknown_8_.unknown_0_ = (arg0->unknown_8_.unknown_0_ & ~0x80000000u) | 0x80000000u;
    }
    return func_020de5b0((Struct_020de5b0*)arg0);
}

#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"

struct Struct_020a8e9c;
extern "C" int func_020a8f60(struct Struct_020a8e9c* arg0);

struct Struct_020a8e9c_2 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 19;
    unsigned int unknown_3_7_ : 1;
};

struct Struct_020a8e9c_3 {
    Struct_020a8e9c_2 unknown_0_;
    void* unknown_4_;
    void* unknown_8_;
};

// USA: func_020a8e9c
extern "C" ARM void func_020a8e9c(Struct_020a8e9c_3* arg0, SafeAllocator* arg1, void* arg2, unsigned int) {
    if (arg1 == 0 || arg2 == 0) return;
    memcpy(arg0, arg2, 4);
    int var0 = func_020a8f60((struct Struct_020a8e9c*)arg0);
    unsigned int var1 = arg0->unknown_0_.unknown_1_4_;
    if (var0 != 0) arg0->unknown_4_ = arg1->Allocate(var0); else arg0->unknown_4_ = 0;
    if (var1 != 0) arg0->unknown_8_ = arg1->Allocate(var1); else arg0->unknown_8_ = 0;
    if (arg0->unknown_4_ != 0) {
        memcpy(arg0->unknown_4_, (char*)arg2 + 4, var0);
    }
    if (arg0->unknown_8_ != 0) {
        memcpy(arg0->unknown_8_, (char*)arg2 + (func_020a8f60((struct Struct_020a8e9c*)arg0) + 4), var1);
    }
    arg0->unknown_0_.unknown_3_7_ = 1;
}

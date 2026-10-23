#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

struct Struct_020e53bc_3;
extern "C" unsigned int func_020e544c(Struct_020e53bc_3* arg0);

struct Struct_020e53bc;
struct Struct_020e545c;
typedef void (*Type_020e53bc)(Struct_020e53bc*, Struct_020e545c*);
extern "C" int func_020e545c(Struct_020e53bc* arg0, Type_020e53bc arg1);

struct Struct_020e5204;
extern "C" void func_020e5204(void* arg0, Struct_020e5204* arg1);

struct Struct_020e5604 {
    unsigned int unknown_0_;
    void* unknown_4_;
    void* unknown_8_;
};

// USA: func_020e5604
extern "C" ARM int func_020e5604(struct Struct_020e5604* arg0, SafeAllocator* arg1, unsigned char* arg2, int arg3) {
    unsigned int var0;
    unsigned int var1;
    if (!(arg1 != 0 && arg2 != 0 && arg3 != 0)) {
        return 0;
    }
    if (!(arg1 != 0 && arg2 != 0)) {
        return 0;
    }
    memcpy(arg0, arg2, 4);
    var0 = func_020e544c((Struct_020e53bc_3*)arg0);
    var1 = (arg0->unknown_0_ << 1) >> 13;
    if (var0)
        arg0->unknown_4_ = arg1->Allocate(var0);
    else
        arg0->unknown_4_ = (void*)0;
    arg0->unknown_8_ = var1 ? arg1->Allocate(var1) : (void*)0;
    if (arg0->unknown_4_) {
        memcpy(arg0->unknown_4_, arg2 + 4, var0);
    }
    if (arg0->unknown_8_) {
        memcpy(arg0->unknown_8_, arg2 + (func_020e544c((Struct_020e53bc_3*)arg0) + 4), var1);
    }
    if ((void*)func_020e5204 != 0) {
        func_020e545c((Struct_020e53bc*)arg0,
            (Type_020e53bc)func_020e5204);
    }
    arg0->unknown_0_ = (arg0->unknown_0_ & ~0x80000000) | 0x80000000;
    return 1;
}

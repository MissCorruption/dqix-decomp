#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"

struct Struct_02070a30;
extern "C" int func_02070af4(struct Struct_02070a30*);

struct Struct_020709ec {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 19;
    unsigned int unknown_3_7_  : 1;
    void* unknown_4_;
    void* unknown_8_;
};

// USA: func_02070a30
extern "C" ARM void func_02070a30(struct Struct_020709ec* arg0, SafeAllocator* arg1, void* arg2, unsigned int arg3) {
    if (arg1 == NULL || arg2 == NULL) return;
    memcpy(arg0, arg2, 4);
    int var0 = func_02070af4((struct Struct_02070a30*)arg0);
    int var1 = arg0->unknown_1_4_;
    if (var0 != 0) arg0->unknown_4_ = arg1->Allocate(var0);
    else arg0->unknown_4_ = NULL;
    if (var1 != 0) arg0->unknown_8_ = arg1->Allocate(var1);
    else arg0->unknown_8_ = NULL;
    if (arg0->unknown_4_) memcpy(arg0->unknown_4_, (char*)arg2 + 4, var0);
    if (arg0->unknown_8_) memcpy(arg0->unknown_8_, (char*)arg2 + (func_02070af4((struct Struct_02070a30*)arg0) + 4), var1);
    arg0->unknown_3_7_ = 1;
}

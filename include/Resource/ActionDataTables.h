#pragma once

#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

struct Struct_02079808;
struct Struct_02079bac;

struct Struct_02079a58 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 19;
    unsigned int unknown_3_7_ : 1;
    void* unknown_4_;
    void* unknown_8_;
};

struct Struct_02079bac_2 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 19;
    unsigned int unknown_3_7_ : 1;
    Struct_02079bac* unknown_4_;
    unsigned char* unknown_8_;
};

typedef int (*Type_02079900)(void*, Struct_02079808*);
typedef void (*Type_02079bac)(Struct_02079bac_2*, void*);
typedef void (*Type_02079bac_2)(Struct_02079bac_2*);

extern "C" int func_02079a58(Struct_02079a58* arg0, SafeAllocator* arg1, void* arg2,
                            Type_02079900 arg3,
                            void (*arg4)(Struct_02079a58*)
#if !defined(jpn)
                            , SafeAllocator* arg5
#endif
);

extern "C" int func_02079bac(Struct_02079bac_2* arg0, SafeAllocator* arg1, void* arg2,
                            Type_02079bac arg3, Type_02079bac_2 arg4
#if !defined(jpn)
                            , SafeAllocator* arg5
#endif
);

extern "C" int func_02079808(void* arg0, Struct_02079808* arg1);

struct Struct_02108e10 {
    Struct_02079a58 unknown_0_;
    Struct_02079a58 unknown_c_;
    Struct_02079bac_2 unknown_18_;
    Struct_02079bac_2 unknown_24_;
};

extern "C" Struct_02108e10* func_020797dc();

extern "C" void func_02079900(Struct_02108e10* arg0, SafeAllocator* arg1);
extern "C" void func_02079cf8(Struct_02108e10* arg0, SafeAllocator* arg1, SafeAllocator* arg2);


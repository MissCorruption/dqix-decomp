#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

struct Struct_ov023_021f5448 { unsigned int unknown_0_0_ : 12; };
extern "C" unsigned int func_ov023_021f5524(struct Struct_ov023_021f5448* arg0);

struct Struct_ov023_021f5448_2 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 19;
    unsigned int unknown_3_7_ : 1;
    void* unknown_4_;
    void* unknown_8_;
};

// USA: func_ov023_021f5448
extern "C" ARM int func_ov023_021f5448(struct Struct_ov023_021f5448_2* arg0, SafeAllocator* arg1, void* arg2, int arg3) {
    if (arg1 == 0 || arg2 == 0 || arg3 == 0) {
        return 0;
    }

    if (arg1 != 0 && arg2 != 0) {
        memcpy(arg0, arg2, 4);

        unsigned int var0 = func_ov023_021f5524((struct Struct_ov023_021f5448*)arg0);
        unsigned int var1 = arg0->unknown_1_4_;

        if (var0 != 0) {
            arg0->unknown_4_ = arg1->Allocate(var0);
        } else {
            arg0->unknown_4_ = 0;
        }
        if (var1 != 0) {
            arg0->unknown_8_ = arg1->Allocate(var1);
        } else {
            arg0->unknown_8_ = 0;
        }

        if (arg0->unknown_4_ != 0) {
            memcpy(arg0->unknown_4_, (char*)arg2 + 4, var0);
        }
        if (arg0->unknown_8_ != 0) {
            unsigned int var2 = func_ov023_021f5524((struct Struct_ov023_021f5448*)arg0) + 4;
            memcpy(arg0->unknown_8_, (char*)arg2 + var2, var1);
        }

        arg0->unknown_3_7_ = 1;
    }

    return 1;
}

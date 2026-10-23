#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

extern "C" bool func_020556dc(void** arg0, SafeAllocator* arg1);
struct Struct_02055660_2;
extern "C" void func_020556cc(struct Struct_02055660_2* arg0, int arg1, int arg2, int arg3);
extern "C" void func_02056d80(void* arg0);

struct Struct_02055660 {
    void* unknown_0_;
    void* unknown_4_;
    int unknown_8_;
    int unknown_c_;
};

// USA: func_02055660
extern "C" ARM int func_02055660(struct Struct_02055660* arg0, int arg1, int arg2, int arg3) {
    if (arg1 == 0) {
        return 0;
    }
    if (arg2 == 0) {
        return 0;
    }
    if (arg3 == 0) {
        return 0;
    }
    arg0->unknown_0_ = (void*)arg3;
    arg0->unknown_8_ = arg2;
    arg0->unknown_c_ = arg1;
    if (func_020556dc(&arg0->unknown_4_, (SafeAllocator*)arg0->unknown_0_)) {
        func_020556cc((struct Struct_02055660_2*)arg0->unknown_4_, arg0->unknown_c_, arg0->unknown_8_, (int)arg0->unknown_0_);
        func_02056d80(arg0->unknown_4_);
    }
    return 1;
}

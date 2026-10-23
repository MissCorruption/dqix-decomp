#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_02055660_2;
extern "C" bool func_020556dc(void** arg0, SafeAllocator* arg1);
extern "C" void func_020556cc(struct Struct_02055660_2* arg0, int arg1, int arg2, int arg3);
extern "C" void func_02056d80(void* arg0);

struct Struct_02055718 {
    int unknown_0_;
    void* unknown_4_;
    int unknown_8_;
    int unknown_c_;
};

// USA: func_02055718
extern "C" ARM int func_02055718(Struct_02055718* arg0, int arg1, int arg2) {
    if (arg1 == 0) return 0;
    if (arg2 == 0) return 0;
    arg0->unknown_0_ = arg2;
    arg0->unknown_8_ = arg1;
    if (func_020556dc(&arg0->unknown_4_, (SafeAllocator*)arg0->unknown_0_)) {
        func_020556cc((struct Struct_02055660_2*)arg0->unknown_4_, arg0->unknown_c_, arg0->unknown_8_, arg0->unknown_0_);
        func_02056d80(arg0->unknown_4_);
    }
    return 1;
}

#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"

extern "C" char* func_020da150(SafeAllocator* arg0, const char* arg1);

struct Struct_020def98 {
    void* unknown_0_;
    void* unknown_4_;
    unsigned char unknown_8_[0x18];
};
struct Struct_020df618 {
    unsigned short unknown_0_0_ : 15;
    unsigned short unknown_1_7_ : 1;
};

// USA: func_020df618
extern "C" ARM int func_020df618(SafeAllocator* arg0, void* arg1, Struct_020def98* arg2, void** arg3, int arg4, Struct_020def98* arg5) {
    memcpy(arg2, arg5, sizeof(Struct_020def98));
    arg2->unknown_4_ = (arg5->unknown_4_ != NULL) ? func_020da150(arg0, (const char*)arg5->unknown_4_) : NULL;
    arg2->unknown_0_ = NULL;
    if (arg5->unknown_0_ != NULL && *arg3 != NULL) {
        arg2->unknown_0_ = *arg3;
        *arg3 = (char*)arg2->unknown_0_ + 0x20;
        memcpy(arg2->unknown_0_, arg5->unknown_0_, 0x20);
        ((Struct_020df618*)((char*)arg1 + 2))->unknown_0_0_++;
    }
    return 1;
}

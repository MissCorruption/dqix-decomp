#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_020724f4 {
    void* unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};

// USA: func_020724f4
extern "C" ARM void func_020724f4(Struct_020724f4* arg0, SafeAllocator* arg1, unsigned int arg2) {
    if (arg0->unknown_0_ != NULL) {
        return;
    }
    arg0->unknown_6_ = 0;
    arg0->unknown_4_ = arg2;
    arg0->unknown_0_ = arg1->Allocate(arg2 * 0x2c);
    for (unsigned short var0 = 0; var0 < arg2; var0++) {
        *(short*)((char*)arg0->unknown_0_ + var0 * 0x2c) = -1;
    }
}

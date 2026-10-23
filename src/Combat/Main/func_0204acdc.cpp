#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

struct Struct_0204acdc {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned char  unknown_4_;
    unsigned char  unknown_5_;
    unsigned short unknown_6_;
    unsigned int   unknown_8_;
    void*          unknown_c_;
};

// USA: func_0204acdc
extern "C" ARM int func_0204acdc(Struct_0204acdc* arg0, void* arg1, unsigned char* arg2, SafeAllocator* arg3) {
    int var0;
    memcpy(&var0, arg2, 4);
    memcpy(&arg0->unknown_0_, arg2 + 4, 2);
    memcpy(&arg0->unknown_2_, arg2 + 6, 2);
    memcpy(&arg0->unknown_4_, arg2 + 8, 1);
    memcpy(&arg0->unknown_5_, arg2 + 9, 1);
    memcpy(&arg0->unknown_6_, arg2 + 0xa, 2);
    memcpy(&arg0->unknown_8_, arg2 + 0xc, 4);
    void* var1 = arg3->Allocate(arg0->unknown_8_);
    arg0->unknown_c_ = var1;
    memcpy(var1, arg2 + 0x10, arg0->unknown_8_);
    return 0;
}

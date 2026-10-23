#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_02071c64 {
    void* unknown_0_;
    void* unknown_4_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
};

extern "C" void func_02071b38(void* arg0);

// USA: func_02071c64
extern "C" ARM void func_02071c64(struct Struct_02071c64* arg0, void* arg1, unsigned int arg2) {
    if (arg0->unknown_4_ != 0) return;
    arg0->unknown_a_ = 0;
    arg0->unknown_8_ = arg2;
    void* var0 = ((SafeAllocator*)arg1)->Allocate(arg2 << 5);
    arg0->unknown_4_ = var0;
    arg0->unknown_0_ = var0;
    unsigned short var1;
    for (var1 = 0; var1 < arg2; var1++) {
        func_02071b38((char*)arg0->unknown_4_ + var1 * 0x20);
    }
}

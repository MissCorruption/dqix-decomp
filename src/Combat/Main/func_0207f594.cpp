#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_0207f12c {
    void* unknown_0_;   // 0x0
    short unknown_4_;       // 0x4
    short unknown_6_;     // 0x6
};

// USA: func_0207f594
extern "C" ARM void func_0207f594(struct Struct_0207f12c* arg0, SafeAllocator* arg1, int arg2) {
    if (arg1 == NULL) return;
    if (arg2 <= 0) return;
    arg0->unknown_4_ = 0;
    arg0->unknown_6_ = arg2;
    arg0->unknown_0_ = arg1->Allocate(arg2 * 0x30);
}

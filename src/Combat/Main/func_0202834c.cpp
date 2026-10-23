#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_0201a300_8 {
    char unknown_0_[0x24];
    unsigned char unknown_24_;  // 0x24
    unsigned char unknown_25_;     // 0x25
    char unknown_26_[2];            // 0x26,0x27
    void* unknown_28_;            // 0x28
};

// USA: func_0202834c
extern "C" ARM void func_0202834c(struct Struct_0201a300_8* arg0, SafeAllocator* arg1, int arg2) {
    arg0->unknown_28_ = arg1->Allocate(arg2 * 4);
    arg0->unknown_25_ = 0;
    arg0->unknown_24_ = arg2;
}

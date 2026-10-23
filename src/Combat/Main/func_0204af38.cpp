#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_0204af38 {
    char unknown_0_[0x10];
    void* unknown_10_;        // 0x10
    char unknown_14_[0xa];     // 0x14
    unsigned char unknown_1e_; // 0x1e
};

// USA: func_0204af38
extern "C" ARM void func_0204af38(struct Struct_0204af38* arg0, int arg1, SafeAllocator* arg2) {
    if (arg2 == NULL) return;
    arg0->unknown_10_ = arg2->Allocate(arg1 * 0x10);
    arg0->unknown_1e_ = arg1;
}

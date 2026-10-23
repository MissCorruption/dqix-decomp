#include <globaldefs.h>
#include "NitroSDK/Memory/SignedAllocator.h"

extern "C" void func_020bbef8(int arg0);
extern SignedAllocatorList data_0210fca8;

struct Struct_020bcc7c {
    char unknown_0_[0x24];
    int unknown_24_;        /* 0x24 */
    char unknown_28_[0x18];
    int unknown_40_;        /* 0x40 */
};

// USA: func_020bccf0
extern "C" ARM void func_020bccf0(struct Struct_020bcc7c* arg0) {
    func_020bbef8(arg0->unknown_40_);
    data_0210fca8.Remove((SignedAllocatorHeader*)arg0);
    arg0->unknown_24_ &= ~1;
}

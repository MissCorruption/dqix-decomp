#include <globaldefs.h>
#include "NitroSDK/Memory/HMRFAllocator.h"

extern "C" int func_020bdc24(void* arg0);

struct Struct_0203a974_2 {
    HMRFAllocator* unknown_0_;   /* 0x00 */
    SignedAllocatorList unknown_4_;   /* 0x04 */
};

// USA: func_020bdac0
extern "C" ARM int func_020bdac0(struct Struct_0203a974_2* arg0) {
    if (!arg0->unknown_0_->SaveCurrentState(arg0->unknown_4_.numElements)) return -1;
    if (func_020bdc24(arg0)) return arg0->unknown_4_.numElements - 1;
    arg0->unknown_0_->RestoreState(0);
    return -1;
}

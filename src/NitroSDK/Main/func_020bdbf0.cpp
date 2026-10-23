#include <globaldefs.h>
#include "NitroSDK/Memory/HMRFAllocator.h"

extern "C" int func_020bdc24(void* arg0);

struct Struct_020bd914 {
    HMRFAllocator* unknown_0_;   /* 0x00 */
    SignedAllocatorList unknown_4_;   /* 0x04 */
};

// USA: func_020bdbf0
extern "C" ARM int func_020bdbf0(struct Struct_020bd914* arg0, HMRFAllocator* arg1) {
    arg0->unknown_4_.Initialize(0xc);
    arg0->unknown_0_ = arg1;
    return func_020bdc24(arg0) != 0;
}

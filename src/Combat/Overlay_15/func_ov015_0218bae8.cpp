#include <globaldefs.h>

struct Struct_ov015_0218bae8 { void* unknown_0_; int unknown_4_; int unknown_8_; };

#pragma optimize_for_size off
// USA: func_ov015_0218bae8
extern "C" ARM void* func_ov015_0218bae8(struct Struct_ov015_0218bae8* arg0, int arg1) {
    if (arg1 < 0)
        goto ret0;
    if (arg0->unknown_8_ > arg1)
        goto good;
ret0:
    return NULL;
good:
    return (char*)arg0->unknown_0_ + arg1 * 0xc;
}

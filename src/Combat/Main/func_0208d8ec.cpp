#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_0208d550_2 {
    void* unknown_0_;      /* 0x00 */
    short unknown_4_;        /* 0x04 */
    short unknown_6_;     /* 0x06 */
};

// USA: func_0208d8ec
extern "C" ARM void func_0208d8ec(struct Struct_0208d550_2* arg0, SafeAllocator* arg1, int arg2) {
    if (arg1 == NULL) return;
    if (arg2 <= 0) return;
    arg0->unknown_4_ = 0;
    arg0->unknown_6_ = arg2;
    arg0->unknown_0_ = arg1->Allocate(arg2 * 0x18);
}

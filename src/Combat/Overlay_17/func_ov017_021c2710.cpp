#include <globaldefs.h>
#include "NitroSDK/Memory/AllocatorUnion.h"

extern AllocatorUnion data_02114e20;
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);

// USA: func_ov017_021c2710
extern "C" ARM void func_ov017_021c2710(unsigned char* arg0) {
    void* var0 = *(void**)(arg0 + 8);
    if (var0 != NULL) {
        func_02012da4(&data_02114e20, var0);
        *(void**)(arg0 + 8) = NULL;
    }
    arg0[1] = 1;
}

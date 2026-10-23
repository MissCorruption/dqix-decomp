#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

extern "C" void func_02000b9c(unsigned int);

// USA: func_ov031_0220aa68
extern "C" ARM void func_ov031_0220aa68(unsigned char arg0) {
    func_02000b9c(0x2000c44);
    void* var0 = *(void**)((char*)data_02111304.activeContext + 0xa4);
    if (var0) {
        *(unsigned char*)((char*)var0 + 9) = arg0;
    }
}

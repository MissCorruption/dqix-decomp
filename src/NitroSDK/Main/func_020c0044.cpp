#include <globaldefs.h>

extern "C" int func_020bd7c4(unsigned int arg0, void* arg1, int arg2, int arg3);

#include "NitroSDK/Filesystem/NitroVM.h"
bool NitroVM_PrepareReadFileByID(NitroVM* vm, NitroFileAccessor accessor);
extern "C" NitroFileAccessor func_020bd88c(void);

extern "C" int func_020bd774(unsigned int arg0);

struct Struct_020c0044 { char unknown_0_[0xa4]; int unknown_a4_; };

// USA: func_020c0044
extern "C" ARM int func_020c0044(struct Struct_020c0044* arg0, unsigned int arg1) {
    if (func_020bd7c4(arg1, (char*)arg0 + 0xa8, 0x40, 0) != 0x40) {
        return 0;
    }
    if (NitroVM_PrepareReadFileByID((NitroVM*)((char*)arg0 + 0x5c), func_020bd88c()) == 0) {
        return 0;
    }
    arg0->unknown_a4_ = func_020bd774(arg1);
    return 1;
}

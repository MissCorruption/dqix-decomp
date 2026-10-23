#include <globaldefs.h>
#include "NitroSDK/Filesystem/CardReadManager.h"
#include "NitroSDK/Filesystem/LowNitroHandle.h"

extern "C" void func_ov031_0223b604(NitroHandle* arg0);

// USA: func_ov031_0223b5c4
extern "C" ARM int func_ov031_0223b5c4(NitroHandle* arg0, void* arg1, unsigned int arg2, unsigned int arg3) {
    LoadDataFromCartridgeToMemory((unsigned int)-1, arg2 + *(unsigned int*)((char*)arg0 + 0x28), arg1, arg3,
        func_ov031_0223b604, arg0, 1);
    return 6;
}

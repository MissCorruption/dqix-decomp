#include <globaldefs.h>
#include "NitroSDK/IPC.h"

extern "C" void func_020c9890(int unused, unsigned int code);

extern short data_02111668;

// USA: func_020c983c
extern "C" ARM void func_020c983c(void) {
    if (*(unsigned short*)((char*)&data_02111668 + 2) != 0) return;
    *(unsigned short*)((char*)&data_02111668 + 2) = 1;
    InitializeInterProcessorCommunication();
    while (IsIPCCommandHandlerRegistered(0xc, IPCSide_Arm7) == 0) {
    }
    SetArm9IPCCommandHandler(0xc, (IPCCommandHandler)func_020c9890);
}

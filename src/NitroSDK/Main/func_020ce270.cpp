#include <globaldefs.h>
#include "NitroSDK/IPC.h"

void InitializeInterProcessorCommunication(void);
bool IsIPCCommandHandlerRegistered(int command, IPCSide side);
void SetArm9IPCCommandHandler(int command, IPCCommandHandler handler);
extern "C" void WaitByLoop(int);
extern "C" void func_020ce308(unsigned int, unsigned int, unsigned int);

struct Struct_021117ec_3 {
    unsigned short unknown_0_;
    short unknown_2_;
    int unknown_4_;
    int unknown_8_;
    char unknown_c_[0x1c - 0xc];
    int unknown_1c_;
    int unknown_20_;
};

extern struct Struct_021117ec_3 data_021117ec;

// USA: func_020ce270
extern "C" ARM void func_020ce270(void) {
    if (data_021117ec.unknown_0_ != 0) return;
    data_021117ec.unknown_0_ = 1;
    data_021117ec.unknown_1c_ = 0;
    data_021117ec.unknown_20_ = 0;
    InitializeInterProcessorCommunication();
    if (IsIPCCommandHandlerRegistered(8, IPCSide_Arm7) == 0) {
        do {
            WaitByLoop(0x64);
        } while (IsIPCCommandHandlerRegistered(8, IPCSide_Arm7) == 0);
    }
    SetArm9IPCCommandHandler(8, (IPCCommandHandler)func_020ce308);
    int var0 = *(int*)0x27ffc3c;
    data_021117ec.unknown_8_ = var0;
    data_021117ec.unknown_4_ = var0;
}

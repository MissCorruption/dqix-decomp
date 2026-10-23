#include <globaldefs.h>
#include "NitroSDK/GamecardBusOwnership.h"
#include "NitroSDK/Interrupts.h"

extern "C" void WaitByLoop(int);
unsigned short GetLockOwner(GamecardBusLock* lock);

struct Struct_020d14e4 {
    int unknown_0_;
    unsigned int unknown_4_;
};

// USA: func_020d14e4
extern "C" ARM void func_020d14e4(unsigned short arg0, Struct_020d14e4* arg1) {
    for (;;) {
        arg1->unknown_4_ = DisableIRQInterrupts();
        int var0 = GetLockOwner((GamecardBusLock*)0x027fffe8) & 0x40;
        arg1->unknown_0_ = var0;
        if (var0) return;
        if (!TryAcquireGBABus(arg0)) return;
        SetIRQInterruptState(arg1->unknown_4_);
        WaitByLoop(1);
    }
}

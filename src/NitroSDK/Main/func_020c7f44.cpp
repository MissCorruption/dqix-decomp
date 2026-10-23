#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"
#include "NitroSDK/Interrupts.h"

struct Struct_020c7f44
{
    BlockedContextList unknown_0_;
    BlockedContextList unknown_8_;
    void** unknown_10_;
    int unknown_14_;
    int unknown_18_;
    int unknown_1c_;
};

// USA: func_020c7f44
extern "C" ARM int func_020c7f44(Struct_020c7f44* arg0, void* arg1, int arg2)
{
    int var0 = DisableIRQInterrupts();

    int var1;
    if ((var1 = arg0->unknown_14_) <= arg0->unknown_1c_)
    {
        do
        {
            if (!(arg2 & 1))
            {
                SetIRQInterruptState(var0);
                return false;
            }
            BlockCurrentContext(&arg0->unknown_0_);
        } while ((var1 = arg0->unknown_14_) <= arg0->unknown_1c_);
    }

    arg0->unknown_18_ = (arg0->unknown_18_ + var1 - 1) % var1;
    arg0->unknown_10_[arg0->unknown_18_] = arg1;
    arg0->unknown_1c_++;

    UnblockContexts(&arg0->unknown_8_);

    SetIRQInterruptState(var0);
    return true;
}

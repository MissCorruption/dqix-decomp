#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

extern ProcessorContext* data_02111308;
extern unsigned int data_0211155c[];
extern "C" char data_027e0000[];
extern "C" void SDK_IRQ_STACKSIZE(void);
extern "C" void SDK_SYS_STACKSIZE(void);

// USA: func_020c745c
extern "C" ARM void func_020c745c()
{
    unsigned int stackTop;

    if (data_021112e0.hasSetupPrimaryContext)
    {
        return;
    }
    data_021112e0.hasSetupPrimaryContext = true;

    data_021112e0.ppActiveContext = &data_02111308;

    data_021112e0.contextB.priority = 0x10;
    data_021112e0.contextB.uniqueID = 0;
    data_021112e0.contextB.blockState = CONTEXT_STATE_READY;
    data_021112e0.contextB.pNext = NULL;
    data_021112e0.contextB.unknown_74 = 0;

    data_021112e0.substruct_24.firstContext = &data_021113d4;
    data_021112e0.substruct_24.activeContext = &data_021113d4;

    stackTop = (long)SDK_SYS_STACKSIZE <= 0
        ? 0x027e0080 - (long)SDK_SYS_STACKSIZE
        : (unsigned long)data_027e0000 + 0x3f80 - (long)SDK_IRQ_STACKSIZE - (long)SDK_SYS_STACKSIZE;

    data_021112e0.contextB.stackBottom = (unsigned long)data_027e0000 + 0x3f80 - (long)SDK_IRQ_STACKSIZE;
    data_021112e0.contextB.stackTop = stackTop;
    data_021112e0.contextB.stackUnknownTopSubspaceSize = 0;

    *(unsigned int*)(data_021112e0.contextB.stackBottom - sizeof(unsigned int)) = STACK_BOTTOM_MAGIC;
    *(unsigned int*)data_021112e0.contextB.stackTop = STACK_TOP_MAGIC;

    data_021112e0.contextB.contextsAwaitingThisCompletion.first =
        data_021112e0.contextB.contextsAwaitingThisCompletion.last = NULL;

    data_021112e0.substruct_24.unknown_0 = 0;
    data_021112e0.substruct_24.unknown_2 = 0;

    *(Struct_02111304**)0x027fffa0 = &data_02111304;

    SetSwitchContextProcB(NULL);

    PopulateContext(&data_02111314, (unsigned int)InterruptWaitLoopFunction, 0,
        (unsigned int)data_0211155c, 0xc8, 0x1f);
    data_021112e0.contextA.priority = 0x20;
    data_021112e0.contextA.blockState = CONTEXT_STATE_READY;
}

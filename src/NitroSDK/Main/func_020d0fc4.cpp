#include <globaldefs.h>
#include "Filesystem/CardReadManager.h"
#include "System/IPC.h"
#include "System/Cache.h"
#include "System/Interrupts.h"

#define READ_MANAGER_FLAG_INIT_REQUEST_SENT 1
#define IPC_COMMAND_CARD 11
#define CARD_REQUEST_INIT 0
#define CARD_RESULT_SUCCESS 0
#define CARD_RESULT_TIMEOUT 4

extern "C" void func_020c976c(unsigned long cycles);

static inline void SendToArm7(unsigned long data)
{
    while (SendCommandToArm7(IPC_COMMAND_CARD, data, true) < 0)
    {
    }
}

// USA: func_020d0fc4
extern "C" ARM int func_020d0fc4(CardReadManager* manager, int request, int retries)
{
    if (!(manager->flags & (1 << READ_MANAGER_FLAG_INIT_REQUEST_SENT)))
    {
        manager->flags |= 1 << READ_MANAGER_FLAG_INIT_REQUEST_SENT;
        while (!IsIPCCommandHandlerRegistered(IPC_COMMAND_CARD, IPCSide_Arm7))
        {
            func_020c976c(100);
        }
        func_020d0fc4(manager, CARD_REQUEST_INIT, 1);
    }

    CleanInvalidateCacheRange(manager->pSharedData, sizeof(Arm7CardReadData));
    DrainWriteBuffer();

    do
    {
        manager->unknown_4 = request;
        manager->flags |= 1 << READ_MANAGER_FLAG_AWAITING_ARM7_ACTION;
        SendToArm7(request);

        switch (request)
        {
        case CARD_REQUEST_INIT:
            SendToArm7((unsigned long)manager->pSharedData);
            break;
        }

        {
            int priorState = DisableIRQInterrupts();
            while (manager->flags & (1 << READ_MANAGER_FLAG_AWAITING_ARM7_ACTION))
            {
                BlockCurrentContext(NULL);
            }
            SetIRQInterruptState(priorState);
        }
        InvalidateDataCacheRange(manager->pSharedData, sizeof(Arm7CardReadData));
    } while (manager->pSharedData->unknown_0 == CARD_RESULT_TIMEOUT && --retries > 0);

    return manager->pSharedData->unknown_0 == CARD_RESULT_SUCCESS;
}

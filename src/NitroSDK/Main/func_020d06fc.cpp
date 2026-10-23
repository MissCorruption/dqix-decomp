#include <globaldefs.h>

#include "Filesystem/BackupDevice.h"
#include "NitroSDK/Filesystem/FSInnerDefs.h"
#include "NitroSDK/Interrupts.h"
#include "NitroSDK/ProcessorContext.h"

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

extern "C" void func_02000b9c(unsigned int);
extern "C" void func_020c9be0(void);
extern "C" void func_020d0fc4(CardReadManager* arg0, int arg1, int arg2);

// USA: func_020d06fc
extern "C" ARM int func_020d06fc(void* arg0) {
    CardReadManager* var0 = &data_021118e0;
    int var1;
    int var2;
    NitroHandle* var3;
    CardReadManager::CompletionCallback var4;

    func_02000b9c(0x2000bc4);
    if (arg0 == NULL) {
        func_020c9be0();
    }

    VerifyCardReadManagerInitialized();

    var1 = DisableIRQInterrupts();
    if (var0->flags & (1 << READ_MANAGER_FLAG_HARDWARE_READ_IN_PROGRESS)) {
        do {
            BlockCurrentContext(&var0->ongoingReadBlock);
        } while (var0->flags & (1 << READ_MANAGER_FLAG_HARDWARE_READ_IN_PROGRESS));
    }
    var0->flags |= (1 << READ_MANAGER_FLAG_HARDWARE_READ_IN_PROGRESS);
    var0->onComplete = NULL;
    var0->handle = NULL;
    SetIRQInterruptState(var1);

    func_020d0078((unsigned int) arg0);

    data_021118e0.currentTaskExecutionContext = data_02111304.activeContext;

    func_020d0fc4(var0, 2, 1);

    var0->pSharedData->unknown_4[2] = 0;
    var0->pSharedData->unknown_4[3] = (int)&var0->unknown[0];
    var0->pSharedData->unknown_4[4] = 1;

    func_020d0fc4(var0, 6, 1);

    var4 = var0->onComplete;
    var3 = var0->handle;

    var2 = DisableIRQInterrupts();
    var0->flags &= ~((1 << READ_MANAGER_FLAG_HARDWARE_READ_IN_PROGRESS) | (1 << READ_MANAGER_FLAG_CONTEXT_HAS_TASK_PENDING) | (1 << CARTRIDGE_READ_CONTEXT_FLAG_6));
    UnblockContexts(&var0->ongoingReadBlock);
    if (var0->flags & (1 << CARTRIDGE_READ_CONTEXT_FLAG_4)) {
        MarkContextReadyAndSwitch(&var0->cartridgeReadContext);
    }
    SetIRQInterruptState(var2);

    if (var4 != NULL) {
        var4(var3);
    }

    return (var0->pSharedData->unknown_0 == 0) ? 1 : 0;
}

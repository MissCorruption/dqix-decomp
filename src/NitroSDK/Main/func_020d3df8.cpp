#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"
#include "NitroSDK/Cache.h"
#include "NitroSDK/IPC.h"
#include "NitroSDK/ProcessorContext.h"

typedef void (*WMCallbackFunc)(void*);

enum { WM_FIFO_BUFFER_WORDS = 64 };

enum WMErrCode020d3df8 {
    WM_ERRCODE_SUCCESS = 0,
    WM_ERRCODE_FAILED = 1,
    WM_ERRCODE_OPERATING = 2,
    WM_ERRCODE_ILLEGAL_STATE = 3,
    WM_ERRCODE_WM_DISABLE = 4,
    WM_ERRCODE_NO_KEYSET = 5,
    WM_ERRCODE_NO_DATASET = 5,
    WM_ERRCODE_INVALID_PARAM = 6,
    WM_ERRCODE_NO_CHILD = 7,
    WM_ERRCODE_FIFO_ERROR = 8,
    WM_ERRCODE_TIMEOUT = 9,
    WM_ERRCODE_SEND_QUEUE_FULL = 10,
    WM_ERRCODE_NO_ENTRY = 11,
    WM_ERRCODE_OVER_MAX_ENTRY = 12,
    WM_ERRCODE_INVALID_POLLBITMAP = 13,
    WM_ERRCODE_NO_DATA = 14,
    WM_ERRCODE_SEND_FAILED = 15,
    WM_ERRCODE_DCF_TEST,
    WM_ERRCODE_WL_INVALID_PARAM,
    WM_ERRCODE_WL_LENGTH_ERR,
    WM_ERRCODE_FLASH_ERROR,
    WM_ERRCODE_MAX
};

struct WMArm7Buffer020d3df8 {
    unsigned char data[0x300];
};

struct WMStatus020d3df8 {
    unsigned char data[0x800];
};

struct WMFifoBuffer020d3df8 {
    unsigned long words[WM_FIFO_BUFFER_WORDS];
};

struct WMCallback020d3df8 {
    unsigned short apiId;
    unsigned short errorCode;
    unsigned short wirelessCommand;
    unsigned short wirelessResult;
};

struct WMArm9Buf020d3df8 {
    WMArm7Buffer020d3df8* arm7;
    WMStatus020d3df8* status;
    void* indicationBuffer;
    unsigned long* fifo9to7;
    unsigned long* fifo7to9;
    unsigned short dmaNo;
    unsigned short scanOnly;
    WMCallbackFunc callbacks[0x2c];
    WMCallbackFunc indicationCallback;
    WMCallbackFunc portCallbacks[16];
    void* portArguments[16];
    unsigned long connectedAidBitmap;
    unsigned short myAid;
    unsigned char reserved[0xae];
};

struct InitData020c7de4 {
    BlockedContextList sendQueue;
    BlockedContextList receiveQueue;
    void** messages;
    int capacity;
    int firstIndex;
    int usedCount;
};

struct WMState020d3df8 {
    unsigned short initialized;
    unsigned short field_0x2;
    WMArm9Buf020d3df8* arm9;
    InitData020c7de4 messageQueue;
    void* messages[10];
};

struct WMSystemBuffer020d3df8 {
    WMArm9Buf020d3df8 arm9;
    WMArm7Buffer020d3df8 arm7;
    WMStatus020d3df8 status;
    WMFifoBuffer020d3df8 fifo9to7;
    WMFifoBuffer020d3df8 fifo7to9;
};

extern WMState020d3df8 data_021142e0;
extern unsigned long data_02114380[10][WM_FIFO_BUFFER_WORDS] __attribute__((aligned(32)));
void ClearBit0At027FFF96_020d468c();
void InitStruct020c7de4(InitData020c7de4*, int, int);
extern "C" int func_020c7e0c(InitData020c7de4*, void*, int);
extern "C" void func_020d42e0(unsigned int, unsigned int, unsigned int);

// USA: func_020d3df8
extern "C" ARM WMErrCode020d3df8 func_020d3df8(void* buffer, unsigned short dmaNo, unsigned long bufferSize) {
    const int interruptState = DisableIRQInterrupts();
    if (data_021142e0.initialized) {
        SetIRQInterruptState(interruptState);
        return WM_ERRCODE_ILLEGAL_STATE;
    }
    if (buffer == NULL) {
        SetIRQInterruptState(interruptState);
        return WM_ERRCODE_INVALID_PARAM;
    }
    if (dmaNo > 3) {
        SetIRQInterruptState(interruptState);
        return WM_ERRCODE_INVALID_PARAM;
    }
    if ((unsigned int)buffer & 31) {
        SetIRQInterruptState(interruptState);
        return WM_ERRCODE_INVALID_PARAM;
    }
    InitializeInterProcessorCommunication();
    if (!IsIPCCommandHandlerRegistered(10, IPCSide_Arm7)) {
        SetIRQInterruptState(interruptState);
        return WM_ERRCODE_WM_DISABLE;
    }
    InvalidateDataCacheRange(buffer, bufferSize);
    DMAMemsetSynchronous(dmaNo, (unsigned int)buffer, 0, bufferSize);
    data_021142e0.arm9 = (WMArm9Buf020d3df8*)buffer;
    data_021142e0.arm9->arm7 = &((WMSystemBuffer020d3df8*)buffer)->arm7;
    data_021142e0.arm9->status = (WMStatus020d3df8*)(data_021142e0.arm9->arm7 + 1);
    data_021142e0.arm9->fifo9to7 = (unsigned long*)(data_021142e0.arm9->status + 1);
    data_021142e0.arm9->fifo7to9 = data_021142e0.arm9->fifo9to7 + WM_FIFO_BUFFER_WORDS;
    ClearBit0At027FFF96_020d468c();
    data_021142e0.arm9->dmaNo = dmaNo;
    data_021142e0.arm9->connectedAidBitmap = 0;
    data_021142e0.arm9->myAid = 0;
    for (int i = 0; i < 16; i++) {
        data_021142e0.arm9->portCallbacks[i] = NULL;
        data_021142e0.arm9->portArguments[i] = NULL;
    }
    InitStruct020c7de4(&data_021142e0.messageQueue, (int)data_021142e0.messages, 10);
    for (int i = 0; i < 10; i++) {
        ((WMCallback020d3df8*)data_02114380[i])->apiId = 0x8000;
        CleanCacheRange(data_02114380[i], 2);
        func_020c7e0c(&data_021142e0.messageQueue, data_02114380[i], 1);
    }
    SetArm9IPCCommandHandler(10, func_020d42e0);
    data_021142e0.initialized = 1;
    SetIRQInterruptState(interruptState);
    return WM_ERRCODE_SUCCESS;
}

#include <globaldefs.h>
#include "System/Interrupts.h"
#include "System/Memory.h"

typedef void (*WMCallbackFunc)(void* arg);

struct WMArm9Buf
{
    void* WM7;
    void* status;
    unsigned long* indbuf;
    unsigned long* fifo9to7;
    unsigned long* fifo7to9;
    unsigned short dmaNo;
    unsigned short scanOnlyFlag;
    WMCallbackFunc CallbackTable[0x2c];
    WMCallbackFunc indCallback;
    WMCallbackFunc portCallbackTable[16];
    void* portCallbackArgument[16];
    unsigned long connectedAidBitmap;
    unsigned short myAid;
};

struct WMPortRecvCallback
{
    unsigned short apiid;
    unsigned short errcode;
    unsigned short state;
    unsigned short port;
    void* recvBuf;
    void* data;
    unsigned short length;
    unsigned short aid;
    unsigned char macAddress[6];
    unsigned short seqNo;
    void* arg;
    unsigned short myAid;
    unsigned short connectedAidBitmap;
    unsigned char ssid[24];
    unsigned short reason;
    unsigned short rssi;
    unsigned short maxSendDataSize;
    unsigned short maxRecvDataSize;
};

void CopyFrom027ffcf4_020c99ac(void* mac);
int GetBattleStateCode_020d41e8();
WMArm9Buf* GetBattleContext_020d41d8();
unsigned short GetBattleContextField0x14cLow16_020d46fc();
unsigned short GetBattleContextField0x150_020d46cc();

// USA: func_020d4770
extern "C" ARM int func_020d4770(unsigned short port, WMCallbackFunc callback, void* arg)
{
    int result;
    int lastState;
    WMPortRecvCallback cb;
    if (callback != NULL)
    {
        VectorizedMemset(&cb, 0, sizeof(WMPortRecvCallback));
        cb.apiid = 0x82;
        cb.errcode = 0;
        cb.state = 25;
        cb.port = port;
        cb.recvBuf = NULL;
        cb.data = NULL;
        cb.length = 0;
        cb.seqNo = 0xffff;
        cb.arg = arg;
        cb.aid = 0;
        CopyFrom027ffcf4_020c99ac(cb.macAddress);
    }
    lastState = DisableIRQInterrupts();
    result = GetBattleStateCode_020d41e8();
    if (result != 0)
    {
        SetIRQInterruptState(lastState);
        return result;
    }
    {
        WMArm9Buf* const w9b = GetBattleContext_020d41d8();
        w9b->portCallbackTable[port] = callback;
        w9b->portCallbackArgument[port] = arg;
    }
    if (callback != NULL)
    {
        cb.connectedAidBitmap = GetBattleContextField0x14cLow16_020d46fc();
        cb.myAid = GetBattleContextField0x150_020d46cc();
        callback(&cb);
    }
    SetIRQInterruptState(lastState);
    return 0;
}

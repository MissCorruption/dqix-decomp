#include <globaldefs.h>

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

struct WMPortSendCallback
{
    unsigned short apiid;
    unsigned short errcode;
    unsigned short wlCmdID;
    unsigned short wlResult;
    unsigned short state;
    unsigned short port;
    unsigned short destBitmap;
    unsigned short restBitmap;
    unsigned short sentBitmap;
    unsigned short rsv;
    const unsigned short* data;
    unsigned short length;
    unsigned short seqNo;
    WMCallbackFunc callback;
    void* arg;
    unsigned short maxSendDataSize;
    unsigned short maxRecvDataSize;
};

struct WMDataSet
{
    unsigned short aidBitmap;
    unsigned short receivedBitmap;
    unsigned short data[254];
};

struct WMDataSharingInfo
{
    WMDataSet ds[4];
    unsigned short seqNum[4];
    unsigned short writeIndex;
    unsigned short sendIndex;
    unsigned short readIndex;
    unsigned short aidBitmap;
    unsigned short dataLength;
    unsigned short stationNumber;
    unsigned short dataSetLength;
    unsigned short port;
    unsigned short doubleMode;
    unsigned short currentSeqNum;
    unsigned short state;
    unsigned short reserved[1];
};

extern "C" void func_020d63f0(void* callback);
extern "C" void func_020d651c(void* callback);
extern "C" WMArm9Buf* func_020d41d8();
extern "C" unsigned short func_020d46cc();

// USA: func_020d6318
extern "C" ARM void func_020d6318(void* callback)
{
    WMArm9Buf* const p = func_020d41d8();
    WMPortSendCallback* const cb = (WMPortSendCallback*)callback;
    const WMCallbackFunc portCallback = p->portCallbackTable[cb->port];
    WMDataSharingInfo* const dsInfo = (WMDataSharingInfo*)p->portCallbackArgument[cb->port];
    unsigned short aid;
    if (portCallback != func_020d63f0 && portCallback != func_020d651c)
        return;
    if (dsInfo == NULL)
        return;
    if (dsInfo != cb->arg)
        return;
    aid = func_020d46cc();
    if (cb->errcode == 0)
    {
        if (aid == 0)
        {
            dsInfo->seqNum[dsInfo->sendIndex] = cb->seqNo >> 1;
            dsInfo->sendIndex = (dsInfo->sendIndex + 1) & 3;
        }
    }
    else if (cb->errcode == 10)
    {
        if (aid != 0)
            dsInfo->sendIndex = (dsInfo->sendIndex + 4 - 1) & 3;
        dsInfo->state = 4;
    }
    else
    {
        dsInfo->state = 5;
    }
}

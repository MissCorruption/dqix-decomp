#include <globaldefs.h>
#include "NitroSDK/Cache.h"
#include "NitroSDK/Memory.h"

#if defined(jpn)
#define func_020ca390 func_020cbe5c
#endif

#if defined(jpn)
#define func_020ca3b8 func_020cbe84
#endif

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

extern "C" void func_020c9be0();
extern "C" void func_020ca390(unsigned short value, void* dst, unsigned long size);
extern "C" void func_020ca3b8(const void* src, void* dst, unsigned long size);
int ClearBattleSaveContext020d3fdc();
void ClearBit0At027FFF96_020d468c();

typedef void (*WMCallbackFunc)(void* arg);

struct WMStatus
{
    unsigned short state;
    char unk_2[0x72 - 0x2];
    unsigned short mp_recvBufSize;
    char unk_74[0x800 - 0x74];
};

struct WMArm9Buf
{
    void* WM7;
    WMStatus* status;
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

struct WMCallback
{
    unsigned short apiid;
    unsigned short errcode;
    unsigned short wlCmdID;
    unsigned short wlResult;
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

struct WMStartParentCallback
{
    unsigned short apiid;
    unsigned short errcode;
    unsigned short wlCmdID;
    unsigned short wlResult;
    unsigned short state;
    unsigned char macAddress[6];
    unsigned short aid;
    unsigned short reason;
    unsigned char ssid[24];
    unsigned short parentSize;
    unsigned short childSize;
};

struct WMStartConnectCallback
{
    unsigned short apiid;
    unsigned short errcode;
    unsigned short wlCmdID;
    unsigned short wlResult;
    unsigned short state;
    unsigned short aid;
    unsigned short reason;
    unsigned short wlStatus;
    unsigned char macAddress[6];
    unsigned short parentSize;
    unsigned short childSize;
};

struct WMStartMPCallback
{
    unsigned short apiid;
    unsigned short errcode;
    unsigned short state;
    unsigned char reserved[2];
    void* recvBuf;
};

struct WMSystemState
{
    unsigned short wmInitialized;
    WMArm9Buf* wm9buf;
    char bufMsgQ[0x20];
    void* bufMsg[10];
    WMPortRecvCallback portRecvCallback;
};

extern WMSystemState data_021142e0;
extern WMPortRecvCallback data_02114330;
extern unsigned char data_02114344[6];
extern unsigned char data_02114354[24];

// USA: func_020d42e0
extern "C" ARM void func_020d42e0(unsigned int command, unsigned int data, unsigned int error)
{
    WMCallback* const callback = (WMCallback*)data;
    WMArm9Buf* const w9b = data_021142e0.wm9buf;
    if (error)
        return;
    InvalidateDataCacheRange(w9b->fifo7to9, 0x100);
    if (!w9b->scanOnlyFlag)
        InvalidateDataCacheRange(w9b->status, sizeof(WMStatus));
    if ((unsigned long)callback != (unsigned long)w9b->fifo7to9)
        InvalidateDataCacheRange(callback, 0x100);
    if (callback->apiid >= 0x2c)
    {
        if (callback->apiid == 0x80)
        {
            if (callback->errcode == 19)
                func_020c9be0();
            if (w9b->indCallback != NULL)
                w9b->indCallback(callback);
        }
        else if (callback->apiid == 0x82)
        {
            WMPortRecvCallback* const port = (WMPortRecvCallback*)callback;
            if (w9b->portCallbackTable[port->port] != NULL)
            {
                port->arg = w9b->portCallbackArgument[port->port];
                port->connectedAidBitmap = w9b->connectedAidBitmap;
                InvalidateDataCacheRange(port->recvBuf, w9b->status->mp_recvBufSize);
                w9b->portCallbackTable[port->port](port);
            }
        }
        else if (callback->apiid == 0x81)
        {
            WMPortSendCallback* const port = (WMPortSendCallback*)callback;
            callback->apiid = 0xf;
            if (port->callback != NULL)
                port->callback(port);
        }
    }
    else
    {
        if (callback->apiid == 0xe)
        {
            WMStartMPCallback* const mp = (WMStartMPCallback*)callback;
            if ((mp->state == 11 || mp->state == 12) && mp->errcode == 0)
                InvalidateDataCacheRange(mp->recvBuf, w9b->status->mp_recvBufSize);
        }
        if (callback->apiid == 2 && callback->errcode == 0)
        {
            const WMCallbackFunc func = w9b->CallbackTable[callback->apiid];
            ClearBattleSaveContext020d3fdc();
            if (func != NULL)
                func(callback);
            return;
        }
        if (w9b->CallbackTable[callback->apiid] != NULL)
        {
            w9b->CallbackTable[callback->apiid](callback);
            if (!data_021142e0.wmInitialized)
                return;
        }
        if (callback->apiid == 8 || callback->apiid == 0xc)
        {
            unsigned short state;
            unsigned short aid;
            unsigned short myAid;
            unsigned short reason;
            const unsigned char* macAddress;
            const unsigned char* ssid;
            unsigned short parentSize;
            unsigned short childSize;
            if (callback->apiid == 8)
            {
                WMStartParentCallback* const parent = (WMStartParentCallback*)callback;
                state = parent->state;
                aid = parent->aid;
                myAid = 0;
                macAddress = parent->macAddress;
                ssid = parent->ssid;
                reason = parent->reason;
                parentSize = parent->parentSize;
                childSize = parent->childSize;
            }
            else if (callback->apiid == 0xc)
            {
                WMStartConnectCallback* const connect = (WMStartConnectCallback*)callback;
                state = connect->state;
                aid = 0;
                myAid = connect->aid;
                macAddress = connect->macAddress;
                ssid = NULL;
                reason = connect->reason;
                parentSize = connect->parentSize;
                childSize = connect->childSize;
            }
            if (state == 7 || state == 9 || state == 26)
            {
                if (state == 7)
                    w9b->connectedAidBitmap |= 1 << aid;
                else
                    w9b->connectedAidBitmap &= ~(1 << aid);
                w9b->myAid = myAid;
                VectorizedMemset(&data_02114330, 0, sizeof(WMPortRecvCallback));
                data_021142e0.portRecvCallback.apiid = 0x82;
                data_021142e0.portRecvCallback.errcode = 0;
                data_021142e0.portRecvCallback.state = state;
                data_021142e0.portRecvCallback.recvBuf = NULL;
                data_021142e0.portRecvCallback.data = NULL;
                data_021142e0.portRecvCallback.length = 0;
                data_021142e0.portRecvCallback.aid = aid;
                data_021142e0.portRecvCallback.myAid = myAid;
                data_021142e0.portRecvCallback.connectedAidBitmap = w9b->connectedAidBitmap;
                data_021142e0.portRecvCallback.seqNo = 0xffff;
                data_021142e0.portRecvCallback.reason = reason;
                VectorizedInvertedMemcpy(macAddress, data_02114344, sizeof(data_02114344));
                if (ssid != NULL)
                    func_020ca3b8(ssid, data_02114354, sizeof(data_02114354));
                else
                    func_020ca390(0, data_02114354, sizeof(data_02114354));
                data_021142e0.portRecvCallback.maxSendDataSize = myAid == 0 ? parentSize : childSize;
                data_021142e0.portRecvCallback.maxRecvDataSize = myAid == 0 ? childSize : parentSize;
                for (unsigned short i = 0; i < 16; i++)
                {
                    data_021142e0.portRecvCallback.port = i;
                    if (w9b->portCallbackTable[i] != NULL)
                    {
                        data_021142e0.portRecvCallback.arg = w9b->portCallbackArgument[i];
                        w9b->portCallbackTable[i](&data_02114330);
                    }
                }
            }
        }
    }
    InvalidateDataCacheRange(w9b->fifo7to9, 0x100);
    ClearBit0At027FFF96_020d468c();
    if ((unsigned long)callback != (unsigned long)w9b->fifo7to9)
    {
        callback->apiid |= 0x8000;
        CleanCacheRange(callback, 0x100);
    }
}

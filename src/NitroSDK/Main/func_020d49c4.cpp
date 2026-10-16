#include <globaldefs.h>
#include "System/Cache.h"

typedef void (*WMCallbackFunc)(void* arg);

struct WMStatus
{
    char unk_0[0x182];
    unsigned short child_bitmap;
};

struct WMArm9Buf
{
    void* WM7;
    WMStatus* status;
};

struct WMMpRecvData
{
    unsigned short length;
    unsigned short rssi;
    unsigned short aid;
    unsigned short noResponse;
    unsigned short timeStamp;
    unsigned char cdata[2];
};

struct WMMpRecvHeader
{
    unsigned short bitmap;
    unsigned short errBitmap;
    unsigned short count;
    unsigned short length;
    unsigned short txCount;
    WMMpRecvData data[1];
};

int GetBattleStateCode_020d41e8();
WMArm9Buf* GetBattleContext_020d41d8();

// USA: func_020d49c4
extern "C" ARM const WMMpRecvData* func_020d49c4(const void* header, unsigned short aid)
{
    const WMMpRecvHeader* const recvHeader = (const WMMpRecvHeader*)header;
    WMMpRecvData* recvData[15];
    WMArm9Buf* const w9b = GetBattleContext_020d41d8();
    if (GetBattleStateCode_020d41e8() != 0)
        return NULL;
    if (aid < 1 || aid > 15)
        return NULL;
    InvalidateDataCacheRange(&w9b->status->child_bitmap, 2);
    if (!(w9b->status->child_bitmap & (1 << aid)))
        return NULL;
    if (recvHeader->count == 0)
        return NULL;
    recvData[0] = (WMMpRecvData*)recvHeader->data;
    int i = 0;
    do
    {
        if (recvData[i]->aid == aid)
            return recvData[i];
        i++;
        recvData[i] = (WMMpRecvData*)((unsigned long)recvData[i - 1] + recvHeader->length);
    } while (i < recvHeader->count);
    return NULL;
}

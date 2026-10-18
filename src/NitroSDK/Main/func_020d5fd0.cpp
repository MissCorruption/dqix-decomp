#include <globaldefs.h>

#if defined(jpn)
#define func_020ca3b8 func_020cbe84
#endif

typedef void (*WMCallbackFunc)(void* arg);

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

struct Obj020d6610;
struct Obj020d66dc;

extern "C" int func_020d424c(int paramNum, ...);
extern "C" void func_020ca3b8(const void* src, void* dst, unsigned long size);
extern "C" int func_020d59bc(WMCallbackFunc callback, void* arg, const unsigned short* sendData,
                             unsigned short sendDataSize, unsigned short destBitmap, unsigned short port,
                             unsigned short prio);
extern "C" void func_020d6318(void* callback);
unsigned short GetBattleContextField0x150_020d46cc();
unsigned short GetBattleContextField0x14cLow16_020d46fc();
void ClearAndSetBlockFlag020d6610(Obj020d6610* dsInfo, int aid, int data);
void AdvanceBattleBlockQueue020d66dc(Obj020d66dc* dsInfo, int delayed);

// USA: func_020d5fd0
extern "C" ARM int func_020d5fd0(WMDataSharingInfo* dsInfo, const unsigned short* sendData, WMDataSet* receiveData)
{
    int result;
    unsigned short aid;
    unsigned short connectedAIDs;
    unsigned short state;
    result = func_020d424c(2, 9, 10);
    if (result != 0)
        return result;
    if (dsInfo == NULL)
        return 6;
    if (sendData == NULL)
        return 6;
    if (receiveData == NULL)
        return 6;
    aid = GetBattleContextField0x150_020d46cc();
    if (aid == 0)
        connectedAIDs = GetBattleContextField0x14cLow16_020d46fc();
    state = dsInfo->state;
    if (state == 5)
        return 1;
    if (state != 1 && state != 4)
        return 3;
    result = 5;
    if (aid == 0)
    {
        int sendFlag = false;
        int delayed = false;
        if (state == 4)
        {
            int res;
            int oldWI;
            dsInfo->state = 1;
            oldWI = (dsInfo->writeIndex + 4 - 1) & 3;
            res = func_020d59bc(func_020d6318, dsInfo, (unsigned short*)&dsInfo->ds[oldWI],
                                dsInfo->dataSetLength, dsInfo->aidBitmap & connectedAIDs, dsInfo->port, 1);
            if (res == 7)
            {
                dsInfo->seqNum[oldWI] = 0xffff;
                dsInfo->sendIndex = (dsInfo->sendIndex + 1) & 3;
            }
            else if (res != 0 && res != 2)
            {
                dsInfo->state = 5;
                return 1;
            }
        }
        if (dsInfo->readIndex != dsInfo->sendIndex)
        {
            dsInfo->ds[dsInfo->readIndex].aidBitmap |= 1;
            func_020ca3b8(&dsInfo->ds[dsInfo->readIndex], receiveData, sizeof(WMDataSet));
            dsInfo->currentSeqNum = dsInfo->seqNum[dsInfo->readIndex];
            dsInfo->readIndex = (dsInfo->readIndex + 1) & 3;
            sendFlag = true;
            result = 0;
            if (dsInfo->doubleMode == false && connectedAIDs != 0 && dsInfo->ds[dsInfo->writeIndex].aidBitmap == 1)
                delayed = true;
            else
                delayed = false;
        }
        AdvanceBattleBlockQueue020d66dc((Obj020d66dc*)dsInfo, false);
        if (sendFlag)
        {
            ClearAndSetBlockFlag020d6610((Obj020d6610*)dsInfo, 0, (int)sendData);
            if (dsInfo->doubleMode == false)
                AdvanceBattleBlockQueue020d66dc((Obj020d66dc*)dsInfo, delayed);
        }
    }
    else
    {
        int sendFlag = false;
        if (state == 4)
        {
            sendFlag = true;
            dsInfo->state = 1;
        }
        else if (dsInfo->readIndex != dsInfo->writeIndex)
        {
            if (!(dsInfo->ds[dsInfo->readIndex].aidBitmap & 1))
            {
                dsInfo->ds[dsInfo->readIndex].aidBitmap |= 1;
            }
            else
            {
                func_020ca3b8(&dsInfo->ds[dsInfo->readIndex], receiveData, sizeof(WMDataSet));
                dsInfo->currentSeqNum = dsInfo->seqNum[dsInfo->readIndex];
                dsInfo->readIndex = (dsInfo->readIndex + 1) & 3;
                sendFlag = true;
                result = 0;
            }
        }
        if (sendFlag)
        {
            unsigned short* const buf = (unsigned short*)((unsigned char*)&dsInfo->ds[dsInfo->sendIndex] + 32);
            int res;
            func_020ca3b8(sendData, buf, dsInfo->dataLength);
            res = func_020d59bc(func_020d6318, dsInfo, buf, dsInfo->dataLength, dsInfo->aidBitmap, dsInfo->port, 1);
            dsInfo->sendIndex = (dsInfo->sendIndex + 1) & 3;
            if (res != 2 && res != 0)
            {
                dsInfo->state = 5;
                result = 1;
            }
        }
    }
    return result;
}

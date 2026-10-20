#include <globaldefs.h>

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

extern "C" int func_020d424c(int paramNum, ...);
extern "C" void func_020ca458(unsigned long value, void* dst, unsigned long size);
extern "C" int func_020d4770(unsigned short port, WMCallbackFunc callback, void* arg);
extern "C" int func_020d59bc(WMCallbackFunc callback, void* arg, const unsigned short* sendData,
                             unsigned short sendDataSize, unsigned short destBitmap, unsigned short port,
                             unsigned short prio);
extern "C" void func_020d6318(void* callback);
extern "C" void func_020d63f0(void* callback);
extern "C" void func_020d651c(void* callback);
unsigned short GetBattleContextField0x150_020d46cc();
unsigned short GetBattleContextField0x14cLow16_020d46fc();
unsigned char PopCount32_020d1ae4(unsigned int x);

// USA: func_020d5d34
extern "C" ARM int func_020d5d34(WMDataSharingInfo* dsInfo, unsigned short port, unsigned short aidBitmap,
                                 unsigned short dataLength, int doubleMode)
{
    int result;
    int aid;
    unsigned short connectedAIDs = 1;
    result = func_020d424c(2, 9, 10);
    if (result != 0)
        return result;
    if (dsInfo == NULL)
        return 6;
    if (port >= 16)
        return 6;
    if (aidBitmap == 0)
        return 6;
    aid = GetBattleContextField0x150_020d46cc();
    if (aid == 0)
        connectedAIDs = GetBattleContextField0x14cLow16_020d46fc();
    func_020ca458(0, dsInfo, sizeof(WMDataSharingInfo));
    dsInfo->writeIndex = 0;
    dsInfo->sendIndex = 0;
    dsInfo->readIndex = 0;
    dsInfo->dataLength = dataLength;
    dsInfo->port = port;
    dsInfo->aidBitmap = 0;
    dsInfo->doubleMode = doubleMode ? true : false;
    aidBitmap |= 1 << aid;
    dsInfo->aidBitmap = aidBitmap;
    {
        const unsigned char stationNumber = PopCount32_020d1ae4(aidBitmap);
        dsInfo->stationNumber = stationNumber;
        dsInfo->dataSetLength = dataLength * stationNumber;
    }
    if (dsInfo->dataSetLength > 508)
    {
        dsInfo->aidBitmap = 0;
        return 6;
    }
    dsInfo->dataSetLength += 4;
    dsInfo->state = 1;
    if (aid == 0)
    {
        int i;
        for (i = 0; i < 4; i++)
            dsInfo->ds[i].aidBitmap = dsInfo->aidBitmap & (connectedAIDs | 1);
        func_020d4770(port, func_020d63f0, dsInfo);
        for (i = 0; i < (dsInfo->doubleMode == true ? 2 : 1); i++)
        {
            int res;
            dsInfo->writeIndex = (dsInfo->writeIndex + 1) & 3;
            res = func_020d59bc(func_020d6318, dsInfo, (unsigned short*)&dsInfo->ds[i], dsInfo->dataSetLength,
                                dsInfo->aidBitmap & connectedAIDs, dsInfo->port, 1);
            if (res == 7)
            {
                dsInfo->seqNum[i] = 0xffff;
                dsInfo->sendIndex = (dsInfo->sendIndex + 1) & 3;
            }
            else if (res != 0 && res != 2)
            {
                dsInfo->state = 5;
                return 1;
            }
        }
    }
    else
    {
        dsInfo->sendIndex = 3;
        func_020d4770(port, func_020d651c, dsInfo);
    }
    return 0;
}

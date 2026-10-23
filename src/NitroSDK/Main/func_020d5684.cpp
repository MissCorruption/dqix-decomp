#include <globaldefs.h>
#include "NitroSDK/Cache.h"

#if defined(jpn)
#define func_020ca3ec func_020cbeb8
#endif

#if defined(jpn)
#define func_020ca408 func_020cbed4
#endif

typedef void (*WMCallbackFunc)(void* arg);

struct WMStatus
{
    unsigned short state;
    char unk_2[0xc - 0x2];
    unsigned long mp_flag;
    char unk_10[0x9c - 0x10];
    unsigned short mp_ignoreSizePrecheckMode;
    char unk_9e[0xc6 - 0x9e];
    unsigned short pwrMgtMode;
    char unk_c8[0x188 - 0xc8];
    unsigned short aid;
};

struct WMArm9Buf
{
    void* WM7;
    WMStatus* status;
};

struct WMMPParam
{
    unsigned long mask;
    unsigned short minFrequency;
    unsigned short frequency;
    unsigned short maxFrequency;
    unsigned short parentSize;
    unsigned short childSize;
    unsigned short parentInterval;
    unsigned short childInterval;
    unsigned short parentVCount;
    unsigned short childVCount;
    unsigned short defaultRetryCount;
    unsigned char minPollBmpMode;
    unsigned char singlePacketMode;
    unsigned char ignoreFatalErrorMode;
    unsigned char ignoreSizePrecheckMode;
};

struct WMMPTmpParam
{
    unsigned long mask;
    unsigned short minFrequency;
    unsigned short frequency;
    unsigned short maxFrequency;
    unsigned short defaultRetryCount;
    unsigned char minPollBmpMode;
    unsigned char singlePacketMode;
    unsigned char ignoreFatalErrorMode;
    unsigned char reserved[1];
};

struct WMStartMPReq
{
    unsigned short apiid;
    unsigned short reserved;
    unsigned long* recvBuf;
    unsigned long recvBufSize;
    unsigned long* sendBuf;
    unsigned long sendBufSize;
    WMMPParam param;
    WMMPTmpParam tmpParam;
};

extern "C" void func_020ca3ec(unsigned long value, void* dst, unsigned long size);
extern "C" void func_020ca408(const void* src, void* dst, unsigned long size);
extern "C" int func_020d424c(int paramNum, ...);
extern "C" WMArm9Buf* func_020d41d8();
extern "C" int func_020d4900();
extern "C" int func_020d4894();
extern "C" void func_020d404c(int id, int callback);
extern "C" int func_020d4168(void* data, unsigned int length);

// USA: func_020d5684
extern "C" ARM int func_020d5684(WMCallbackFunc callback, unsigned short* recvBuf, unsigned short recvBufSize,
                                 unsigned short* sendBuf, unsigned short sendBufSize, const WMMPTmpParam* tmpParam)
{
    int result;
    WMArm9Buf* const p = func_020d41d8();
    WMStatus* const status = p->status;
    result = func_020d424c(2, 7, 8);
    if (result != 0)
        return result;
    InvalidateDataCacheRange(&status->aid, 2);
    InvalidateDataCacheRange(&status->pwrMgtMode, 2);
    if (status->aid != 0 && status->pwrMgtMode != 1)
        return 3;
    InvalidateDataCacheRange(&status->mp_flag, 4);
    if (status->mp_flag == true)
        return 3;
    if ((recvBufSize & 0x3f) != 0)
        return 6;
    if ((sendBufSize & 0x1f) != 0)
        return 6;
    InvalidateDataCacheRange(&status->mp_ignoreSizePrecheckMode, 2);
    if (status->mp_ignoreSizePrecheckMode == false)
    {
        if (recvBufSize < func_020d4900())
            return 6;
        if (sendBufSize < func_020d4894())
            return 6;
    }
    func_020d404c(0xe, (int)callback);
    {
        WMStartMPReq req;
        func_020ca3ec(0, &req, sizeof(WMStartMPReq));
        req.apiid = 0xe;
        req.recvBuf = (unsigned long*)recvBuf;
        req.recvBufSize = recvBufSize / 2;
        req.sendBuf = (unsigned long*)sendBuf;
        req.sendBufSize = sendBufSize;
        func_020ca3ec(0, &req.param, sizeof(WMMPParam));
        func_020ca408(tmpParam, &req.tmpParam, sizeof(WMMPTmpParam));
        result = func_020d4168(&req, sizeof(WMStartMPReq));
    }
    if (result != 0)
        return result;
    return 2;
}

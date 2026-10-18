#include <globaldefs.h>
#include "System/Interrupts.h"
#include "System/Memory.h"
#include "System/Cache.h"

// DWC_GetApInfo
struct ApInfo02212274
{
    int aptype;
    int area;
    char spotinfo[10];
    char essid[33];
    unsigned char bssid[6];
    char pad[3];
};

extern "C" int func_ov031_02211f24();
extern "C" int func_ov031_02213024();
extern "C" unsigned char* func_ov031_0220f040();
extern "C" void* func_ov031_0220f084(unsigned short* out);
int CopyMatchingTierData_02213054(void* buf);

static inline int IsDigit02212274(unsigned int c)
{
    return c >= '0' && c <= '9';
}

// USA: func_ov031_02212274
extern "C" ARM int func_ov031_02212274(ApInfo02212274* apinfo)
{
    int intr;
    unsigned char* bssid;
    unsigned short essidLength;
    void* essid;
    unsigned char spotinfo[10];

    VectorizedMemset(apinfo, 0, sizeof(ApInfo02212274));
    apinfo->area = 0xff;
    if (func_ov031_02211f24() != 4) return 0;

    apinfo->aptype = func_ov031_02213024();
    if (apinfo->aptype == 0xff || apinfo->aptype > 99)
    {
        apinfo->aptype = 99;
        return 0;
    }

    intr = DisableIRQInterrupts();
    bssid = func_ov031_0220f040();
    InvalidateDataCacheRange(bssid, 6);
    if (bssid == NULL)
    {
        SetIRQInterruptState(intr);
        return 0;
    }
    VectorizedInvertedMemcpy(bssid, apinfo->bssid, 6);

    if (apinfo->aptype >= 0 && apinfo->aptype < 3)
    {
        essid = func_ov031_0220f084(&essidLength);
        InvalidateDataCacheRange(essid, 32);
        if (essid == NULL)
        {
            SetIRQInterruptState(intr);
            return 0;
        }
        VectorizedInvertedMemcpy(essid, apinfo->essid, essidLength);
    }
    SetIRQInterruptState(intr);

    if (CopyMatchingTierData_02213054(spotinfo))
    {
        apinfo->area = IsDigit02212274(spotinfo[0]) ? spotinfo[0] - '0' : 0xff;
        VectorizedInvertedMemcpy(&spotinfo[1], apinfo->spotinfo, 9);
    }
    else
    {
        apinfo->area = 0xff;
    }
    return 1;
}

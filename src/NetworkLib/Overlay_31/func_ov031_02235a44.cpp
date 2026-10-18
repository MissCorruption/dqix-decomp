#include <globaldefs.h>
#include "System/Cache.h"
#include "System/Memory.h"

typedef struct WMOtherElements
{
    unsigned char count;
    unsigned char padding[3];
    struct
    {
        unsigned char id;
        unsigned char length;
        unsigned char rsv[2];
        unsigned char* body;
    } element[16];
} WMOtherElements;

typedef struct WMBssDesc
{
    unsigned short length;
    unsigned short rssi;
    unsigned char bssid[6];
    unsigned short ssidLength;
    unsigned char ssid[32];
    unsigned short capaInfo;
    unsigned char unk_2e[0x3c - 0x2e];
    unsigned short gameInfoLength;
} WMBssDesc;

typedef struct WMStartScanExCallback
{
    unsigned short apiid;
    unsigned short errcode;
    unsigned short wlCmdID;
    unsigned short wlResult;
    unsigned short state;
    unsigned short channelList;
    unsigned short reserved;
    unsigned short bssDescCount;
    WMBssDesc* bssDesc[16];
    unsigned short linkLevel[16];
} WMStartScanExCallback;

typedef struct ScanEntry02235a44
{
    unsigned char ssid[32];
    unsigned char bssid[6];
    unsigned short linkLevel;
    unsigned char security;
    unsigned char pad;
} ScanEntry02235a44;

extern "C" int func_02001aec(const void* a, const void* b, unsigned int n);
extern "C" void func_020d4c7c(WMOtherElements* elements, const WMBssDesc* bssDesc);

extern char* data_ov031_02290cf8;
extern unsigned char data_ov031_022491fc[6];
extern unsigned char data_ov031_022491f8[4];

// USA: func_ov031_02235a44
extern "C" ARM void func_ov031_02235a44(WMStartScanExCallback* cb) {
    WMBssDesc* bss;
    int i, slot, j, count;
    ScanEntry02235a44* entry;
    WMOtherElements elems;
    ScanEntry02235a44* entries = (ScanEntry02235a44*)(data_ov031_02290cf8 + 0x1300);
    InvalidateDataCacheRange(data_ov031_02290cf8 + 0xf00, 0x400);
    for (i = 0; i < cb->bssDescCount; i++) {
        bss = cb->bssDesc[i];
        if (bss->ssid[0] == 0 || bss->gameInfoLength != 0) continue;
        for (slot = 0; slot < 20; slot++) {
            if (func_02001aec(bss->bssid, entries[slot].bssid, 6) == 0) break;
        }
        if (slot == 20) {
            for (slot = 0; slot < 20; slot++) {
                if (func_02001aec(entries[slot].bssid, data_ov031_022491fc, 6) == 0) break;
            }
            if (slot == 20) return;
        }
        entry = &entries[slot];
        VectorizedInvertedMemcpy(bss->bssid, entry->bssid, 6);
        VectorizedInvertedMemcpy(bss->ssid, entry->ssid, 0x20);
        entry->linkLevel = cb->linkLevel[i];
        if (!(bss->capaInfo & 0x10)) {
            entry->security = 0;
            continue;
        }
        entry->security = 1;
        func_020d4c7c(&elems, bss);
        count = elems.count;
        for (j = 0; j < count; j++) {
            if (elems.element[j].id == 0x30) {
                entry->security = 2;
                break;
            }
            if (elems.element[j].id == 0xdd && elems.element[j].length >= 4
                && func_02001aec(elems.element[j].body, data_ov031_022491f8, 4) == 0) {
                entry->security = 2;
                break;
            }
        }
    }
}

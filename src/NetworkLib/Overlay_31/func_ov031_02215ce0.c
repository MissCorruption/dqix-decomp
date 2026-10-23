#include <globaldefs.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DiscoveryGameInfo DiscoveryGameInfo;
typedef struct DiscoveryEntry DiscoveryEntry;
typedef struct DiscoveryReply DiscoveryReply;
typedef struct DiscoverySlot DiscoverySlot;
typedef struct DiscoveryCrcTable DiscoveryCrcTable;
typedef struct DiscoveryScanParameters DiscoveryScanParameters;
typedef struct DiscoveryRc4Context DiscoveryRc4Context;
typedef struct DiscoveryState DiscoveryState;

void VectorizedMemset(void*, int, unsigned int);
void VectorizedInvertedMemcpy(const void*, void*, unsigned int);
void InvalidateDataCacheRange(const void*, unsigned int);

struct DiscoveryGameInfo {
    unsigned short magicNumber;
    unsigned char ver;
    unsigned char platform;
    unsigned long ggid;
    unsigned short tgid;
    unsigned char userGameInfoLength;
    union {
        unsigned char gameNameCount_attribute;
        unsigned char attribute;
    };
    unsigned short parentMaxSize;
    unsigned short childMaxSize;
    union {
        unsigned short userGameInfo[56];
        struct {
            unsigned short userName[4];
            unsigned short gameName[8];
            unsigned short padd1[44];
        } old_type;
    };
};
struct DiscoveryEntry {
    unsigned short length;
    unsigned short rssi;
    unsigned char bssid[6];
    unsigned short ssidLength;
    unsigned char ssid[32];
    unsigned short capaInfo;
    struct {
        unsigned short basic;
        unsigned short support;
    } rateSet;
    unsigned short beaconPeriod;
    unsigned short dtimPeriod;
    unsigned short channel;
    unsigned short cfpPeriod;
    unsigned short cfpMaxDuration;
    unsigned short gameInfoLength;
    unsigned short otherElementCount;
    DiscoveryGameInfo gameInfo;
};
struct DiscoveryReply {
    unsigned short apiid;
    unsigned short errcode;
    unsigned short wlCmdID;
    unsigned short wlResult;
    unsigned short state;
    unsigned short channelList;
    unsigned char reserved[2];
    unsigned short bssDescCount;
    DiscoveryEntry* bssDesc[16];
    unsigned short linkLevel[16];
};

struct DiscoverySlot {
    unsigned char ssid[32];
    unsigned char apNumber[10];
    unsigned short hotspotId;
    unsigned char hotspotName[24];
    unsigned char wepKey[32];
    unsigned char channel;
    unsigned char encryption;
    unsigned char infoFlags;
    unsigned char reserved[5];
    unsigned short mtu;
    unsigned short crc;
};

struct DiscoveryCrcTable {
    unsigned short table[256];
};

struct DiscoveryScanParameters {
    DiscoveryEntry* scanBuffer;
    unsigned short scanBufferSize;
    unsigned short channelList;
    unsigned short maxChannelTime;
    unsigned char bssid[6];
    unsigned short scanType;
    unsigned short ssidLength;
    unsigned char ssid[32];
    unsigned short ssidMatchLength;
    unsigned short rsv2[7];
};

struct DiscoveryRc4Context {
    unsigned char i;
    unsigned char j;
    unsigned char reserved[2];
    unsigned char s[256];
};

struct DiscoveryState {
    unsigned char wmWork[0xf00] __attribute__((aligned(32)));
    unsigned char scanBuffer[0x400];
    DiscoveryScanParameters scanParameters;
    void (*callback)(void*);
    DiscoverySlot slots[16];
    unsigned short linkLevels[16];
    unsigned short tgids[16];
    long count;
    long writeIndex;
    unsigned long scanState;
    unsigned short crc;
    DiscoveryCrcTable crcTable;
    DiscoveryRc4Context cipher;
};

extern DiscoveryState* data_ov031_0224e5d8;
void func_ov031_022118a8(DiscoveryRc4Context*, const void*, unsigned long);
void func_ov031_02211938(DiscoveryRc4Context*, const void*, unsigned long, void*);
void func_020d1be4(const unsigned short*, unsigned short*, const unsigned char*, unsigned int);
unsigned short func_020d1cc8(const unsigned short*, const unsigned char*, unsigned int);
int func_ov031_02215ccc(int);

#ifdef __cplusplus
}
#endif

// USA: func_ov031_02215ce0
#ifdef __cplusplus
extern "C"
#endif
ARM void func_ov031_02215ce0(void* argument) {
    DiscoveryReply* reply = (DiscoveryReply*)argument;
    static const unsigned long magic = 0x57445321;
    InvalidateDataCacheRange(data_ov031_0224e5d8->scanBuffer, 0x400);
    if (reply->errcode == 0 && reply->state == 5) {
        unsigned long entryIndex = 0;
        if (entryIndex < reply->bssDescCount) {
            do {
                if (reply->bssDesc[entryIndex]->gameInfo.magicNumber == 1 && reply->bssDesc[entryIndex]->gameInfo.ggid == 0x857) {
                    unsigned long index;
                    int found = 0;
                    index = 0;
                    if (index < data_ov031_0224e5d8->count) {
                        unsigned short id = reply->bssDesc[entryIndex]->gameInfo.tgid;
                        do {
                            unsigned short storedId = data_ov031_0224e5d8->tgids[index];
                            if (storedId == id) {
                                found = 1;
                                break;
                            }
                            ++index;
                        } while (index < data_ov031_0224e5d8->count);
                    }
                    if (found != 1) {
                        unsigned char rc4key[8];
                        unsigned char* pCrcData;
                        unsigned short crc;
                        DiscoveryState* state;
                        unsigned short storedCrc;
                        VectorizedInvertedMemcpy(reply->bssDesc[entryIndex]->gameInfo.userGameInfo,
                            &data_ov031_0224e5d8->slots[data_ov031_0224e5d8->writeIndex], 0x70);
                        VectorizedInvertedMemcpy(&magic, rc4key, 4);
                        VectorizedInvertedMemcpy(reply->bssDesc[entryIndex]->bssid + 2, rc4key + 4, 4);
                        func_ov031_022118a8(&data_ov031_0224e5d8->cipher, rc4key, 8);
                        func_ov031_02211938(&data_ov031_0224e5d8->cipher,
                            &data_ov031_0224e5d8->slots[data_ov031_0224e5d8->writeIndex], 0x70,
                            &data_ov031_0224e5d8->slots[data_ov031_0224e5d8->writeIndex]);
                        pCrcData = (unsigned char*)&data_ov031_0224e5d8->slots[data_ov031_0224e5d8->writeIndex];
                        func_020d1be4(data_ov031_0224e5d8->crcTable.table, &data_ov031_0224e5d8->crc, pCrcData, 0x6e);
                        crc = func_020d1cc8(data_ov031_0224e5d8->crcTable.table, pCrcData, 0x6e);
                        state = data_ov031_0224e5d8;
                        storedCrc = state->slots[state->writeIndex].crc;
                        if (crc != storedCrc && storedCrc != 0) {
                            VectorizedMemset(&state->slots[state->writeIndex], 0, 0x70);
                        } else {
                            state->linkLevels[state->writeIndex] = func_ov031_02215ccc((unsigned char)reply->bssDesc[entryIndex]->rssi);
                            data_ov031_0224e5d8->tgids[data_ov031_0224e5d8->writeIndex] = reply->bssDesc[entryIndex]->gameInfo.tgid;
                            data_ov031_0224e5d8->writeIndex = (data_ov031_0224e5d8->writeIndex + 1) % 16;
                            ++data_ov031_0224e5d8->count;
                            state = data_ov031_0224e5d8;
                            if (state->count > 16)
                                state->count = 16;
                        }
                    }
                }
                ++entryIndex;
            } while (entryIndex < reply->bssDescCount);
        }
    }
    data_ov031_0224e5d8->scanState = 2;
    if (data_ov031_0224e5d8->callback)
        data_ov031_0224e5d8->callback(reply);
}

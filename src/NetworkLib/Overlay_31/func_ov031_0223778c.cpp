#include <globaldefs.h>
#include "System/Cache.h"
#include "System/Memory.h"

struct PeerGameInfo3778c {
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
            unsigned short userName[5];
            unsigned short gameName[7];
            unsigned short padd1[44];
        } old_type;
    };
};
struct Peer3778c {
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
    PeerGameInfo3778c gameInfo;
};
struct PeerList3778c {
    unsigned short apiid;
    unsigned short errcode;
    unsigned short wlCmdID;
    unsigned short wlResult;
    unsigned short state;
    unsigned short channelList;
    unsigned char reserved[2];
    unsigned short bssDescCount;
    Peer3778c* bssDesc[16];
    unsigned short linkLevel[16];
};

struct PeerSlot3778c { unsigned char name[6]; unsigned char active; };
struct PeerState3778c { unsigned char padding[0x1300]; PeerSlot3778c slots[16]; void (*notify)(int); };
extern PeerState3778c* data_ov031_02290d0c;
extern unsigned char data_ov031_02249288[8];
extern unsigned char data_ov031_02249280[6];
extern "C" int func_02001aec(const void*, const void*, unsigned int);

// USA: func_ov031_0223778c
extern "C" ARM void func_ov031_0223778c(PeerList3778c* list) {
    Peer3778c* peer;
    int peerIndex;
    peerIndex = 0;
    if ((int)list->bssDescCount <= 0) return;
    do {
        peer = list->bssDesc[peerIndex];
        InvalidateDataCacheRange(peer, 0xc0);
        if (func_02001aec(peer->ssid, data_ov031_02249288, 8) == 0) {
            int existingIndex = 0;
            PeerSlot3778c* existingSlot;
            PeerSlot3778c* emptySlot;
            PeerState3778c* const state = data_ov031_02290d0c;
            existingSlot = state->slots;
            do {
                if (func_02001aec(peer->bssid, existingSlot->name, 6) == 0) {
                    if (state->slots[existingIndex].active == 0 && (peer->ssid[9] & 1) != 0) {
                        if (state->notify) state->notify(1);
                        return;
                    }
                    goto nextPeer;
                }
                ++existingIndex;
                ++existingSlot;
            } while (existingIndex < 16);
            emptySlot = state->slots;
            int emptyIndex = 0;
            do {
                if (func_02001aec(emptySlot->name, data_ov031_02249280, 6) == 0) {
                    VectorizedInvertedMemcpy(peer->bssid, state->slots[emptyIndex].name, 6);
                    data_ov031_02290d0c->slots[emptyIndex].active = (peer->ssid[9] & 1) != 0;
                    break;
                }
                ++emptyIndex;
                ++emptySlot;
            } while (emptyIndex < 16);
        }
    nextPeer:
        ++peerIndex;
    } while (peerIndex < list->bssDescCount);
}

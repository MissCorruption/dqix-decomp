#include <globaldefs.h>
#include "std_library_functions.h"

struct ScannedStation {
    unsigned int ssidLength;
    unsigned char ssid[0x20];
    char padding24[4];
    unsigned char bssid[6];
    unsigned short security;
};

struct StationList {
    unsigned int count;
    ScannedStation entries[1];
};

extern "C" int func_02001aec(const void* first, const void* second, unsigned int size);
extern char data_ov031_0224b180[];

// USA: func_ov031_0221fd18
extern "C" THUMB int func_ov031_0221fd18(StationList* saved, StationList* scanned, unsigned int* index) {
    int found = 0;
    int result = 0;
    int savedDefault;
    int scannedDefault;
    unsigned int count;
    unsigned int i;
    unsigned int j;
    ScannedStation* entry = saved->entries;
    ScannedStation* other = scanned->entries;

    for (i = 0; i < saved->count; i++) {
        char name[0x22] = {0};
        memcpy(name, entry->ssid, 0x20);
        name[entry->ssidLength] = 0;
        count = scanned->count;
        j = 0;
        if (j < count) {
            unsigned int length = entry->ssidLength;
            do {
                if (length == 0 || length > 0x20) {
                    break;
                }
                if (length == 1 && (entry->ssid[0] == 0 || entry->ssid[0] == ' ')) {
                    break;
                }
                if (func_02001aec(name, other->ssid, strlen(name)) == 0 &&
                    func_02001aec(entry->bssid, other->bssid, 6) == 0 &&
                    entry->security != other->security && entry->security == 0) {
                    found = 1;
                    break;
                }
                other++;
            } while (++j < count);
        }
        if (found) {
            break;
        }
        entry++;
        other = scanned->entries;
    }
    if (!found) {
        char name[0x22] = {0};
        savedDefault = 0;
        scannedDefault = 0;
        entry = saved->entries;
        other = scanned->entries;
        for (j = 0; j < scanned->count; j++) {
            memcpy(name, other->ssid, 0x20);
            name[other->ssidLength] = 0;
            if (func_02001aec(name, data_ov031_0224b180, strlen(data_ov031_0224b180)) == 0 &&
                other->security == 0) {
                scannedDefault = 1;
                break;
            }
            other++;
        }
        for (i = 0; i < saved->count; i++) {
            memcpy(name, entry->ssid, 0x20);
            name[entry->ssidLength] = 0;
            if (strlen(name) == strlen(data_ov031_0224b180) &&
                func_02001aec(name, data_ov031_0224b180, strlen(data_ov031_0224b180)) == 0 &&
                entry->security == 0) {
                savedDefault = 1;
                break;
            }
            entry++;
        }
        if (savedDefault && !scannedDefault) {
            found = 1;
        }
    }
    if (found) {
        *index = i;
        result = 1;
    }
    return result;
}

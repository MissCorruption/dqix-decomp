#include <globaldefs.h>

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif
#include "NitroSDK/BiosData.h"
#include "NitroSDK/Memory.h"
#include "NitroSDK/Interrupts.h"
#include "NitroSDK/Cache.h"

struct AuthenticationIds02217604 {
    unsigned long long primary;
    unsigned long long fallback;
    unsigned short token;
    unsigned short randomHistory;
};
struct OwnerProfile02217604 {
    unsigned char language;
    unsigned char favoriteColor;
    unsigned char birthMonth;
    unsigned char birthDay;
    unsigned short nickname[11];
    unsigned short nicknameLength;
    unsigned short comment[27];
    unsigned short commentLength;
};
struct RtcDate02217604 {
    unsigned long year;
    unsigned long month;
    unsigned long day;
    int week;
};
struct RtcTime02217604 {
    unsigned long hour;
    unsigned long minute;
    unsigned long second;
};
struct IdentityReport02217604 {
    char identifier[14];
    char token[7];
    char gameCode[4];
    char gameCodeTerminator;
    char makerCode[2];
    char makerCodeTerminator;
    char connectionType;
    char connectionTypeTerminator;
    char macAddress[13];
    char language[3];
    char birthday[5];
    char timestamp[13];
    char accessPointAddress[13];
    char ssid[33];
    char accessPointInfo[14];
    unsigned short nickname[11];
};
int VariadicForward020c7170(char*, unsigned long, const char*, ...);
int VariadicForward020c7130(char*, const char*, ...);
extern "C" void func_020c9be0(void);
extern "C" void CopyFrom027ffcf4_020c99ac(unsigned char*);
extern "C" void func_020c99c8(void*);
int GetOrInitStoredValueAt0x2c_020cf25c(void*, void*);
extern "C" unsigned char* func_ov031_0220f040(void);
extern "C" unsigned char* func_ov031_0220f084(unsigned short*);
extern "C" unsigned char func_ov031_02213024(void);
int CopyMatchingTierData_02213054(void*);
extern char data_ov031_02249c84[];
extern char data_ov031_02249c8c[];
extern char data_ov031_02249c94[];
extern char data_ov031_02249c9c[];
extern char data_ov031_02249ca8[];
extern char data_ov031_02249cc4[];

// USA: func_ov031_02217604
extern "C" ARM int func_ov031_02217604(IdentityReport02217604* report, const AuthenticationIds02217604* ids) {
    OwnerProfile02217604 owner;
    RtcDate02217604 date;
    RtcTime02217604 time;
    unsigned char mac[6];
    unsigned short ssidLength;
    VectorizedMemset(report, 0, sizeof(*report));
    if (ids->primary != 0) {
        VariadicForward020c7170(report->identifier, 14, data_ov031_02249c84, ids->primary);
    } else {
        VariadicForward020c7170(report->identifier, 14, data_ov031_02249c84, ids->fallback);
    }
    VariadicForward020c7170(report->token, 7, data_ov031_02249c8c, ids->token);
    const unsigned char* gameCode = (const unsigned char*)((const CartridgeHeader*)BIOS_ADDR_CARTRIDGE_HEADER)->gameCode;
    const unsigned char* makerCode = (const unsigned char*)((const CartridgeHeader*)BIOS_ADDR_CARTRIDGE_HEADER)->makerCode;
    if (gameCode[0] == 0) {
        func_020c9be0();
    }
    VectorizedInvertedMemcpy(gameCode, report->gameCode, 4);
    if (makerCode[0] == 0) {
        func_020c9be0();
    }
    VectorizedInvertedMemcpy(makerCode, report->makerCode, 2);
    report->connectionType = '0';
    CopyFrom027ffcf4_020c99ac(mac);
    signed long macIndex = 0;
    unsigned char* macByte = mac;
    char* macText = report->macAddress;
    do {
        VariadicForward020c7130(macText, data_ov031_02249c94, *macByte);
        ++macByte;
        ++macIndex;
        macText += 2;
    } while (macIndex < 6);
    func_020c99c8(&owner);
    if (owner.language >= 8) {
        owner.language = 1;
    }
    VariadicForward020c7170(report->language, 3, data_ov031_02249c94, owner.language);
    VectorizedInvertedMemcpy(owner.nickname, report->nickname, 20);
    VariadicForward020c7170(report->birthday, 5, data_ov031_02249c9c, owner.birthMonth, owner.birthDay);
    if (GetOrInitStoredValueAt0x2c_020cf25c(&date, &time) != 0) {
        return 0;
    }
    VariadicForward020c7170(report->timestamp, 13, data_ov031_02249ca8,
        date.year, date.month, date.day, time.hour, time.minute, time.second);
    unsigned long interruptState = DisableIRQInterrupts();
    unsigned char* accessPoint = func_ov031_0220f040();
    InvalidateDataCacheRange(accessPoint, 6);
    if (accessPoint == 0) {
        SetIRQInterruptState(interruptState);
        return 0;
    }
    char* accessPointText = report->accessPointAddress;
    signed long accessPointIndex = 0;
    do {
        VariadicForward020c7130(accessPointText, data_ov031_02249c94, accessPoint[accessPointIndex]);
        ++accessPointIndex;
        accessPointText += 2;
    } while (accessPointIndex < 6);
    unsigned char tier = func_ov031_02213024();
    if (tier == 0xff || tier > 99) {
        tier = 99;
    }
    VariadicForward020c7170(report->accessPointInfo, 14, data_ov031_02249cc4, tier);
    unsigned char* ssid = func_ov031_0220f084(&ssidLength);
    InvalidateDataCacheRange(ssid, 32);
    if (ssid == 0) {
        SetIRQInterruptState(interruptState);
        return 0;
    }
    VectorizedInvertedMemcpy(ssid, report->ssid, 32);
    CopyMatchingTierData_02213054(report->accessPointInfo + 3);
    SetIRQInterruptState(interruptState);
    return 1;
}

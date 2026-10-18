#include <globaldefs.h>
#include "std_library_functions.h"

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

int VariadicForward020c7170(char* destination, unsigned long capacity, const char* format, ...);
extern "C" int func_ov031_02218604(void* obj, const char* key, void* val, int len);
extern "C" int func_ov031_02218528(void* obj, const char* key, const char* val);
extern "C" int func_02005aa8(void* s);

extern const char data_ov031_02249cd4[];
extern const char data_ov031_02249ce0[];
extern const char data_ov031_02249ce8[];
extern const char data_ov031_02249cf0[];
extern const char data_ov031_02249cf8[];
extern const char data_ov031_02249d00[];
extern const char data_ov031_02249d08[];
extern const char data_ov031_02249d10[];
extern const char data_ov031_02249d18[];
extern const char data_ov031_02249d20[];
extern const char data_ov031_02249d28[];
extern const char data_ov031_02249d30[];
extern const char data_ov031_02249d38[];
extern const char data_ov031_02249d40[];
extern const char data_ov031_02249d48[];
extern const char data_ov031_02249d50[];
extern const char data_ov031_02249d68[];
extern const char data_ov031_02249d74[];

// USA: func_ov031_022178b4
extern "C" ARM int func_ov031_022178b4(void* obj, IdentityReport02217604* report, int flag) {
    char buf[0x24];
    VariadicForward020c7170(buf, 0x21, data_ov031_02249cd4, 0x3, 1);
    if (func_ov031_02218604(obj, data_ov031_02249ce0, buf, strlen(buf)) != 0) return 0;
    if (func_ov031_02218604(obj, data_ov031_02249ce8, report->identifier, strlen(report->identifier)) != 0) return 0;
    if (func_ov031_02218604(obj, data_ov031_02249cf0, report->token, strlen(report->token)) != 0) return 0;
    if (func_ov031_02218604(obj, data_ov031_02249cf8, report->accessPointAddress, strlen(report->accessPointAddress)) != 0) return 0;
    if (func_ov031_02218604(obj, data_ov031_02249d00, report->accessPointInfo, strlen(report->accessPointInfo)) != 0) return 0;
    if (func_ov031_02218604(obj, data_ov031_02249d08, report->gameCode, strlen(report->gameCode)) != 0) return 0;
    if (func_ov031_02218604(obj, data_ov031_02249d10, report->makerCode, strlen(report->makerCode)) != 0) return 0;
    if (func_ov031_02218604(obj, data_ov031_02249d18, &report->connectionType, strlen(&report->connectionType)) != 0) return 0;
    if (func_ov031_02218604(obj, data_ov031_02249d20, report->macAddress, strlen(report->macAddress)) != 0) return 0;
    if (func_ov031_02218604(obj, data_ov031_02249d28, report->language, strlen(report->language)) != 0) return 0;
    if (func_ov031_02218604(obj, data_ov031_02249d30, report->birthday, strlen(report->birthday)) != 0) return 0;
    if (func_ov031_02218604(obj, data_ov031_02249d38, report->timestamp, strlen(report->timestamp)) != 0) return 0;
    if (func_ov031_02218604(obj, data_ov031_02249d40, report->nickname, func_02005aa8(report->nickname)*2) != 0) return 0;
    if (flag == 1) {
        if (func_ov031_02218604(obj, data_ov031_02249d48, report->ssid, strlen(report->ssid)) != 0) return 0;
    }
    VariadicForward020c7170(buf, 0x21, data_ov031_02249d50, 0x3, 1);
    if (func_ov031_02218528(obj, data_ov031_02249d68, buf) != 0) return 0;
    return func_ov031_02218528(obj, data_ov031_02249d74, report->gameCode) == 0;
}

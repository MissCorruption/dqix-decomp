#include <globaldefs.h>

struct DWCAuthWiFiId {
    unsigned long long uId;
    unsigned long long notAttestedId;
    unsigned short pass;
    unsigned short randomHistory;
};
struct RTCDate { unsigned int year; unsigned int month; unsigned int day; unsigned int week; };
struct RTCTime { unsigned int hour; unsigned int minute; unsigned int second; };

extern "C" void func_ov031_0221ae00(DWCAuthWiFiId* id);
extern "C" void func_020cf020(void);
extern "C" int func_020cf0fc(int a);
extern "C" int func_020cf1a8(int a);
extern "C" long long func_020cf990(int arg0, unsigned char* arg1);
int Is64BitTimerInitialized();
unsigned long long GetCurrentTimestamp(void);
extern "C" void func_020c99ac(void* dst);
extern "C" unsigned long long func_ov031_0221be64(unsigned int rand, unsigned int mac, unsigned char flag, unsigned int kind);

struct MATHRandContext16 { unsigned int x; unsigned int mul; unsigned int add; };

static inline void MATH_InitRand16(MATHRandContext16* context, unsigned int seed) {
    context->x = seed;
    context->mul = 1566083941;
    context->add = 2531011;
}
static inline unsigned short MATH_Rand16(MATHRandContext16* context, unsigned short max) {
    context->x = context->mul * context->x + context->add;
    if (max) {
        return (unsigned short)(((context->x >> 16) * max) >> 16);
    } else {
        return (unsigned short)(context->x >> 16);
    }
}

static inline int RTC_GetDate(RTCDate* date) { return func_020cf0fc((int)date); }
static inline int RTC_GetTime(RTCTime* time) { return func_020cf1a8((int)time); }
static inline long long RTC_ConvertDateTimeToSecond(const RTCDate* date, const RTCTime* time) {
    return func_020cf990((int)date, (unsigned char*)time);
}

// USA: func_ov031_0221c258
extern "C" ARM int func_ov031_0221c258(DWCAuthWiFiId* id) {
    unsigned char mac[6] = {0, 0, 0, 0, 0, 0};
    RTCDate date;
    RTCTime time;
    long long sec;
    MATHRandContext16 rand;
    unsigned char flag;
    unsigned int macLow;

    func_ov031_0221ae00(id);
    func_020cf020();
    if (RTC_GetDate(&date) != 0) return 0;
    if (RTC_GetTime(&time) != 0) return 0;
    sec = RTC_ConvertDateTimeToSecond(&date, &time);
    if (sec < 0) return 0;
    if (Is64BitTimerInitialized()) sec += (unsigned int)GetCurrentTimestamp;
    func_020c99ac(mac);
    flag = (unsigned int)(mac[0] << 16 | mac[1] << 8 | mac[2]) != 0x9bf ? 1 : 0;
    macLow = mac[3] << 16 | mac[4] << 8 | mac[5];
    MATH_InitRand16(&rand, (unsigned int)sec);
    id->pass = MATH_Rand16(&rand, 1000);
    id->notAttestedId = 0;
    while (id->notAttestedId == 0) {
        MATH_Rand16(&rand, 0);
        while (rand.x == 0 || id->randomHistory == (unsigned short)rand.x) MATH_Rand16(&rand, 0);
        id->randomHistory = (unsigned short)rand.x;
        id->notAttestedId = func_ov031_0221be64(id->randomHistory, macLow, flag, 0);
    }
    return 1;
}

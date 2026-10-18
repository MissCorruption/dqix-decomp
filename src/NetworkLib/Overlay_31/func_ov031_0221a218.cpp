#include <globaldefs.h>

extern "C" unsigned int strlen(const char* s);
extern "C" char* strcpy(char* dst, const char* src);
extern "C" int strcmp(const char* a, const char* b);
extern "C" int func_02005a94(const char* s);
int GetOrInitStoredValueAt0x2c_020cf25c(void* date, void* time);
long long ComputeEntryByteOffset_020cf990(int date, unsigned char* time);

struct RtcDate {
    unsigned int year;
    unsigned int month;
    unsigned int day;
    unsigned int week;
};

struct RtcTime {
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
};

struct ServerTimeState {
    int valid;
    long long localTime;
    long long offset;
};

extern char data_ov031_0224a224[];
extern const char* data_ov031_0224a1f4[12];
extern ServerTimeState data_ov031_0224e688;
extern int data_020f3390;

// USA: func_ov031_0221a218
extern "C" ARM int func_ov031_0221a218(const char* str) {
    RtcDate date;
    RtcTime time;
    char buf[32];
    long long localTime;
    long long serverTime;
    int i;

    if (strlen(str) != strlen(data_ov031_0224a224) || str[7] != ' ' || str[11] != ' ' || str[16] != ' '
        || str[19] != ':' || str[22] != ':' || str[25] != ' ') {
        goto fail;
    }
    if (GetOrInitStoredValueAt0x2c_020cf25c(&date, &time) != 0) {
        goto fail;
    }
    localTime = ComputeEntryByteOffset_020cf990((unsigned int)&date, (unsigned char*)&time);
    if (localTime == -1) {
        goto fail;
    }

    strcpy(buf, str);
    buf[7] = 0;
    buf[11] = 0;
    buf[16] = 0;
    buf[19] = 0;
    buf[22] = 0;
    buf[25] = 0;

    data_020f3390 = 0;
    date.year = func_02005a94(&buf[12]);
    if (data_020f3390 == 0x22) {
        goto fail;
    }
    date.year -= 2000;

    date.month = 13;
    i = 0;
    do {
        if (strcmp(data_ov031_0224a1f4[i], &buf[8]) == 0) {
            date.month = i + 1;
            break;
        }
    } while (++i < 12);
    if (date.month > 12) {
        goto fail;
    }

    data_020f3390 = 0;
    date.day = func_02005a94(&buf[5]);
    if (data_020f3390 == 0x22) {
        goto fail;
    }
    data_020f3390 = 0;
    time.hour = func_02005a94(&buf[17]);
    if (data_020f3390 == 0x22) {
        goto fail;
    }
    data_020f3390 = 0;
    time.minute = func_02005a94(&buf[20]);
    if (data_020f3390 == 0x22) {
        goto fail;
    }
    data_020f3390 = 0;
    time.second = func_02005a94(&buf[23]);
    if (data_020f3390 == 0x22) {
        goto fail;
    }

    serverTime = ComputeEntryByteOffset_020cf990((int)&date, (unsigned char*)&time);
    if (serverTime == -1) {
        goto fail;
    }
    data_ov031_0224e688.offset = localTime - serverTime;
    data_ov031_0224e688.localTime = localTime;
    data_ov031_0224e688.valid = 1;
    return 1;
fail:
    return 0;
}

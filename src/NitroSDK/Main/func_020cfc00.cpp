#include <globaldefs.h>

struct RTCDate_020cfc00 {
    unsigned int year;
    unsigned int month;
    unsigned int day;
    int week;
};

// USA: func_020cfc00  (NitroSDK: RTC_GetDayOfWeek)
extern "C" ARM int func_020cfc00(struct RTCDate_020cfc00* date) {
    int cent;
    int year = (int)(2000 + date->year);
    int month = (int)date->month;
    int day = (int)date->day;

    month -= 2;

    if (month < 1) {
        month += 12;
        --year;
    }

    cent = year / 100;
    year %= 100;
    return ((26 * month - 2) / 10 + day + year + year / 4 + cent / 4 + 5 * cent) % 7;
}

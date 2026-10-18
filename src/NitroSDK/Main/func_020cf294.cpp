#include <globaldefs.h>

typedef void (*RTCCallback)(int result, void* arg);
typedef void (*RTCInterrupt)(void);

struct RTCDate {
    unsigned int year;
    unsigned int month;
    unsigned int day;
    int week;
};
struct RTCTime {
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
};
struct RTCAlarmParam {
    int week;
    unsigned int hour;
    unsigned int minute;
    unsigned int enable;
};

struct RTCRawDate {
    unsigned int year : 8;
    unsigned int month : 5;
    unsigned int dummy0 : 3;
    unsigned int day : 6;
    unsigned int dummy1 : 2;
    unsigned int week : 3;
    unsigned int dummy2 : 5;
};
struct RTCRawTime {
    unsigned int hour : 6;
    unsigned int afternoon : 1;
    unsigned int dummy0 : 1;
    unsigned int minute : 7;
    unsigned int dummy1 : 1;
    unsigned int second : 7;
    unsigned int dummy2 : 9;
};
struct RTCRawStatus1 {
    unsigned short reset : 1;
    unsigned short format : 1;
    unsigned short dummy0 : 2;
    unsigned short intr1 : 1;
    unsigned short intr2 : 1;
    unsigned short bld : 1;
    unsigned short poc : 1;
    unsigned short dummy1 : 8;
};
struct RTCRawStatus2 {
    unsigned short intr_mode : 4;
    unsigned short dummy0 : 2;
    unsigned short intr2_mode : 1;
    unsigned short test : 1;
    unsigned short dummy1 : 8;
};
struct RTCRawAlarm {
    unsigned int week : 3;
    unsigned int dummy0 : 4;
    unsigned int we : 1;
    unsigned int hour : 6;
    unsigned int afternoon : 1;
    unsigned int he : 1;
    unsigned int minute : 7;
    unsigned int me : 1;
    unsigned int dummy2 : 8;
};
union RTCRawData {
    struct {
        RTCRawDate date;
        RTCRawTime time;
    } t;
    struct {
        RTCRawStatus1 status1;
        RTCRawStatus2 status2;
        RTCRawAlarm alarm;
    } a;
};

union RTCBuffer {
    RTCDate* date;
    RTCTime* time;
    RTCAlarmParam* alarm;
    int* status;
};

struct RTCWork {
    unsigned int lock;
    RTCCallback callback;
    RTCBuffer buffer[2];
    void* callbackArg;
    unsigned int sequence;
    unsigned int index;
    RTCInterrupt interrupt;
    int commonResult;
};

struct RtcStatics_02111818 {
    unsigned char pad0[0xc];
    RTCWork work;
};
extern RtcStatics_02111818 data_02111818;

int BcdToBinary_020cf7e4(unsigned int bcd);
extern "C" int func_020cfc00(RTCDate* date);
int CheckEntry5For0x27_020cf8ac(void);

#define RTC_BUF ((RTCRawData*)0x027ffde8)

// USA: func_020cf294
extern "C" ARM void func_020cf294(int tag, unsigned int data, int err) {
    int result;
    int pxiresult;
    unsigned char command;
    RTCCallback cb;

    if (err) {
        if (data_02111818.work.index) {
            data_02111818.work.index = 0;
        }
        if (data_02111818.work.lock != 0) {
            data_02111818.work.lock = 0;
        }
        if (data_02111818.work.callback) {
            cb = data_02111818.work.callback;
            data_02111818.work.callback = 0;
            cb(6, data_02111818.work.callbackArg);
        }
        return;
    }

    command = (unsigned char)((data & 0x7f00) >> 8);
    pxiresult = (int)(data & 0xff);

    if (command == 0x30) {
        if (data_02111818.work.interrupt) {
            data_02111818.work.interrupt();
        }
        return;
    }

    if (pxiresult == 0) {
        result = 0;
        switch (data_02111818.work.sequence) {
        case 0: {
            RTCDate* pDst = data_02111818.work.buffer[0].date;
            RTCRawDate* pSrc = &RTC_BUF->t.date;

            pDst->year = BcdToBinary_020cf7e4(pSrc->year);
            pDst->month = BcdToBinary_020cf7e4(pSrc->month);
            pDst->day = BcdToBinary_020cf7e4(pSrc->day);
            pDst->week = func_020cfc00(pDst);
        } break;
        case 1: {
            RTCTime* pDst = data_02111818.work.buffer[0].time;
            RTCRawTime* pSrc = &RTC_BUF->t.time;

            pDst->hour = BcdToBinary_020cf7e4(pSrc->hour);
            pDst->minute = BcdToBinary_020cf7e4(pSrc->minute);
            pDst->second = BcdToBinary_020cf7e4(pSrc->second);
        } break;
        case 2: {
            RTCDate* pDst = data_02111818.work.buffer[0].date;
            RTCRawDate* pSrc = &RTC_BUF->t.date;

            pDst->year = BcdToBinary_020cf7e4(*(unsigned int*)pSrc & 0xff);
            pDst->month = BcdToBinary_020cf7e4(pSrc->month);
            pDst->day = BcdToBinary_020cf7e4(pSrc->day);
            pDst->week = func_020cfc00(pDst);
        }
            {
                RTCTime* pDst = data_02111818.work.buffer[1].time;
                RTCRawTime* pSrc = &RTC_BUF->t.time;

                pDst->hour = BcdToBinary_020cf7e4(pSrc->hour);
                pDst->minute = BcdToBinary_020cf7e4(pSrc->minute);
                pDst->second = BcdToBinary_020cf7e4(pSrc->second);
            }
            break;
        case 3:
        case 4:
        case 5:
            break;
        case 6: {
            int* pDst = data_02111818.work.buffer[0].status;
            RTCRawStatus2* pSrc = &RTC_BUF->a.status2;

            switch (pSrc->intr_mode) {
            case 4:
                *pDst = 1;
                break;
            default:
                *pDst = 0;
            }
        } break;
        case 7: {
            int* pDst = data_02111818.work.buffer[0].status;
            RTCRawStatus2* pSrc = &RTC_BUF->a.status2;

            if (pSrc->intr2_mode) {
                *pDst = 1;
            } else {
                *pDst = 0;
            }
        } break;
        case 8: {
            RTCAlarmParam* pDst = data_02111818.work.buffer[0].alarm;
            RTCRawAlarm* pSrc = &RTC_BUF->a.alarm;

            pDst->week = (int)pSrc->week;
            pDst->hour = BcdToBinary_020cf7e4(pSrc->hour);
            pDst->minute = BcdToBinary_020cf7e4(pSrc->minute);
            pDst->enable = 0;
            if (pSrc->we)
                pDst->enable += 1;
            if (pSrc->he)
                pDst->enable += 2;
            if (pSrc->me)
                pDst->enable += 4;
        } break;
        case 9:
            if (data_02111818.work.index == 0) {
                RTCRawStatus2* pSrc = &RTC_BUF->a.status2;

                if (*data_02111818.work.buffer[0].status == 1) {
                    if (pSrc->intr_mode != 4) {
                        data_02111818.work.index++;
                        pSrc->intr_mode = 4;
                        if (!CheckEntry5For0x27_020cf8ac()) {
                            data_02111818.work.index = 0;
                            result = 3;
                        }
                    }
                } else {
                    if (pSrc->intr_mode != 0) {
                        data_02111818.work.index++;
                        pSrc->intr_mode = 0;
                        if (!CheckEntry5For0x27_020cf8ac()) {
                            data_02111818.work.index = 0;
                            result = 3;
                        }
                    }
                }
            } else {
                data_02111818.work.index = 0;
            }
            break;
        case 10:
            if (data_02111818.work.index == 0) {
                RTCRawStatus2* pSrc = &RTC_BUF->a.status2;

                if (*data_02111818.work.buffer[0].status == 1) {
                    if (!pSrc->intr2_mode) {
                        data_02111818.work.index++;
                        pSrc->intr2_mode = 1;
                        if (!CheckEntry5For0x27_020cf8ac()) {
                            data_02111818.work.index = 0;
                            result = 3;
                        }
                    }
                } else {
                    if (pSrc->intr2_mode) {
                        data_02111818.work.index++;
                        pSrc->intr2_mode = 0;
                        if (!CheckEntry5For0x27_020cf8ac()) {
                            data_02111818.work.index = 0;
                            result = 3;
                        }
                    }
                }
            } else {
                data_02111818.work.index = 0;
            }
            break;
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            break;
        default:
            result = 4;
            data_02111818.work.index = 0;
        }
    } else {
        data_02111818.work.index = 0;

        switch (pxiresult) {
        case 1:
            result = 4;
            break;
        case 2:
            result = 5;
            break;
        case 3:
            result = 1;
            break;
        case 4:
        default:
            result = 6;
        }
    }

    if (data_02111818.work.index == 0) {
        if (data_02111818.work.lock != 0) {
            data_02111818.work.lock = 0;
        }
        if (data_02111818.work.callback) {
            cb = data_02111818.work.callback;
            data_02111818.work.callback = 0;
            cb(result, data_02111818.work.callbackArg);
        }
    }
}

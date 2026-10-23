#include <globaldefs.h>
#if defined(jpn)
#define ACTIVE_FLAG 0x17f1
#define TIMER_FLAG 0x17f0
#define TIMER_COUNT 0x178b
#else
#define ACTIVE_FLAG 0x19c1
#define TIMER_FLAG 0x19c0
#define TIMER_COUNT 0x195d
#endif

// USA: func_020658ac
extern "C" ARM void func_020658ac(unsigned char* arg0, unsigned int arg1) {
    unsigned char var0;
    if (arg0[ACTIVE_FLAG] != 0) {
        if (arg0[TIMER_FLAG] == 0) {
            arg0[TIMER_FLAG] = 1;
            arg0[TIMER_COUNT] = 0x1e;
        }
    }
    if (arg0[TIMER_FLAG] == 0) return;
    var0 = arg0[TIMER_COUNT];
    if (var0 <= arg1) {
        if (arg0[ACTIVE_FLAG] != 0) {
            arg0[TIMER_COUNT] = var0 + (0x1e - arg1);
        } else {
            arg0[TIMER_COUNT] = 0;
            arg0[TIMER_FLAG] = 0;
        }
    } else {
        arg0[TIMER_COUNT] = var0 - arg1;
    }
}

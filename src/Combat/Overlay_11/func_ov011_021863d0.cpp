#include <globaldefs.h>

// USA: func_ov011_021863d0
extern "C" ARM int func_ov011_021863d0(int priority) {
    volatile unsigned short* bg3cnt = (volatile unsigned short*)0x400000e;
    int value = (*bg3cnt & ~3) | priority;
    *bg3cnt = value;
    return value;
}

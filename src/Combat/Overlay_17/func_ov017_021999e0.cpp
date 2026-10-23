#include <globaldefs.h>

// USA: func_ov017_021999e0
extern "C" ARM int func_ov017_021999e0(int priority) {
    volatile unsigned short* bg2cnt = (volatile unsigned short*)0x400000c;
    int value = (*bg2cnt & ~3) | priority;
    *bg2cnt = value;
    return value;
}

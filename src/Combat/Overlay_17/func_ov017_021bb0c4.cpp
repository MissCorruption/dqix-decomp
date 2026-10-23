#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)
static const int kShift=4;
#else
static const int kShift=0;
#endif

// USA: func_ov017_021bb0c4
extern "C" ARM void func_ov017_021bb0c4(unsigned char* arg0) {
    arg0[0xfc - kShift] = 0;
    *(unsigned short*)(arg0 + 0x11a - kShift) = 0;
    memset(arg0 + 0x13c - kShift, 0, 0x12);
    memset(arg0 + 0x150 - kShift, 0, 0xa);
    *(int*)(arg0 + 0x15c - kShift) = 0;
    arg0[0xfe - kShift] = 0;
}

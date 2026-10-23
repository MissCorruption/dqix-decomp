#include <globaldefs.h>

extern "C" int func_ov031_0220bb24(unsigned short* arg0, int arg1);

// USA: func_ov031_0220bb4c
extern "C" ARM int func_ov031_0220bb4c(unsigned short* arg0, int arg1) {
    if (arg0[arg1 - 1] & 0x8000) {
        return -1;
    }
    return func_ov031_0220bb24(arg0, arg1) != 0;
}

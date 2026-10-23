#include <globaldefs.h>

extern "C" ARM void func_ov006_0215745c(unsigned int arg0, unsigned char* arg1, signed char* arg2)
{
    *arg2 = -1;
    switch (arg0) {
    case 0x48: *arg2 = 0; return;
    case 0x49: *arg2 = 1; return;
    case 0x4a: *arg2 = 2; return;
    case 0x4b: *arg2 = 3; return;
    case 0x4c: *arg2 = 4; return;
    case 0x4d: *arg2 = 5; return;
    case 0x4e: *arg2 = 6; return;
    case 0x4f: *arg2 = 7; return;
    case 0x50: *arg2 = 8; return;
    case 0x51: *arg2 = 9; return;
    case 0x52: *arg2 = 10; return;
    case 0x53: *arg2 = 11; return;
    case 0x40: *arg2 = 12; return;
    case 0x41: *arg1 = 4; return;
    case 0x42: *arg1 = 2; return;
    case 0x43: *arg1 = 5; return;
    case 0x44: *arg1 = 3; return;
    case 0x45: *arg1 = 6; return;
    }
}

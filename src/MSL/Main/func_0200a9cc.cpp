#include <globaldefs.h>

// USA: func_0200a9cc
extern "C" ARM unsigned char func_0200a9cc(unsigned long long arg0) {
    arg0 = arg0 - ((arg0 >> 1) & 0x5555555555555555ULL);
    arg0 = (arg0 & 0x3333333333333333ULL) + ((arg0 >> 2) & 0x3333333333333333ULL);
    arg0 = (arg0 + (arg0 >> 4)) & 0x0f0f0f0f0f0f0f0fULL;
    arg0 = arg0 + (arg0 >> 8);
    arg0 = arg0 + (arg0 >> 16);
    arg0 = arg0 + (arg0 >> 32);
    return (unsigned char)arg0;
}

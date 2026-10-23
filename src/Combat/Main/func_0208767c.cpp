#include <globaldefs.h>

#include "Util/Random.h"

extern "C" int func_0208810c(unsigned char* arg0);
extern "C" void func_02088150(void* arg0);

// USA: func_0208767c
extern "C" ARM int func_0208767c(unsigned char* arg0, struct Random* arg1) {
    unsigned char var0 = arg0[0x24];
    if (var0 >= 4) return -2;
    if (var0 == 3) {
        if (arg1 == 0) arg1 = GetBTRandom();
        if (NextRandomMax(arg1, 2) >= 1) return -1;
    }
    if (++arg0[0x24] >= 4) {
        if (func_0208810c(arg0)) {
            arg0[0x24] = 4;
            func_02088150(arg0);
        }
    }
    return arg0[0x24];
}

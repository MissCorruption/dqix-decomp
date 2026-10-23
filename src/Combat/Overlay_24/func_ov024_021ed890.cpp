#include <globaldefs.h>
#include "Util/Random.h"

// USA: func_ov024_021ed890
extern "C" ARM int func_ov024_021ed890(struct Random** rngPtr, int* maxAndFlag, short* table) {
    int idx = NextRandomMax(*rngPtr, *maxAndFlag);
    short val = table[idx];
    table[0] = val;
    *maxAndFlag = 1;
    return 1;
}

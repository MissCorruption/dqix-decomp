#include <globaldefs.h>
#include "Util/Random.h"

// USA: func_ov000_0215faa4
extern "C" ARM void func_ov000_0215faa4(struct Random* arg0, unsigned int arg1, unsigned int arg2) {
    SeedRandom32(arg0, arg1, arg2);
}

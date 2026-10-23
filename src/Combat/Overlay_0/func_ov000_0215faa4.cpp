#include <globaldefs.h>
#include "Util/Random.h"

// USA: func_ov000_0215faa4
extern "C" ARM void func_ov000_0215faa4(struct Random* random, unsigned int stateHi, unsigned int stateLo) {
    SeedRandom32(random, stateHi, stateLo);
}

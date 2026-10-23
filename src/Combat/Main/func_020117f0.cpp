#include <globaldefs.h>

#include "Combat/BattleSkillEligibility.h"

extern "C" int func_0201b588(int);

extern "C" unsigned short *func_02012fe4(void);

// USA: func_020117f0
extern "C" ARM int func_020117f0(GameState *) {
    return func_0201b588((int) (*func_02012fe4()));
}

#include <globaldefs.h>
#include "Resource/GameResources.h"

struct GameResources;

unsigned int IsBrightnessTransitionActive(GameResources*);
extern "C" unsigned int func_ov011_02184c68(unsigned int, unsigned int);

// USA: func_ov011_02186e30  (semantic: Trans_02186e30)
extern "C" ARM unsigned int func_ov011_02186e30(unsigned int arg0) {
    func_ov011_02184c68(arg0, IsBrightnessTransitionActive(GetGameResources()));
    return 1;
}

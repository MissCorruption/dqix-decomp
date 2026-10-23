// USA: func_ov006_021553a8
#include <globaldefs.h>
#include "Resource/AlchemyPot.h"

extern "C" ARM void func_ov006_021553a8(void* object) {
    AlchemyPot* pot = (AlchemyPot*)object;
    pot->flags_ |= 8;
}

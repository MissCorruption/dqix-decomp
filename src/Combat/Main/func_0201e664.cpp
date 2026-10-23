#include <globaldefs.h>
#include "World/ZoneFeatures.h"

// USA: func_0201e664
extern "C" ARM Struct_020134e0::Struct_02018300* func_0201e664(Struct_020134e0* arg0, int arg1) {
    if (arg1 < 0 || arg0->unknown_28_ <= arg1) return NULL;
    return &arg0->unknown_24_[arg1];
}

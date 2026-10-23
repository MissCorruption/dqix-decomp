#include <globaldefs.h>
#include "World/ZoneFeatures.h"

// USA: func_0201e548
extern "C" ARM void* func_0201e548(Struct_020134e0* arg0, int arg1) {
    if (arg1 < 0 || arg0->unknown_1c_ <= arg1) {
        return NULL;
    }
    return &arg0->unknown_18_[arg1];
}

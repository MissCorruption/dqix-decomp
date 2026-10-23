#include <globaldefs.h>
#include "World/ZoneFeatures.h"

// USA: func_0201e2d8
ARM ZoneFeatures::Opcode64Entry* ZoneFeatures::func_0201e2d8(int index) {
    if (index < 0 || arraySize64_ <= index) {
        return NULL;
    }
    return &entries64_[index];
}

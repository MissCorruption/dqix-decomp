#include <globaldefs.h>
#include "World/ZoneChest.h"

// USA: func_02018c20
extern "C" ARM ZoneFeatures::Opcode6aEntry* func_02018c20(Zone3D* zone, int ordinal) {
    ZoneFeatures::Opcode6aEntry* entry = func_0201e664(&zone->substruct_6c_, 0);
    int count = zone->substruct_6c_.arraySize6a_;
    int i;
    for (i = 0; i < count; i++) {
        if (entry->maybeType == 2) {
            if (ordinal == 0) return entry;
            ordinal--;
        }
        entry++;
    }
    return NULL;
}

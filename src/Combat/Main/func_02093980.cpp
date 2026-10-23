#include <globaldefs.h>

struct NamedRequestRecord {
#if defined(jpn)
    char name[11];
    unsigned char unknownB;
#else
    char name[48];
#endif
    short requestId;
    signed char partySlot;
    unsigned char flags;
};

#include "std_library_functions.h"

// USA: func_02093980
extern "C" ARM void func_02093980(char* storage) {
    NamedRequestRecord* record = reinterpret_cast<NamedRequestRecord*>(storage);
    memset(record->name, 0, sizeof(record->name));
    record->requestId = -1;
    record->partySlot = -1;
    record->flags = 0;
}

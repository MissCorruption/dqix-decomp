#include <globaldefs.h>
#include "Resource/Script.h"

#if defined(jpn)
enum { FIELD_OFFSET = 0x50 };
#else
enum { FIELD_OFFSET = 0x30 };
#endif

struct Variant02030b0c;

extern void* data_02108740[];

// USA: func_0205e05c
ARM int StoreVariantToField0x30_0205e05c(Script::Parameter* p, int) {
    const Script::Parameter* parameters = p;
    *(int*)((char*)data_02108740[1] + FIELD_OFFSET) = parameters[0].ToInt();
    return 1;
}

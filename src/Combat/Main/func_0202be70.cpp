#include <globaldefs.h>
#include "Combat/SearchEntry.h"

struct SearchStruct;
extern "C" int func_0202c1c0(struct SearchStruct* obj, int value);
extern "C" unsigned short func_0202df58(void);

// USA: func_0202be70
extern "C" ARM int func_0202be70(struct SearchStruct* obj, int value) {
    void* entry;
    if (!func_0202c1c0(obj, value)) {
        return 0;
    }
    if (value == *(signed char*)((char*)obj + func_0202df58() + 0x1000 + 0x38)) {
        entry = (char*)obj + 0x7c0;
    } else {
        entry = func_0202c178(obj, value);
    }
    if (entry == NULL) {
        return 0;
    }
    return (((unsigned int)*(unsigned short*)((char*)entry + 0x2) << 0x12) >> 31) != 0;
}

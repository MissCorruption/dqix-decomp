#include <globaldefs.h>
#include "Combat/SearchEntry.h"
#include "Resource/GameResources.h"

extern "C" void* func_0202ae18(void* obj);
extern "C" int func_0202b7d8(int* obj);
extern "C" int func_0202c508(void* obj);
struct SearchStruct;
struct SearchStruct0202c1a4;
extern "C" signed char func_0202c1a4(struct SearchStruct0202c1a4* obj);

struct FlagsByte0xc1_020342ac {
    unsigned char lowBits2 : 2;
};

// USA: func_020342ac
extern "C" ARM int func_020342ac(void* obj) {
    void* thing = func_0202ae18(obj);
    GetGameResources();
    if (!func_0202b7d8((int*)thing)) {
        goto fallback;
    }
    if (!func_0202c508(thing)) {
        goto fallback;
    }
    short field4 = *(short*)((char*)obj + 4);
    if (!func_0202c178((struct SearchStruct*)thing, field4)) {
        goto fallback;
    }
    field4 = *(short*)((char*)obj + 4);
    signed char cur = func_0202c1a4((struct SearchStruct0202c1a4*)thing);
    if (cur == field4) {
        goto fallback;
    }
    FlagsByte0xc1_020342ac* flags = (FlagsByte0xc1_020342ac*)((char*)obj + 0xc1);
    if (!(flags->lowBits2 & 2)) {
        goto fallback;
    }
    field4 = *(short*)((char*)obj + 4);
    SearchEntry0202c178* entry = func_0202c178((struct SearchStruct*)thing, field4);
    return entry->flags.kind;
fallback:
    return *(unsigned char*)((char*)obj + 0xbe);
}

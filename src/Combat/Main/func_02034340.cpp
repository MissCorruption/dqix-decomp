#include <globaldefs.h>
#include "Combat/SearchEntry.h"
#include "Resource/GameResources.h"

extern "C" void* func_0202ae18(void* obj);
extern "C" int func_0202b7d8(int* obj);
struct SearchStruct;

// USA: func_02034340
extern "C" ARM int func_02034340(void* obj) {
    void* thing = func_0202ae18(obj);
    GetGameResources();
    int result = 0;
    if (func_0202b7d8((int*)thing)) {
        short field4 = *(short*)((char*)obj + 4);
        if (func_0202c178((struct SearchStruct*)thing, field4)) {
            field4 = *(short*)((char*)obj + 4);
            void* p = func_0202c178((struct SearchStruct*)thing, field4);
            unsigned int v = *(unsigned short*)((char*)p + 2);
            if ((v << 17) >> 31) result = 1;
        }
    }
    return result;
}

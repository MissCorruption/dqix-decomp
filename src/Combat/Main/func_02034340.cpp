#include <globaldefs.h>
#include "Combat/SearchEntry.h"
#include "Resource/GameResources.h"

extern "C" void* func_0202ae18(void* arg0);
extern "C" int func_0202b7d8(int* arg0);
struct Struct_0202b2f0;

// USA: func_02034340
extern "C" ARM int func_02034340(void* arg0) {
    void* var0 = func_0202ae18(arg0);
    GetGameResources();
    int var1 = 0;
    if (func_0202b7d8((int*)var0)) {
        short var2 = *(short*)((char*)arg0 + 4);
        if (func_0202c178((struct Struct_0202b2f0*)var0, var2)) {
            var2 = *(short*)((char*)arg0 + 4);
            void* var3 = func_0202c178((struct Struct_0202b2f0*)var0, var2);
            unsigned int var4 = *(unsigned short*)((char*)var3 + 2);
            if ((var4 << 17) >> 31) var1 = 1;
        }
    }
    return var1;
}

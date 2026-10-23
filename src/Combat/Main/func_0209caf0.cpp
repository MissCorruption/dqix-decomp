#include <globaldefs.h>
#include "Graphics/LightingManager.h"

extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* arg0);

extern signed char data_020e8ed8[];

// USA: func_0209caf0
extern "C" ARM int func_0209caf0(int arg0) {
    void* var0;
    signed char var1;
    if ((unsigned int)arg0 >= 0x2f) {
        return -1;
    }
    var0 = LightingManager::GetInstance();
    if (*(int*)((char*)var0 + 0x98) == 0) {
        var1 = data_020e8ed8[arg0];
        if (var1 == 3) return 4;
        if (var1 == 5) return 6;
    }
    if (func_0202b7d8((int*)func_0202ae18())) {
        var1 = data_020e8ed8[arg0];
        if (var1 == 0xe) return 0x10;
    }
    return data_020e8ed8[arg0];
}

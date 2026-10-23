#include <globaldefs.h>
#include "Graphics/LightingManager.h"

extern "C" int func_ov017_021d60f4(void*);

// USA: func_ov001_021603b0
extern "C" ARM int func_ov001_021603b0(void* arg0) {
    int* var0 = (int*)LightingManager::GetInstance();
    func_ov017_021d60f4(arg0);
    *(int*)((char*)var0 + 0x90) = 0;
    return 1;
}

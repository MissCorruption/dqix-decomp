#include <globaldefs.h>
#include "World/Object3D.h"
#if defined(jpn)
enum { kRegion3e8 = 0x278, kRegion133c = 0x11cc, kRegionf1c = 0xda0 };
#else
enum { kRegion3e8 = 0x3e8, kRegion133c = 0x133c, kRegionf1c = 0xf1c };
#endif

extern "C" int func_ov003_02173ef4(void* obj);

// USA: func_ov003_0216d5f0
extern "C" ARM void func_ov003_0216d5f0(char* obj) {
    if (*(unsigned char*)(obj + 0x1000 + kRegion3e8) != 0) {
        ((Object3D*)(obj + kRegion133c))->Draw(1);
    }
    if (*(short*)(obj + 0x4) == 5 && *(short*)(obj + 0x6) == 6) {
        func_ov003_02173ef4(obj + kRegionf1c);
    }
}

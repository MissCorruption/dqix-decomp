#include <globaldefs.h>
#include "World/Object3D.h"
#if defined(jpn)
enum { Enum_ov003_0216d5f0_1000 = 0x278, Enum_ov003_0216d5f0_4924 = 0x11cc, Enum_ov003_0216d5f0_3868 = 0xda0 };
#else
enum { Enum_ov003_0216d5f0_1000 = 0x3e8, Enum_ov003_0216d5f0_4924 = 0x133c, Enum_ov003_0216d5f0_3868 = 0xf1c };
#endif

extern "C" int func_ov003_02173ef4(void* arg0);

// USA: func_ov003_0216d5f0
extern "C" ARM void func_ov003_0216d5f0(char* arg0) {
    if (*(unsigned char*)(arg0 + 0x1000 + Enum_ov003_0216d5f0_1000) != 0) {
        ((Object3D*)(arg0 + Enum_ov003_0216d5f0_4924))->Draw(1);
    }
    if (*(short*)(arg0 + 0x4) == 5 && *(short*)(arg0 + 0x6) == 6) {
        func_ov003_02173ef4(arg0 + Enum_ov003_0216d5f0_3868);
    }
}

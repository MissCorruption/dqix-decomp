#include <globaldefs.h>
#include "std_library_functions.h"
#include "NitroSDK/Cache.h"

extern "C" void* func_020a6084(void);
extern "C" int LoadToMainObjStandardPalette(int arg0, int arg1, unsigned int arg2);

// USA: func_ov002_0215af64
extern "C" ARM void func_ov002_0215af64(char* arg0) {
#if defined(jpn)
    enum { Enum_ov002_0215af64_7168 = 0x1a00, Enum_ov002_0215af64_6 = 0xce, Enum_ov002_0215af64_3032 = 0xaa0 };
#else
    enum { Enum_ov002_0215af64_7168 = 0x1c00, Enum_ov002_0215af64_6 = 0x6, Enum_ov002_0215af64_3032 = 0xbd8 };
#endif
    short var0 = *(short*)(arg0 + Enum_ov002_0215af64_7168 + Enum_ov002_0215af64_6);
    void* var1 = *(void**)(arg0 + 0x1000 + Enum_ov002_0215af64_3032);
    unsigned char var2 = (unsigned char)var0;
    int var3 = (int)func_020a6084();
    memcpy(var1, (void*)(var3 + (var2 << 5) + 0x1e), 2);
    CleanInvalidateCacheRange(var1, 2);
    LoadToMainObjStandardPalette((int)var1, 0x11e, 2);
}

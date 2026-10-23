#include <globaldefs.h>
#include "std_library_functions.h"
#include "NitroSDK/Cache.h"

extern "C" void* func_020a6084(void);
extern "C" int LoadToMainObjStandardPalette(int arg0, int arg1, unsigned int arg2);

// USA: func_ov002_0215af64
extern "C" ARM void func_ov002_0215af64(char* p) {
#if defined(jpn)
    enum { regionalBase = 0x1a00, regionalIndex = 0xce, regionalBuf = 0xaa0 };
#else
    enum { regionalBase = 0x1c00, regionalIndex = 0x6, regionalBuf = 0xbd8 };
#endif
    short idx = *(short*)(p + regionalBase + regionalIndex);
    void* buf = *(void**)(p + 0x1000 + regionalBuf);
    unsigned char idxb = (unsigned char)idx;
    int base = (int)func_020a6084();
    memcpy(buf, (void*)(base + (idxb << 5) + 0x1e), 2);
    CleanInvalidateCacheRange(buf, 2);
    LoadToMainObjStandardPalette((int)buf, 0x11e, 2);
}

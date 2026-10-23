#include <globaldefs.h>

extern "C" unsigned short GetMainBGVRAMBanks(void);

// USA: func_ov011_02184c00
extern "C" ARM void func_ov011_02184c00(void* arg0) {
    *(unsigned int*)((char*)arg0 + 0x1d4) = GetMainBGVRAMBanks();
}

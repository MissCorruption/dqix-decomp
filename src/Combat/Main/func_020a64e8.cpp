#include <globaldefs.h>
#include "std_library_functions.h"

void CleanCacheRange(const void* addr, unsigned int size);
void CleanInvalidateCacheRange(const void* addr, unsigned int size);
extern "C" int LoadToSubBG1CharacterData(int arg0, int arg1, unsigned int arg2);
extern "C" unsigned int GetSubBG1ScreenBase(void);

// USA: func_020a64e8
#pragma opt_common_subs off
extern "C" ARM void func_020a64e8(void) {
    unsigned char var0[0x20];
    *(volatile int*)0x4001014 = 0;
    memset(var0, 0, 0x20);
    CleanCacheRange((const void*)((int)var0), 0x20);
    CleanInvalidateCacheRange((const void*)((int)var0), 0x20);
    LoadToSubBG1CharacterData((int)var0, 0, 0x20);
    memset((void*)GetSubBG1ScreenBase(), 0, 0x800);
}

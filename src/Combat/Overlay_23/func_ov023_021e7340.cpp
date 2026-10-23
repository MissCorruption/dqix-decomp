#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"

struct Struct_02074bf4;
extern "C" void func_02074bf4(struct Struct_02074bf4*);
extern "C" int DisableSubBGVRAMBanks(void);
extern "C" void MapVRAMBanksToSubObj(int value);
extern "C" void MapVRAMBanksToSubBG(int);

// USA: func_ov023_021e7340
extern "C" ARM void func_ov023_021e7340(void* arg0) {
    char* var0 = (char*)arg0;
    int var1 = (int)BackgroundLoader::GetInstance();
    if (*(int*)(var0 + 0x5e4) >= 0) {
        ((BackgroundLoader*)(var1))->RemoveTask((int)(*(int*)(var0 + 0x5e4)));
        *(int*)(var0 + 0x5e4) = -1;
    }

    volatile unsigned int* var2 = (volatile unsigned int*)0x4001010;
    var2[0] = 0;
    var2[1] = 0;
    func_02074bf4((struct Struct_02074bf4*)(var0 + 0x64));

    volatile unsigned int* var3 = (volatile unsigned int*)0x4001000;
    *var3 = (*var3 & ~0x1f00) | (*(int*)(var0 + 0x48) << 8);

    DisableSubBGVRAMBanks();
    MapVRAMBanksToSubBG(*(int*)(var0 + 0x40));
    MapVRAMBanksToSubObj(*(int*)(var0 + 0x44));

    SafeAllocator* var4[3] = { (SafeAllocator*)var0, (SafeAllocator*)(var0 + 0x14), (SafeAllocator*)(var0 + 0x28) };
    for (int var5 = 0; var5 < 3; var5++) {
        if (var4[var5]->GetSignedAllocator() != 0) {
            var4[var5]->Destroy();
        }
    }
}

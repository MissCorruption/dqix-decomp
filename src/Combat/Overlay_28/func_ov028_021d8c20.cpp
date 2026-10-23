#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Cache.h"
#include "std_library_functions.h"
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

extern "C" void* func_0200fb8c(int*);
struct GameResources;
void SetBrightness(GameResources*, int, int);

struct Struct_02097b34;
extern "C" void func_02097b34(struct Struct_02097b34* arg0);

struct Struct_02074bd0;
extern "C" void func_02074bd0(struct Struct_02074bd0* arg0);

extern "C" int LoadToMainBG1CharacterData(int arg0, int arg1, unsigned int arg2);

extern "C" void func_ov028_021d98d4(void* arg0);
extern "C" void func_ov028_021d8b90(void* arg0);

// USA: func_ov028_021d8c20
extern "C" ARM void func_ov028_021d8c20(char* arg0) {
    void* var0 = GameState::GetInstance();
    void* var1 = func_0200fb8c((int*)var0);
    SetBrightness((GameResources*)var1, -16, 0);

    *(int*)0x4000014 = 0;
    *(int*)0x4001014 = 0;

    if (((SafeAllocator*)(arg0 + 0x44))->GetSignedAllocator() != 0) {
        ((SafeAllocator*)(arg0 + 0x44))->Destroy();
    }
    func_02097b34((struct Struct_02097b34*)(arg0 + 0x20));
    func_02074bd0((struct Struct_02074bd0*)(arg0 + 0xc));

    void* var2 = *(void**)(arg0 + 0x40);
    if (var2 != 0) {
        memset(var2, 0, 0x20);
        var2 = *(void**)(arg0 + 0x40);
        CleanInvalidateCacheRange(var2, 0x20);
        var2 = *(void**)(arg0 + 0x40);
        LoadToMainBG1CharacterData((int)var2, 0, 0x20);
    }

    func_ov028_021d98d4(arg0);

    unsigned int* var3 = (unsigned int*)var1;
    ClearFlags00((GameResources*)var3, ~0u);
    ClearFlags04((GameResources*)var3, ~0u);
    ClearFlags08((GameResources*)var3, ~0u);
    SetFlags00((GameResources*)var3, *(unsigned int*)(arg0 + 0x74));
    SetFlags04((GameResources*)var3, *(unsigned int*)(arg0 + 0x78));
    SetFlags08((GameResources*)var3, *(unsigned int*)(arg0 + 0x7c));

    unsigned int* var4 = (unsigned int*)0x4000000;
    *var4 = (*var4 & ~0x1f00) | (*(unsigned int*)(arg0 + 0x58) << 8);
    unsigned int* var5 = (unsigned int*)0x4001000;
    *var5 = (*var5 & ~0x1f00) | (*(unsigned int*)(arg0 + 0x5c) << 8);

    func_ov028_021d8b90(arg0);
}

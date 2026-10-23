#include <globaldefs.h>
#include "Combat/MenuNodeChain.h"
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "std_library_functions.h"
#include "Resource/Brightness.h"

extern "C" void* func_020d6c00(void);
extern "C" void func_020466f4(struct Struct_02038598_4* arg0, unsigned int arg1);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);
void CleanInvalidateCacheRange(const void* addr, unsigned int size);
extern "C" int LoadToMainBG1CharacterData(int arg0, int arg1, unsigned int arg2);
extern "C" int LoadToMainBG2CharacterData(int arg0, int arg1, unsigned int arg2);
extern "C" void LoadToMainBG1ScreenData(void* p, int a, int b);
extern "C" int LoadToMainBG2ScreenData(int arg0, int arg1, unsigned int arg2);

extern int data_02114e20;

// USA: func_ov017_021aaf08
extern "C" ARM void func_ov017_021aaf08(char* arg0) {
    int var0 = (int)BackgroundLoader::GetInstance();
    if (*(int*)(arg0 + 0x50) >= 0) {
        ((BackgroundLoader*)(var0))->RemoveTask((int)(*(int*)(arg0 + 0x50)));
        *(int*)(arg0 + 0x50) = -1;
    }

    if (*(void**)(arg0 + 0x18) != 0) {
        func_0207f8bc(*(Struct_0207f7f0**)(arg0 + 0x18));
        *(void**)(arg0 + 0x18) = 0;
    }

    int var1 = (int)GetGameResources();
    void* var2 = func_020d6c00();
    ClearFlags04((GameResources*)var1, 0x80);
    func_020466f4((struct Struct_02038598_4*)var2, 0x200);

    SafeAllocator* var3 = (SafeAllocator*)(arg0 + 0x24);
    void* var4 = var3->GetSignedAllocator();
    var3->Destroy();
    if (var4) {
        func_02012da4((AllocatorUnion*)&data_02114e20, var4);
    }

    int var5 = *(int*)(arg0 + 0x8);
    if (var5 != 0) {
        memset((void*)var5, 0, 0x800);
        CleanInvalidateCacheRange(*(void**)(arg0 + 0x8), 0x800);
        LoadToMainBG1CharacterData(*(int*)(arg0 + 0x8), 0, 0x20);
        LoadToMainBG2CharacterData(*(int*)(arg0 + 0x8), 0, 0x20);
        LoadToMainBG1ScreenData(*(void**)(arg0 + 0x8), 0, 0x800);
        LoadToMainBG2ScreenData(*(int*)(arg0 + 0x8), 0, 0x800);
        *(int*)(arg0 + 0x8) = 0;
    }
    *(int*)(arg0 + 0x64) = 0;
}

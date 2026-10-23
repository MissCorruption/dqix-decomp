#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "Resource/Brightness.h"

extern "C" void func_ov017_0218d5c8(unsigned char* arg0);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);
extern "C" int func_020100f8(char* arg0);
extern "C" void func_020a27ac(void* arg0);
extern AllocatorUnion data_02114e20;

// USA: func_ov017_021bf490
extern "C" ARM void func_ov017_021bf490(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    SafeAllocator* var1 = (SafeAllocator*)(var0 + 0x34);
    SafeAllocator* var2 = (SafeAllocator*)(var0 + 0x4c);

    void* var3 = GetGameResources();
    unsigned char var4 = var0[0x48];
    if (var4 != 0 && var3 != NULL) {
        func_ov017_0218d5c8((unsigned char*)var3);
        var0[0x48] = 0;
    }

    SignedAllocatorHeader* var5 = var1->GetSignedAllocator();
    if (var5 != NULL) {
        var1->Destroy();
        func_02012da4(&data_02114e20, var5);
    }

    SignedAllocatorHeader* var6 = var2->GetSignedAllocator();
    if (var6 != NULL) {
        var2->Destroy();
        func_02012da4(&data_02114e20, var6);
    }

    int var7 = func_020100f8((char*)GameState::GetInstance());
    if (var7 != 0) {
        func_020a27ac((void*)var7);
    }

    if (var3 == NULL) return;
    ClearFlags04((GameResources*)var3, 0x80);
}

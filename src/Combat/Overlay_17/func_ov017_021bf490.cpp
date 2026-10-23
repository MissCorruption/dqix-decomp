#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "Resource/Brightness.h"

extern "C" void func_ov017_0218d5c8(unsigned char* obj);
extern "C" void func_02012da4(AllocatorUnion* alloc, void* data);
extern "C" int func_020100f8(char* obj);
extern "C" void func_020a27ac(void* obj);
extern AllocatorUnion data_02114e20;

// USA: func_ov017_021bf490
extern "C" ARM void func_ov017_021bf490(void* objRaw) {
    unsigned char* obj = (unsigned char*)objRaw;
    SafeAllocator* allocA = (SafeAllocator*)(obj + 0x34);
    SafeAllocator* allocB = (SafeAllocator*)(obj + 0x4c);

    void* ov = GetGameResources();
    unsigned char field48 = obj[0x48];
    if (field48 != 0 && ov != NULL) {
        func_ov017_0218d5c8((unsigned char*)ov);
        obj[0x48] = 0;
    }

    SignedAllocatorHeader* h1 = allocA->GetSignedAllocator();
    if (h1 != NULL) {
        allocA->Destroy();
        func_02012da4(&data_02114e20, h1);
    }

    SignedAllocatorHeader* h2 = allocB->GetSignedAllocator();
    if (h2 != NULL) {
        allocB->Destroy();
        func_02012da4(&data_02114e20, h2);
    }

    int flagResult = func_020100f8((char*)GameState::GetInstance());
    if (flagResult != 0) {
        func_020a27ac((void*)flagResult);
    }

    if (ov == NULL) return;
    ClearFlags04((GameResources*)ov, 0x80);
}

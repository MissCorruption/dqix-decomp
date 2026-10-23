#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "World/Object3D.h"

extern "C" void NSBXX_Model_SetPolygonID(void* obj, unsigned int value);

struct Struct_02040774_2;
extern "C" void func_020407b4(struct Struct_02040774_2* arg0, int arg1, int arg2, int arg3);

extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);
extern AllocatorUnion data_02114e20;

// USA: func_02046e70
extern "C" ARM void func_02046e70(void* arg0, void* arg1, Object3D* arg2) {
    *(int*)((char*)arg0 + 0x4) = *(int*)((char*)arg0 + 0x0) = 0;
    *(int*)((char*)arg0 + 0x20) = 0;
    *(int*)((char*)arg0 + 0x8) = 0;
    *(int*)((char*)arg0 + 0xc) = 0x41700000;
    *(int*)((char*)arg0 + 0xec) = -1;
    *(unsigned char*)((char*)arg0 + 0x1c) = 1;
    *(unsigned char*)((char*)arg0 + 0x1d) = 1;

    GameState::GetInstance();
    ((Object3D*)((char*)arg0 + 0x3c))->Initialize();
    ((SafeAllocator*)((char*)arg0 + 0x24))->ResetAllocatorPointer();

    *(Object3D**)((char*)arg0 + 0xe8) = arg2;
    if (arg2 != NULL) {
        NSBXX_Model_SetPolygonID(*(void**)(*(char**)((char*)arg2 + 8) + 0x54), 0x3d);
        Object3D* var0 = *(Object3D**)((char*)arg0 + 0xe8);
        var0->SetScale(0x1000, 0x1000, 0x1000);
        Object3D* var1 = *(Object3D**)((char*)arg0 + 0xe8);
        func_020407b4((struct Struct_02040774_2*)var1, 0, -0xa000, 0x1000);
        Object3D* var2 = *(Object3D**)((char*)arg0 + 0xe8);
        var2->MaybeSetBCFGAnimation(0, 0);
    }

    *(void**)((char*)arg0 + 0x38) = arg1;
    if (arg1 != NULL) {
        return;
    }
    void* var3 = func_02012d88(&data_02114e20, 0x301c);
    if (var3 != NULL) {
        SafeAllocator* var4 = (SafeAllocator*)((char*)arg0 + 0x24);
        var4->ResetAllocatorPointer();
        var4->CreateTypeA(var3, 0x301c);
        var4->Reset();
        return;
    }

    *(unsigned char*)((char*)arg0 + 0x1d) = 0;
    ((SafeAllocator*)((char*)arg0 + 0x24))->ResetAllocatorPointer();
    *(int*)((char*)arg0 + 0x0) = -1;
}

#include <globaldefs.h>
#include "Resource/QuestScript.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/HPXEAllocator.h"
#include "Filesystem/BackgroundLoader.h"
struct SlotManager020da034 { char unknown0[8]; unsigned short usedMask; char unknowna[2]; int slots[1]; int scriptId; };
struct Struct02012dd0 { void* field0; HPXEAllocator* alloc; };
extern "C" int* func_02094d6c();
extern "C" unsigned int func_02012dd0(Struct02012dd0*);
extern "C" void* func_02012d88(AllocatorUnion*, unsigned int);
extern "C" void func_02012da4(AllocatorUnion*, void*);
extern "C" void func_020da034(SlotManager020da034*, int);
extern "C" void func_02095d30(int*, int, int);
extern AllocatorUnion data_02114e20;

// USA: func_020da074
extern "C" ARM void func_020da074(SlotManager020da034* manager) {
    BackgroundLoader* loader = BackgroundLoader::GetInstance();
    int* interpreter = func_02094d6c();
    void* data;
    unsigned int length;
    loader->GetLoadedFileByID(manager->slots[0], &data, &length);
    if (func_02012dd0((Struct02012dd0*)&data_02114e20) > 0x400) {
        SafeAllocator allocator;
        allocator.ResetAllocatorPointer();
        allocator.ResetAllocatorPointer();
        void* buffer = func_02012d88(&data_02114e20, 0x400);
        allocator.CreateTypeA(buffer, 0x400);
        allocator.Reset();
        func_0209576c((Header020956b8*)interpreter, &allocator, data, length, 0);
        func_02095d30(interpreter, manager->scriptId, 0);
        SignedAllocatorHeader* memory = allocator.GetSignedAllocator();
        if (memory) {
            allocator.Destroy();
            func_02012da4(&data_02114e20, memory);
        }
    }
    func_020da034(manager, 0);
}

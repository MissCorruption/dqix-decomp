#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Cache.h"
#include "std_library_functions.h"

extern "C" void func_0205a494(void* arg0);

struct Struct_02074bd0;
extern "C" void func_02074bd0(struct Struct_02074bd0* arg0);

struct Struct_0205d6a0;
extern "C" void func_0205d6a0(struct Struct_0205d6a0* arg0, int arg1);

struct Struct_0205d1e0;
extern "C" void func_0205d1e0(struct Struct_0205d1e0* arg0);

struct Struct_0205d274;
extern "C" void func_0205d274(struct Struct_0205d274* arg0);

struct Struct_0205d2bc;
extern "C" void func_0205d2bc(struct Struct_0205d2bc* arg0);

extern "C" void func_0205d048(void* arg0);

extern "C" int LoadToMainBG1CharacterData(int arg0, int arg1, unsigned int arg2);

// USA: func_ov003_021700dc
extern "C" ARM void func_ov003_021700dc(void* arg0) {
    func_0205a494((char*)arg0 + 0x68);
    if (((SafeAllocator*)((char*)arg0 + 0xbc))->GetSignedAllocator() != 0) {
        ((SafeAllocator*)((char*)arg0 + 0xbc))->Destroy();
    }
    func_02074bd0((struct Struct_02074bd0*)((char*)arg0 + 0x48));
    unsigned int* var0 = (unsigned int*)0x4000000;
    *var0 = (*var0 & ~0x1f00) | (*(int*)((char*)arg0 + 0x5c) << 8);
    void* var1 = *(void**)((char*)arg0 + 0x3c);
    if (var1 != 0) {
        func_0205d6a0((struct Struct_0205d6a0*)var1, 1);
        var1 = *(void**)((char*)arg0 + 0x3c);
        func_0205d1e0((struct Struct_0205d1e0*)var1);
        var1 = *(void**)((char*)arg0 + 0x3c);
        func_0205d274((struct Struct_0205d274*)var1);
        var1 = *(void**)((char*)arg0 + 0x3c);
        func_0205d2bc((struct Struct_0205d2bc*)var1);
        var1 = *(void**)((char*)arg0 + 0x3c);
        func_0205d048(var1);
    }
    *(void**)((char*)arg0 + 0x3c) = 0;
    void* var2 = *(void**)((char*)arg0 + 0x14);
    memset(var2, 0, 0x20);
    var2 = *(void**)((char*)arg0 + 0x14);
    CleanInvalidateCacheRange(var2, 0x20);
    var2 = *(void**)((char*)arg0 + 0x14);
    LoadToMainBG1CharacterData((int)var2, 0, 0x20);
    *(unsigned short*)0x4000050 = 0;
}

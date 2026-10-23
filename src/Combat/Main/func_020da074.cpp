#include <globaldefs.h>
#include "Resource/QuestScript.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/HPXEAllocator.h"
#include "Filesystem/BackgroundLoader.h"
struct Struct_020da034 { char unknown_0_[8]; unsigned short unknown_8_; char unknown_a_[2]; int unknown_c_[1]; int unknown_10_; };
struct Struct_02114e20 { void* unknown_0_; HPXEAllocator* unknown_4_; };
extern "C" int* func_02094d6c();
extern "C" unsigned int func_02012dd0(Struct_02114e20*);
extern "C" void* func_02012d88(AllocatorUnion*, unsigned int);
extern "C" void func_02012da4(AllocatorUnion*, void*);
extern "C" void func_020da034(Struct_020da034*, int);
extern "C" void func_02095d30(int*, int, int);
extern AllocatorUnion data_02114e20;

// USA: func_020da074
extern "C" ARM void func_020da074(Struct_020da034* arg0) {
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    int* var1 = func_02094d6c();
    void* var2;
    unsigned int var3;
    var0->GetLoadedFileByID(arg0->unknown_c_[0], &var2, &var3);
    if (func_02012dd0((Struct_02114e20*)&data_02114e20) > 0x400) {
        SafeAllocator var4;
        var4.ResetAllocatorPointer();
        var4.ResetAllocatorPointer();
        void* var5 = func_02012d88(&data_02114e20, 0x400);
        var4.CreateTypeA(var5, 0x400);
        var4.Reset();
        func_0209576c((Struct_020956b8*)var1, &var4, var2, var3, 0);
        func_02095d30(var1, arg0->unknown_10_, 0);
        SignedAllocatorHeader* var6 = var4.GetSignedAllocator();
        if (var6) {
            var4.Destroy();
            func_02012da4(&data_02114e20, var6);
        }
    }
    func_020da034(arg0, 0);
}

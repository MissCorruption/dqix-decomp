#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/FileIO.h"
#include "NitroSDK/Filesystem/NarcHandle.h"
#include "Graphics/Model3D.h"
#include "Memory/SafeAllocator.h"
#include "Resource/GameResources.h"
#include "World/Object3D.h"
#include "std_library_functions.h"

extern "C" char* func_020421a0(void);
struct Struct_0203d028;
extern "C" void func_0207df50(Struct_0203d028*);
extern "C" void func_0207df90(char* arg0);
extern "C" void func_0207dfac(char* arg0);
extern "C" void func_020440b8(char* arg0, void* arg1, void* arg2);

extern char data_ov017_021d7504[];
extern char data_ov017_021d7510[];
extern char data_ov017_021d751b[];
extern char data_ov017_021d7577[];
extern char data_ov017_021d7584[];
extern char data_ov017_021d758d[];
extern char data_ov017_021d75a2[];

// USA: func_ov017_0219ba0c
extern "C" ARM void func_ov017_0219ba0c(GameResources* arg0, int arg1) {
    const void* var0;
    unsigned int var1;
    unsigned int var2;
    unsigned int var3;
    char* var4 = func_020421a0();
    BackgroundLoader* var5 = BackgroundLoader::GetInstance();
    SafeAllocator* var6 = &arg0->allocator_array_38[6];
    char* var7 = arg0->unknown_2cc_ + 0x2a0;
    var5->AddLockGlobal();
    var6->Reset();
    func_0207df50((Struct_0203d028*)var7);
    func_0207df90(var7);

    char var8[0x50];
    sprintf(var8, data_ov017_021d7504, data_ov017_021d7510);
    if (!LoadFileIntoMemory(var8, data_0211e33c, &var2)) {
        BackgroundLoader::RemoveLockGlobal();
        return;
    }

    NarcHandle var9;
    if (!var9.Initialize(data_ov017_021d751b, data_0211e33c)) {
        BackgroundLoader::RemoveLockGlobal();
        return;
    }
    func_020440b8(var4, var6, data_0211e33c);
    if (arg1) {
        var9.Destroy();
        func_0207dfac(var7);
        BackgroundLoader::RemoveLockGlobal();
        return;
    }
    var9.Destroy();

    ((Model3D*)arg0->unknown_ptr_36c8)->Clear();
    if (GetFileInNarc(data_0211e33c, data_ov017_021d7577, &var0, &var1, 0)) {
        ((Model3D*)arg0->unknown_ptr_36c8)->CopyAndProcessRawFile(&var6->allocUnion, var0, var1, Model3D::TextureStagingMode_Normal);
    }
    ((Object3D*)arg0->unknown_ptr_36cc)->Initialize();
    if (GetFileInNarc(data_0211e33c, data_ov017_021d7584, &var0, &var1, 0)) {
        ObjectArchiveLoadInfo var10;
        var10.fileData = var0;
        var10.unk_8 = var1;
        var10.allocator = var6;
        var10.unk_10 = 1;
        ((Object3D*)arg0->unknown_ptr_36cc)->LoadFromCHRArchive(&var10);
    }
    func_0207dfac(var7);

    if (!LoadFileIntoMemory(data_ov017_021d758d, data_0211e33c, &var3)) {
        BackgroundLoader::RemoveLockGlobal();
        return;
    }
    void* var11 = var6->Allocate(var3);
    if (var11 == NULL) {
        BackgroundLoader::RemoveLockGlobal();
        return;
    }
    memcpy(var11, data_0211e33c, var3);
    *(void**)((char*)arg0 + 0x30) = var11;
    *(unsigned int*)((char*)arg0 + 0x34) = var3;
    if (!LoadFileIntoMemory(data_ov017_021d75a2, data_0211e33c, &var3)) {
        BackgroundLoader::RemoveLockGlobal();
        return;
    }
    var11 = var6->Allocate(var3);
    if (var11 == NULL) {
        BackgroundLoader::RemoveLockGlobal();
        return;
    }
    memcpy(var11, data_0211e33c, var3);
    *(void**)((char*)arg0 + 0x2c) = var11;
    BackgroundLoader::RemoveLockGlobal();
}

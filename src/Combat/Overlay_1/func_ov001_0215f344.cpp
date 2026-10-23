#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"

extern "C" void* func_ov017_021d612c(void* arg0);
struct Struct_ov001_0215f344 { int unknown_0_; union { int unknown_0_; float unknown1_0_; } unknown_4_; };
extern "C" int func_ov017_021d60f4(Struct_ov001_0215f344* arg0);
extern "C" int func_ov001_0215ad2c(int arg0);

struct Struct_ov001_0215e1cc;

struct Struct_ov001_0215f344_2;

extern const char data_ov001_02165745[];
struct Struct_ov001_021658b8_7 { int unknown_0_; char unknown_4_[0x8c - 0x4]; unsigned char unknown_8c_; };
extern Struct_ov001_021658b8_7 data_ov001_021658b8;

// USA: func_ov001_0215f344
extern "C" ARM int func_ov001_0215f344(void* arg0) {
    char var0[0x20];
    int var1;
    int var2;

    void* var3 = func_ov017_021d612c(arg0);
    GameState* var4 = GameState::GetInstance();
    if (var4 == 0) return 0;
    sprintf(var0, data_ov001_02165745, var3);
    int var5 = func_ov001_0215ad2c(func_ov017_021d60f4((Struct_ov001_0215f344*)((char*)arg0 + 8)));
    GameObject* var6 = var4->GetGameObjectByIndex(var5);
    if (var6 == 0) return 0;
    SafeAllocator* var7 = (SafeAllocator*)data_ov001_021658b8.unknown_0_;
    ((BackgroundLoader*)((Struct_ov001_0215e1cc*)(int)BackgroundLoader::GetInstance()))->GetLoadedFileByName((const char*)(var0), (void**)(&var1), (unsigned int*)(&var2));
    if (var1 != 0) {
        ((Object3D*)((struct Struct_ov001_0215f344_2*)var6))->LoadType0AnimationPackageFromBCFGScript(var7, (void*)var1, var2);
    } else {
        ((Object3D*)((struct Struct_ov001_0215f344_2*)var6))->LoadType0AnimationPackageFromBCFGScript((char const*)((int)var0), var7);
    }
    return 1;
}

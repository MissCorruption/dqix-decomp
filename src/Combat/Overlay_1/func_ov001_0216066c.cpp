#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"
#include "Resource/GameResources.h"

extern "C" int func_ov017_021d60f4(void* arg0);
extern "C" int func_ov001_0215ad2c(int arg0);
extern "C" int func_ov017_021bbbe4(void* arg0);
extern "C" unsigned int func_ov001_0215a750(const char* arg0, void** arg1);
extern SafeAllocator* data_ov001_021658b8[8];
extern char data_ov001_021657df[];
struct ObjectArchiveLoadInfo;
extern "C" void func_0200fd38(GameState* arg0, int arg1, GameObject* arg2);
struct Struct_0203d028_18;

struct Struct_ov001_0216066c {
    int unknown_0_;
    void* unknown_4_;
    unsigned int unknown_8_;
    SafeAllocator* unknown_c_;
    int unknown_10_;
    char unknown_14_[0xc];
};

// USA: func_ov001_0216066c
extern "C" ARM int func_ov001_0216066c(void* arg0) {
    char var0[0x50];
    struct Struct_ov001_0216066c var1;
    void* var2;
    unsigned int var3;
    GameState* var4;
    SafeAllocator* var5;
    void* var6;
    int var7;
    int var8;

    var4 = GameState::GetInstance();
    (int)BackgroundLoader::GetInstance();
    var5 = data_ov001_021658b8[0];
    var8 = func_ov001_0215ad2c(func_ov017_021d60f4(arg0));
    var7 = ((int)GetGameResources());
#if defined(jpn)
    var7 = *(int*)((char*)var7 + 0x3000 + 0x524);
#else
    var7 = *(int*)((char*)var7 + 0x3000 + 0x734);
#endif
    var7 = func_ov017_021bbbe4((void*)var7);
    sprintf(var0, data_ov001_021657df, var7 + 0x4);
    BackgroundLoader::AddLockGlobal();
    var3 = func_ov001_0215a750(var0, &var2);
    if (var3 == 0) {
        BackgroundLoader::RemoveLockGlobal();
        return 0;
    }
    var6 = var5->Allocate(0xac);
    ((Object3D*)var6)->Initialize();
    var1.unknown_4_ = var2;
    var1.unknown_c_ = var5;
    var1.unknown_8_ = var3;
    var1.unknown_10_ = 1;
    ((Object3D*)((int)var6))->LoadFromCHRArchive((ObjectArchiveLoadInfo*)((int)&var1));
    BackgroundLoader::RemoveLockGlobal();
    func_0200fd38(var4, var8, (GameObject*)var6);
    ((Object3D*)((struct Struct_0203d028_18*)var6))->SetScale(0x10a, 0x10a, 0x10a);
    ((Object3D*)var6)->MaybeSetBCFGAnimation(0, 0);
    return 1;
}

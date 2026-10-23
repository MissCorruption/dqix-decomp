#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "Resource/GameResources.h"

#if defined(jpn)
enum { Enum_02046cc8_716 = 0x27c };
#else
enum { Enum_02046cc8_716 = 0x2cc };
#endif

extern "C" void NSBXX_Model_SetPolygonID(void* obj, unsigned int value);

struct Struct_0203d028;
extern "C" void func_0207df50(struct Struct_0203d028* arg0);
extern "C" void func_0207df90(char* arg0);
extern "C" void func_0207dfac(char* arg0);
struct Struct_02040774_2;
extern "C" void func_020407b4(struct Struct_02040774_2* arg0, int arg1, int arg2, int arg3);

// USA: func_02046cc8
extern "C" ARM int func_02046cc8(void* arg0) {
    char* var0;
    void* var1;
    BackgroundLoader* var2;
    SafeAllocator* var3;
    void* var4;
    unsigned int var5;
    ObjectArchiveLoadInfo var6;

    if (*(int*)((char*)arg0 + 0xe8) != 0) {
        return 1;
    }
    if (*(int*)((char*)arg0 + 0xec) < 0) {
        return 0;
    }

    GameState::GetInstance();
    var1 = GetGameResources();
    var3 = *(SafeAllocator**)((char*)arg0 + 0x38);
    if (var3 == NULL) {
        var3 = (SafeAllocator*)((char*)arg0 + 0x24);
    }
    var2 = BackgroundLoader::GetInstance();

    if (var2->GetTaskStatus(*(int*)((char*)arg0 + 0xec)) != 0) {
        var0 = (char*)var1 + Enum_02046cc8_716;
        if (*(unsigned char*)((char*)arg0 + 0x1d) != 0) {
            func_0207df50((struct Struct_0203d028*)(var0 + 0xc40));
            func_0207df90(var0 + 0xc40);

            var2->GetLoadedFileByID(*(int*)((char*)arg0 + 0xec), &var4, &var5);
            if (var4 != NULL && var3->GetSignedAllocator() != NULL) {
                Object3D* var7 = (Object3D*)((char*)arg0 + 0x3c);
                var7->Initialize();
                var6.fileData = var4;
                var6.unk_8 = var5;
                var6.allocator = var3;
                var6.unk_10 = 1;
                var7->LoadFromCHRArchive(&var6);
                void* var8 = *(void**)((char*)arg0 + 0x44);
                NSBXX_Model_SetPolygonID(*(void**)((char*)var8 + 0x54), 0x3d);
                func_020407b4((struct Struct_02040774_2*)var7, 0, -0xa000, 0x1000);
                var7->MaybeSetBCFGAnimation(0, 0);
            }
            func_0207dfac(var0 + 0xc40);
        }
        var2->RemoveTask(*(int*)((char*)arg0 + 0xec));
        *(int*)((char*)arg0 + 0xec) = -1;
        return 1;
    }
    return 0;
}

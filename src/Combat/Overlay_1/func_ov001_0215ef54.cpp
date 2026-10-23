#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Graphics/Model3D.h"
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"

extern "C" void* func_ov017_021d612c(void* arg0);
extern "C" int func_ov017_021d60f4(void* arg0);
extern "C" int func_ov001_0215ad2c(int arg0);

struct Struct_ov001_0215e1cc;

extern const char data_ov001_02165745[];
extern SafeAllocator* data_ov001_021658b8[8];

// USA: func_ov001_0215ef54
extern "C" ARM int func_ov001_0215ef54(char* arg0, int arg1) {
    void* var0 = arg0;
    arg0 += 0x8;
    void* var1 = func_ov017_021d612c(var0);
    GameState* var2 = GameState::GetInstance();
    if (var2 == 0) return 0;

    char var3[0x20];
    sprintf(var3, data_ov001_02165745, var1);

    SafeAllocator* var4 = data_ov001_021658b8[0];
    void* var5 = var4->Allocate(0xac);
    if (var5 == 0) return 0;
    ((Model3D*)((unsigned char*)var5))->Clear();

    int var6;
    int var7;
    ((BackgroundLoader*)((Struct_ov001_0215e1cc*)(int)BackgroundLoader::GetInstance()))->GetLoadedFileByName((const char*)(var3), (void**)(&var6), (unsigned int*)(&var7));
    if (var6 != 0) {
        ((Model3D*)var5)->CopyAndProcessRawFile(&var4->allocUnion, (void*)var6, var7, Model3D::TextureStagingMode_Normal);
    } else {
        ((Model3D*)var5)->LoadFromFile(var3, &var4->allocUnion, Model3D::TextureStagingMode_Normal);
    }

    for (int var8 = 1; var8 < arg1; var8++) {
        int var9 = func_ov017_021d60f4(arg0);
        arg0 += 0x8;
        int var10 = func_ov001_0215ad2c(var9);
        GameObject* var11 = var2->GetGameObjectByIndex(var10);
        if (var11 != 0 && var11->obj3D_.pModel_ != 0) {
            ((Model3D*)(var11->obj3D_.pModel_))->ApplyTexturesFromModel((Model3D*)var5);
        }
    }
    return 1;
}

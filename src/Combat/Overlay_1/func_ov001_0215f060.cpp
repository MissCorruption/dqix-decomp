#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "World/Object3D.h"
#include "std_library_functions.h"

extern "C" void* func_ov017_021d612c(void* arg0);
extern "C" int func_ov017_021d60f4(void* arg0);
extern "C" int func_ov001_0215ad2c(int arg0);

extern SafeAllocator* data_ov001_021658b8[8];
extern const char data_ov001_02165745[];
extern const char data_ov001_02165791[];
extern const char data_ov001_02165798[];
extern const char data_ov001_0216579f[];
extern const char data_ov001_021657a6[];

// USA: func_ov001_0215f060
extern "C" ARM int func_ov001_0215f060(char* arg0, int arg1) {
    void* var0 = arg0;
    arg0 += 0x8;
    void* var1 = func_ov017_021d612c(var0);
    GameState* var2 = GameState::GetInstance();
    SafeAllocator* var3 = data_ov001_021658b8[0];

    char var4[0x20];
    sprintf(var4, data_ov001_02165745, var1);

    int var5 = -1;
    if (strstr(var4, data_ov001_02165791) != NULL) {
        var5 = 0;
    } else if (strstr(var4, data_ov001_02165798) != NULL) {
        var5 = 1;
    } else if (strstr(var4, data_ov001_0216579f) != NULL) {
        var5 = 2;
    } else if (strstr(var4, data_ov001_021657a6) != NULL) {
        var5 = 3;
    }
    if (var5 < 0) return 0;

    void* var6;
    unsigned int var7;
    BackgroundLoader::GetInstance()->GetLoadedFileByName(var4, &var6, &var7);

    for (int var8 = 1; var8 < arg1; var8++) {
        int var9 = func_ov017_021d60f4(arg0);
        arg0 += 0x8;
        GameObject* var10 = var2->GetGameObjectByIndex(func_ov001_0215ad2c(var9));
        if (var10 != NULL) {
            if (var6 != NULL) {
                var10->obj3D_.LoadType0AnimationFromFileInMemory(var5, var3, var6, var7);
            } else {
                var10->obj3D_.LoadType0AnimationFromFile(var5, var4, var3);
            }
        }
    }
    return 1;
}

#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"

extern "C" void* func_ov017_021d612c(void* arg0);
struct Struct_ov001_0215e1cc;
extern "C" unsigned int func_ov001_0215a750(const char* arg0, void** arg1);
extern "C" void func_ov001_021538c8(void);
extern "C" void func_ov001_021538d4(int arg0, void* arg1, SafeAllocator* arg2);

extern const char data_ov001_02165745[];
extern SafeAllocator* data_ov001_021658b8[8];

// USA: func_ov001_0215f1fc
extern "C" ARM int func_ov001_0215f1fc(void* arg0) {
    char var0[0x20];
    int var1;
    int var2;
    SafeAllocator* var3;
    int var4;

    void* var5 = func_ov017_021d612c(arg0);
    if (GameState::GetInstance() == NULL) {
        return 0;
    }
    sprintf(var0, data_ov001_02165745, var5);
    var3 = data_ov001_021658b8[0];
    var4 = 0;
    ((BackgroundLoader*)((Struct_ov001_0215e1cc*)(int)BackgroundLoader::GetInstance()))->GetLoadedFileByName((const char*)(var0), (void**)(&var1), (unsigned int*)(&var2));
    if (var1 == 0) {
        BackgroundLoader::AddLockGlobal();
        var4 = 1;
        if (func_ov001_0215a750(var0, (void**)&var1) == 0) {
            BackgroundLoader::RemoveLockGlobal();
            return 0;
        }
    }
    void* var6 = var3->Allocate(var2);
    if (var6 == NULL) {
        if (var4 != 0) {
            BackgroundLoader::RemoveLockGlobal();
        }
        return 0;
    }
    memcpy(var6, (void*)var1, var2);
    if (var4 != 0) {
        BackgroundLoader::RemoveLockGlobal();
    }
    func_ov001_021538c8();
    func_ov001_021538d4((int)var6, NULL, var3);
    return 1;
}

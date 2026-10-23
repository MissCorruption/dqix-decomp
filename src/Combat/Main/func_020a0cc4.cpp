#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

struct Struct_02114e20;
extern "C" unsigned int func_02012dd0(struct Struct_02114e20* arg0);



struct NitroHandle;
NitroHandle* NitroHandle_FindBySignature(const char* sig, int a);
void NitroHandle_ReleaseFileTables(NitroHandle* h);

extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);

struct Struct_020a0cc4;

extern struct Struct_02114e20 data_02114e20;
extern void* data_02109d90;
extern const char data_020f18e8[];

// USA: func_020a0cc4
extern "C" ARM int func_020a0cc4(int arg0) {
    if (arg0 >= 0) {
        unsigned int var0 = func_02012dd0(&data_02114e20);
        if (var0 >= arg0) goto fail;
    }
    if (data_02109d90 == NULL) goto fail;

    {
        int var1 = (int)BackgroundLoader::GetInstance();
        if (var1 != 0) {
            ((BackgroundLoader*)(var1))->MaybeWaitIdle();
        }

        NitroHandle_ReleaseFileTables(NitroHandle_FindBySignature(data_020f18e8, 3));
        func_02012da4((AllocatorUnion*)&data_02114e20, data_02109d90);
        data_02109d90 = NULL;

        if (var1 != 0) {
            ((BackgroundLoader*)((struct Struct_020a0cc4*)var1))->RemoveLock();
        }
    }
    return 1;
fail:
    return 0;
}

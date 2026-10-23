#if defined(jpn)
#define R(j,u) (j)
#define func_ov008_021889f8 func_ov008_0218973c
#define data_ov005_0215cd20 data_ov005_0215e100
#define data_ov014_021894b8 data_ov014_0218a2f8
#define data_ov015_02193cfc data_ov015_0219482c
#define data_ov015_02194078 data_ov015_02194bb8
#define data_ov015_02194129 data_ov015_02194c69
#define func_ov008_02188730 func_ov008_02189444
#define func_ov014_02185c90 func_ov014_02186d00
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "std_library_functions.h"
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "World/Object3D.h"

struct Struct_ov001_0215bcc0;

extern "C" void* __clear(void* arg0, int arg1);
void* LoadFileIntoMemory(const char* path, void* buf, unsigned int* outLen);

struct Struct_0203d028_11;
extern "C" void func_0203dafc(struct Struct_0203d028_11* arg0);

extern char data_ov015_02194078;
extern int data_0211e33c;

// USA: func_ov015_0218cb2c
extern "C" ARM void func_ov015_0218cb2c(void* arg0, int arg1) {
    unsigned char* var0 = (unsigned char*)arg0;
    ((Object3D*)((struct Struct_ov001_0215bcc0*)*(void**)(var0 + 0x24)))->RemoveAnimationPackageByID(3);
    if (arg1 != 0) {
        SafeAllocator var1;
        var1.ResetAllocatorPointer();
        var1.CreateTypeA(*(void**)(var0 + 0x14), *(unsigned int*)(var0 + 0x18));
        var1.Reset();

        char var2[0x80];
        __clear(var2, 0x80);

        BackgroundLoader::AddLockGlobal();

        unsigned int var3 = 0;
        sprintf(var2, &data_ov015_02194078, arg1);
        void* var4 = LoadFileIntoMemory(var2, &data_0211e33c, &var3);

        if (var4 != 0) {
            ObjectArchiveLoadInfo var5;
            func_0203dafc((struct Struct_0203d028_11*)&var5);
            var5.allocator = &var1;
            var5.fileData = &data_0211e33c;
            var5.unk_8 = var3;
            var5.unk_10 = 1;
            var5.packageID = 3;
            ((Object3D*)(*(void**)(var0 + 0x24)))->LoadFromCCHROrCMOTArchive(&var5, 0);
        }

        BackgroundLoader::RemoveLockGlobal();
        var1.Destroy();
    }
    ((Object3D*)(*(unsigned char**)(var0 + 0x24)))->StopCurrentAnimation();
    ((Object3D*)(*(void**)(var0 + 0x24)))->MaybeSetBCFGAnimation(0, *(int*)(var0 + 0x44));
}

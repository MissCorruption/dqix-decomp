#include <globaldefs.h>
#include "Filesystem/GPC.h"
#include "Filesystem/FileIO.h"
#include "Combat/Overlay15ViewerContext.h"
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "World/Object3D.h"
#include "std_library_functions.h"

extern "C" void* func_02079a3c(void* arg0);
extern "C" void* __clear(void* arg0, int arg1);
extern char data_ov015_02194094[27] __attribute__((aligned(4)));
extern char data_ov015_021940af[9];
extern char data_ov015_021940b8[8];
extern char data_ov015_0219408e[6];

// USA: func_ov015_0218c920
extern "C" ARM void func_ov015_0218c920(void* arg0, int arg1) {
    Struct_ov015_0218bcb0* var0 = static_cast<Struct_ov015_0218bcb0*>(arg0);
    SafeAllocator var1;
    var1.ResetAllocatorPointer();
    var1.CreateTypeA(var0->unknown_14_, var0->unknown_18_);
    var1.Reset();
    BackgroundLoader::AddLockGlobal();
    BackgroundLoader::FreeAllocationsGlobal();
    unsigned int var2 = 0;
    unsigned char* var3 = data_0211e33c;
    unsigned int var4 = 0x30000;
    GPCReadPair var5;
    func_02079a3c(&var5);
    if (LoadAndDecompressGPCHeaderAndInnerFileInfo(&var5.pGPCFile, var5.machine,
            data_ov015_02194094, var3, var2, var4, false, 0)) {
        var3 += var2;
        var4 -= var2;
        var0->unknown_24_[0].RemoveAllAnimationPackages();
        var0->unknown_24_[2].RemoveAllAnimationPackages();
        var0->unknown_24_[3].RemoveAllAnimationPackages();
        var0->unknown_24_[7].RemoveAllAnimationPackages();
        var0->unknown_24_[8].RemoveAllAnimationPackages();
        var0->unknown_24_[9].RemoveAllAnimationPackages();
        var0->unknown_24_[6].RemoveAllAnimationPackages();
        var0->unknown_24_[5].RemoveAllAnimationPackages();
        var0->unknown_24_[1].RemoveAllAnimationPackages();
        char var6[0x80];
        char var7[0x80];
        __clear(var6, 0x80);
        __clear(var7, 0x80);
        func_ov015_0218c274(var0, var6, 0);
        sprintf(var7, data_ov015_021940af, var6);
        DecompressFileFromGPCByName(var5.pGPCFile, var5.machine, var3, var2, var4, var7);
        var0->unknown_24_[0].LoadType0AnimationFromFileInMemory(0, &var1, var3, var2);
        unsigned int var8 = var2;
        var4 -= var8;
        sprintf(var7, data_ov015_021940b8, var6);
        DecompressFileFromGPCByName(var5.pGPCFile, var5.machine, var3 + var8, var2, var4, var7);
        var0->unknown_24_[0].LoadType0AnimationPackageFromBCFGScript(&var1, var3 + var8, var2);
        var1.Destroy();
        var0->unknown_24_[0].StopCurrentAnimation();
        var0->unknown_24_[0].MaybeSetRegularAnimation(data_ov015_0219408e, 0);
    }
    BackgroundLoader::RemoveLockGlobal();
    var5.Reset();
    ZeroDestroyGPCPointer(&var5.pGPCFile);
}

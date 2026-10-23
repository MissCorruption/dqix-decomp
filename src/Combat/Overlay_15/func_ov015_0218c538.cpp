#include <globaldefs.h>
#if defined(jpn)
#define data_ov015_02194020 data_ov015_02194b60
#define data_ov015_0219403b data_ov015_02194b7b
#define data_ov015_02194042 data_ov015_02194b82
#define data_ov015_0219404a data_ov015_02194b8a
#define data_ov015_02194052 data_ov015_02194b92
#define data_ov015_02194064 data_ov015_02194ba4
#define data_ov015_02194078 data_ov015_02194bb8
#endif
#include "std_library_functions.h"
#include "Filesystem/GPC.h"
#include "Filesystem/FileIO.h"
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "World/Object3D.h"
#include "Combat/Overlay15ViewerContext.h"

extern "C" void* __clear(void* arg0, int arg1);
extern "C" void func_02079a3c(void* arg0);

struct Struct_0203d028_11;
extern "C" void func_0203dafc(struct Struct_0203d028_11* arg0);

extern char data_ov015_02194020[27] __attribute__((aligned(4)));
extern char data_ov015_0219403b[7];
extern char data_ov015_02194042[8];
extern char data_ov015_0219404a[8];
extern char data_ov015_02194052[17];
extern char data_ov015_02194064[20];
extern char data_ov015_02194078[22];
extern char data_ov015_0219408e[6];

// USA: func_ov015_0218c538
extern "C" ARM void func_ov015_0218c538(Struct_ov015_0218bcb0* arg0, char* arg1) {
    arg0->unknown_24_[0].RemoveAllAnimationPackages();
    arg0->unknown_24_[1].RemoveAllAnimationPackages();

    SafeAllocator var0;
    var0.ResetAllocatorPointer();
    var0.CreateTypeA(arg0->unknown_14_, arg0->unknown_18_);
    var0.Reset();

    BackgroundLoader::AddLockGlobal();
    BackgroundLoader::FreeAllocationsGlobal();

    char var1[0x80];
    char var2[0x80];
    __clear(var1, 0x80);
    __clear(var2, 0x80);

    unsigned int var3 = 0;
    unsigned char* var4 = data_0211e33c;
    unsigned int var5 = 0x30000;
    GPCReadPair var6;
    func_02079a3c(&var6);

    if (LoadAndDecompressGPCHeaderAndInnerFileInfo(&var6.pGPCFile, var6.machine,
            data_ov015_02194020, var4, var3, var5, false, 0)) {
        var4 += var3;
        var5 -= var3;

        func_ov015_0218c274(arg0, var1, 0);
        sprintf(var2, data_ov015_0219403b, var1);
        if (DecompressFileFromGPCByName(var6.pGPCFile, var6.machine, var4, var3, var5, var2)) {
            ObjectArchiveLoadInfo var7;
            func_0203dafc((Struct_0203d028_11*)&var7);
            var7.allocator = &var0;
            var7.unk_8 = var3;
            var7.fileData = var4;
            var7.unk_10 = 1;
            arg0->unknown_24_[0].LoadFromCCHROrCMOTArchive(&var7, 0);
            var4 += var3;
            var5 -= var3;
        }

        if (arg0->unknown_48_ == 1) {
            sprintf(var2, data_ov015_02194042, var1);
            if (DecompressFileFromGPCByName(var6.pGPCFile, var6.machine, var4, var3, var5, var2)) {
                ObjectArchiveLoadInfo var8;
                func_0203dafc((Struct_0203d028_11*)&var8);
var8.allocator = &var0;
            var8.unk_8 = var3;
            var8.fileData = var4;
            var8.unk_10 = 1;
                arg0->unknown_24_[0].LoadFromCCHROrCMOTArchive(&var8, 0);
                var4 += var3;
                var5 -= var3;
            }
            sprintf(var2, data_ov015_0219404a, var1);
            if (DecompressFileFromGPCByName(var6.pGPCFile, var6.machine, var4, var3, var5, var2)) {
                ObjectArchiveLoadInfo var9;
                func_0203dafc((Struct_0203d028_11*)&var9);
var9.allocator = &var0;
            var9.unk_8 = var3;
            var9.fileData = var4;
            var9.unk_10 = 1;
                arg0->unknown_24_[0].LoadFromCCHROrCMOTArchive(&var9, 0);
                var4 += var3;
                var5 -= var3;
            }
        }

        func_ov015_0218c274(arg0, var1, 1);
        if (arg0->unknown_48_ == 0) {
            sprintf(var2, data_ov015_02194042, var1);
        } else {
            sprintf(var2, data_ov015_0219403b, var1);
        }
        if (DecompressFileFromGPCByName(var6.pGPCFile, var6.machine, var4, var3, var5, var2)) {
            ObjectArchiveLoadInfo var10;
            func_0203dafc((Struct_0203d028_11*)&var10);
            var10.allocator = &var0;
            var10.unk_8 = var3;
            var10.fileData = var4;
            var10.unk_10 = 1;
            arg0->unknown_24_[0].LoadFromCCHROrCMOTArchive(&var10, 0);
        }

        var6.Reset();
    }

    if (arg1 != 0) {
        char var11 = 'w';
        if (arg0->unknown_3b_ == 0)
            var11 = 'm';
        if (*(int*)((char*)arg0->unknown_0_ + 0x1a4) == 0x1f) {
            sprintf(var2, data_ov015_02194052, arg1);
        } else if (*(int*)((char*)arg0->unknown_0_ + 0x1a4) == 0x20) {
            sprintf(var2, data_ov015_02194064, arg1, var11);
        } else {
            sprintf(var2, data_ov015_02194078, arg1);
        }
        if (LoadFileIntoMemory(var2, data_0211e33c, &var3)) {
            ObjectArchiveLoadInfo var12;
            func_0203dafc((Struct_0203d028_11*)&var12);
            var12.allocator = &var0;
            var12.fileData = data_0211e33c;
            var12.unk_8 = var3;
            var12.unk_10 = 1;
            var12.packageID = 4;
            arg0->unknown_24_[0].LoadFromCCHROrCMOTArchive(&var12, 0);
        }
    }

    var0.Destroy();
    BackgroundLoader::RemoveLockGlobal();
    arg0->unknown_24_[0].StopCurrentAnimation();
    arg0->unknown_24_[0].MaybeSetRegularAnimation(data_ov015_0219408e, 0);
    var6.Reset();
    ZeroDestroyGPCPointer(&var6.pGPCFile);
}

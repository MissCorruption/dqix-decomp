#include <globaldefs.h>
#include "World/Zone3D.h"
#include "Filesystem/BackgroundLoader.h"
#include "NitroSDK/Filesystem/NarcHandle.h"
#include "NitroSDK/Filesystem/LowNitroHandle.h"
#include "NitroSDK/Filesystem/FileAccessor.h"
#include "Filesystem/FileIO.h"
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

extern "C" {
    void func_020c9be0();
    void _ZN6Zone3D13func_02014b04Ev(void* arg0);
}

extern "C" void func_0205e104(char*, SafeAllocator*, const void*, unsigned int);
#if defined(jpn)
#define data_020ef13e data_020ef07a
#define data_020ef145 data_020ef081
#define data_020ef14b data_020ef087
#define data_020ef150 data_020ef08c
#endif

extern char data_020ef13a;
extern char data_020ef13e;
extern char data_020ef145;
extern char data_020ef14b;
extern char data_020ef150;

// KEEP-NAME
// USA: func_02014108
ARM int Zone3D::func_02014108() {
    if (mapAMBLLoadHandle_ < 0) {
        return 1;
    }

    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    if (!var0->GetTaskStatus(mapAMBLLoadHandle_)) {
        return 0;
    }

    if (var0->GetDetailedTaskStatus(mapAMBLLoadHandle_) != 2) {
        var0->RemoveTask(mapAMBLLoadHandle_);
        mapAMBLLoadHandle_ = -1;
        return 1;
    }

    void* var1;
    unsigned int var2;
    var0->GetLoadedFileByID(mapAMBLLoadHandle_, &var1, &var2);

    for (int var3 = 0; var3 < 2; var3++) {
        NarcHandle var4;
        if (var4.Initialize(&data_020ef13a, static_cast<const unsigned char*>(var1))) {
            NitroVM var5;
            unsigned int var6 = 0;
            NitroVM_Initialize(&var5);
            while (PrepareReadFileInNARCByID(&var5, &var4, var6)) {
                char var7[0x50];
                NitroVM_WriteOutFilePath(&var5, var7, 0x50);
                char* var8 = strrchr(var7, '.');
                if (var8 == 0) {
                    NitroVM_FinishRead(&var5);
                    var6++;
                    continue;
                }
                unsigned int var9 = var5.fileInfo.unknown_8_ - var5.fileInfo.unknown_4_;
                NitroVM_FinishRead(&var5);
                const void* var10 = var4.GetFileByIndex(var6);
                if (var3 == 0) {
                    if (strcmp(&data_020ef13e, var8) == 0) {
                        func_0201445c(var10, var9, var7);
                    }
                } else if (var3 == 1) {
                    if (strcmp(&data_020ef145, var8) == 0) {
                        func_02014390(var10, var9);
                    } else if (strcmp(&data_020ef14b, var8) == 0) {
                        SafeAllocator* var11 = pAllocator_68_;
                        unsigned int var12;
                        void* var13 = DecompressLZ77FileIntoScratchSpace(*var11, var10, var12);
                        func_0205e104(substruct_c_.unknown_0_, var11, var13, var12);
                    } else if (strcmp(&data_020ef150, var8) == 0) {
                        func_020143d8(var10, var9);
                    }
                }
                var6++;
            }
            var4.Destroy();
        }

        if (var3 == 0) {
            unsigned int var14 = pAllocator_4c_->GetMaxPossibleAllocation();
            void* var15 = pAllocator_4c_->Allocate(var14);
            if (var15 == 0) {
                func_020c9be0();
            }
            internalAllocator_.ResetAllocatorPointer();
            internalAllocator_.CreateTypeA(var15, var14);
            pAllocator_68_ = &internalAllocator_;
            internalAllocator_.Reset();
        }
    }

    var0->RemoveTask(mapAMBLLoadHandle_);
    mapAMBLLoadHandle_ = -1;
    _ZN6Zone3D13func_02014b04Ev(this);
    return 1;
}

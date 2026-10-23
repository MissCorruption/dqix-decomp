#include <globaldefs.h>
#include "World/Zone3D.h"
#include "World/ZoneFeatures.h"
#include "Filesystem/BackgroundLoader.h"
#include "NitroSDK/Filesystem/NarcHandle.h"
#include "NitroSDK/Filesystem/NitroVM.h"
#include "NitroSDK/Filesystem/LowNitroHandle.h"
#include "NitroSDK/Filesystem/FileAccessor.h"
#include "std_library_functions.h"

extern "C"
{
    int _ZN6Zone3D13func_02014900EPKvjPN12ZoneFeatures13Opcode64EntryE(Zone3D* arg0, const void* arg1, unsigned int arg2, Struct_020134e0::Struct_020146fc* arg3);
    int func_02014a24(Zone3D* arg0, void* arg1);
}

extern char data_020ef13a[];
#if defined(jpn)
#define data_020ef199 data_020ef0d5
#endif
extern char data_020ef199[];

// KEEP-NAME
// USA: func_020146fc
// USA: _ZN6Zone3D13func_020146fcEv
ARM int Zone3D::func_020146fc()
{
    if (mapAMDJLoadHandle_ < 0)
        return 1;

    BackgroundLoader* var0 = BackgroundLoader::GetInstance();

    if (var0->GetTaskStatus(mapAMDJLoadHandle_) == 0)
        return 0;

    if (var0->GetDetailedTaskStatus(mapAMDJLoadHandle_) != BackgroundLoader::TaskStatus_Complete)
    {
        var0->RemoveTask(mapAMDJLoadHandle_);
        mapAMDJLoadHandle_ = -1;
        return 1;
    }

    void* var1;
    unsigned int var2;
    var0->GetLoadedFileByID(mapAMDJLoadHandle_, &var1, &var2);

    NarcHandle var3;
    if (var3.Initialize(data_020ef13a, (const unsigned char*)var1))
    {
        NitroVM var4;
        unsigned int var5 = 0;
        NitroVM_Initialize(&var4);

        while (PrepareReadFileInNARCByID(&var4, &var3, var5))
        {
            char var6[0x50];
            NitroVM_WriteOutFilePath(&var4, var6, sizeof(var6));
            const char* var7 = strrchr(var6, '.');
            if (var7 == NULL)
            {
                NitroVM_FinishRead(&var4);
                var5++;
                continue;
            }

            unsigned int var8 = var4.fileInfo.unknown_8_ - var4.fileInfo.unknown_4_;
            NitroVM_FinishRead(&var4);
            const void* var9 = var3.GetFileByIndex(var5);

            if (strcmp(data_020ef199, var7) == 0)
            {
                Struct_020134e0* var10 = &substruct_6c_;
                int var11 = var10->unknown_4_;
                for (int var12 = 0; var12 < var11; var12++)
                {
                    Struct_020134e0::Struct_020146fc* var13 = var10->func_0201e2d8(var12);
                    if (strstr(var6, var13->unknown_10_) != NULL)
                        _ZN6Zone3D13func_02014900EPKvjPN12ZoneFeatures13Opcode64EntryE(this, var9, var8, var13);
                }
            }
            var5++;
        }

        Struct_02013454* var14 = firstBMDJStruct_41c_;
        while (var14 != NULL)
        {
            func_02014a24(this, var14);
            if (unknown_42c_ == 2)
                break;
            var14 = var14->unknown_54_;
        }

        var3.Destroy();
    }

    var0->RemoveTask(mapAMDJLoadHandle_);
    mapAMDJLoadHandle_ = -1;

    if (unknown_42c_ == 1)
    {
        func_020145a8();
        return 0;
    }

    if (this->substruct_c_.unknown_a_[0] != 0)
        atmosphericEffects_.LoadArchive(this->substruct_c_.unknown_a_);

    return 1;
}

#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "NitroSDK/Filesystem/NarcHandle.h"
#include "Filesystem/FileIO.h"
#include "NitroSDK/Filesystem/FileAccessor.h"
#include "NitroSDK/Filesystem/LowNitroHandle.h"
#include "Grotto/Main/ActiveGrottoClass.h"
#include "World/ZoneFeatures.h"
#include "World/Zone3D.h"
#include "std_library_functions.h"
#include "World/GrottoTileGraph.h"

extern "C" Zone3D* func_02012fe4(void);
extern "C" void func_020a0cc4(unsigned int arg0);
extern "C" void func_020a0c0c(void);
extern "C" int func_0201b5b0(int arg0);
extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);

extern AllocatorUnion data_02114e20;
#if defined(jpn)
#define data_ov017_021d7b53 data_ov017_021d8293
#define data_ov017_021d7b57 data_ov017_021d8297
#endif
extern const char data_ov017_021d7b53[];
extern const char data_ov017_021d7b57[];
extern const char data_ov017_021d7b3a[];

struct Struct_ov017_021b4a88 {
    unsigned char unknown_0_[8];
    Struct_0201a300_4* unknown_8_;
    int unknown_c_;
    unsigned char unknown_10_;
};

// USA: func_ov017_021b4a88
extern "C" ARM void func_ov017_021b4a88(Struct_ov017_021b4a88* arg0) {
    GameState::GetInstance();
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    Zone3D* var1 = func_02012fe4();
    ActiveGrottoClass* var2 = &var1->grotto_;
    Struct_020134e0 var3;
    var3.func_0201e248();

    if (var0->GetTaskStatus(arg0->unknown_c_)) {
        if (var0->GetDetailedTaskStatus(arg0->unknown_c_) == BackgroundLoader::TaskStatus_Complete) {
            unsigned int var4;
            void* var5;
            var0->GetLoadedFileByID(arg0->unknown_c_, &var5, &var4);
            func_020a0cc4(0x2800);

            SafeAllocator var6;
            var6.ResetAllocatorPointer();
            var6.CreateTypeA(func_02012d88(&data_02114e20, 0x800), 0x800);
            var6.Reset();

            NarcHandle var7;
            if (var7.Initialize(data_ov017_021d7b53, (const unsigned char*)var5)) {
                NitroVM var8;
                NitroVM_Initialize(&var8);
                char var9[0x50];
                unsigned int var10 = 0;
                while (PrepareReadFileInNARCByID(&var8, &var7, var10)) {
                    NitroVM_WriteOutFilePath(&var8, var9, 0x50);
                    char* var11 = strrchr(var9, '.');
                    if (var11 == 0) {
                        NitroVM_FinishRead(&var8);
                        var10++;
                        continue;
                    }
                    NitroVM_FinishRead(&var8);
                    const void* var12 = var7.GetFileByIndex(var10);
                    if (strcmp(data_ov017_021d7b57, var11) == 0) {
                        unsigned int var13;
                        void* var14 = DecompressLZ77FileIntoScratchSpace(var6, var12, var13);
                        var3.func_0201e248();
                        var3.func_0201e2b4(&var6, var14, var13);
                    }
                    var10++;
                }
                var7.Destroy();
            }

            int var15 = arg0->unknown_8_->unknown_0_;
            arg0->unknown_8_->unknown_c_ = 1;
            int var16 = var15 % 20;
            SafeAllocator var17;
            var17.ResetAllocatorPointer();
            var17.CreateTypeA(func_02012d88(&data_02114e20, 0x600), 0x600);
            var17.Reset();
            if (func_0201b5b0(var15)) {
                int var18 = var2->CalculateAndStoreFloorWidth(var16);
                int var19 = var2->CalculateAndStoreFloorHeight(var16);
                ActiveGrottoClass* var20 = &var1->grotto_;
                var20->ClearGenerator(true);
                var20->AllocateGenerator(&var17, true);
                FloorMap var21;
                var21.Clear();
                var21.Clear();
                var21.AllocateBuffers(&var17);
                TileFeaturePlacementData* var22 = (TileFeaturePlacementData*)func_02012d88(&data_02114e20, sizeof(TileFeaturePlacementData) * 256);
                var20->CalculateFloorMap(var16, var18, var19, &var21);
                func_02019728(var1, var16, &var3, var22, &var21);
                func_0201a300(var1, var16, arg0->unknown_8_, var22, &var21);
                func_02012da4(&data_02114e20, var22);
                var21.Clear2();
            }
            void* var23 = var6.GetSignedAllocator();
            var6.Destroy();
            func_02012da4(&data_02114e20, var23);
            void* var24 = var17.GetSignedAllocator();
            var17.Destroy();
            func_02012da4(&data_02114e20, var24);
            func_020a0c0c();
        }
        var0->RemoveTask(arg0->unknown_c_);
        arg0->unknown_c_ = -1;
        arg0->unknown_c_ = var0->QueueLoadFile(data_ov017_021d7b3a, 0);
        arg0->unknown_10_ = 3;
    }
    var3.func_0201e248();
}

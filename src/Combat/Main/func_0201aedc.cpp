#include <globaldefs.h>
#include "Graphics/LightingManager.h"
#include "World/Zone3D.h"

extern "C" int func_0201b5d8(int arg0);

struct Struct_0201aedc;

extern "C" void func_02016d8c(void* arg0);

struct Struct_02012fe4;
struct Vector3i;

#if defined(jpn)
enum { Enum_0201aedc_9652 = 0x25f4 };
#else
enum { Enum_0201aedc_9652 = 0x25b4 };
#endif

// USA: func_0201aedc
extern "C" ARM void func_0201aedc(Zone3D* arg0) {
    if (func_0201b5d8(arg0->currentZoneID_)) return;

    char* var0 = (char*)arg0 + Enum_0201aedc_9652;

    Struct_02013454* var1 = func_020196fc(arg0, 5);
    if (var1 != 0) {
        Struct_02016874_2* var2 = var1->unknown_44_;
        unsigned short var3 = var2->unknown_2_;
        if (!(var3 & 4)) {
            Struct_02016874* var4 = var2->unknown_24_;
            Model3D* var5 = var4->unknown1_4_;
            if (var5 != 0 && var5->rawInternalModel_ != 0) {
                void* var6 = LightingManager::GetInstance();
                NSBXXInternalModel* var7 = var5->rawInternalModel_;
                ((LightingManager*)((Struct_0201aedc*)var6))->ApplyAmbientColorToModel(var7);
                func_02016d8c(var0 + 0x48);
                RenderConfig::SetObjectPosition((Vector3i*)(var0 + 0x6c));
                RenderConfig::SubmitToFifo();
                var5->Draw(1);
            }
        }
    }

    Struct_02013454* var8 = func_020196fc(arg0, 4);
    if (var8 == 0) return;
    Struct_02016874_2* var9 = var8->unknown_44_;
    unsigned short var10 = var9->unknown_2_;
    if (var10 & 4) return;
    Struct_02016874* var11 = var9->unknown_24_;
    Model3D* var12 = var11->unknown1_4_;
    if (var12 != 0 && var12->rawInternalModel_ != 0) {
        void* var13 = LightingManager::GetInstance();
        NSBXXInternalModel* var14 = var12->rawInternalModel_;
        ((LightingManager*)((Struct_0201aedc*)var13))->ApplyAmbientColorToModel(var14);
        func_02016d8c(var0 + 0x14);
        RenderConfig::SetObjectPosition((Vector3i*)(var0 + 0x38));
        RenderConfig::SubmitToFifo();
        var12->Draw(1);
    }
}

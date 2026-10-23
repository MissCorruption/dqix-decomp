#include <globaldefs.h>
#include "Graphics/Model3D.h"
#include "Graphics/VRAMStaging.h"
#include "NitroSDK/Cache.h"
struct Struct_020e8e14 { unsigned int unknown_0_[3]; };
extern unsigned short data_02109928[][2] __attribute__((aligned(4)));
extern unsigned short data_021099b0[][8] __attribute__((aligned(4)));
extern unsigned short data_02109a30[][2] __attribute__((aligned(4)));
extern Struct_020e8e14 data_020e8e14, data_020e8e20;
// USA: func_02099e18
extern "C" ARM void func_02099e18(Model3D* arg0, int arg1, int arg2, int arg3) {
    NSBXXTex* var0;
    void* var1[3];
    Struct_020e8e14 var2;
    Struct_020e8e14 var3;
    unsigned char* var4;
    unsigned int var5;
    int var6;
    if (arg0) {
        var0 = arg0->GetTEX0();
        if (var0) {
            var4 = (unsigned char*)var0 + var0->block4Offset_;
            var5 = var0->block4NumEightBytes_ << 3;
            var1[0] = data_02109928[arg2];
            var1[1] = data_02109a30[arg3];
            var1[2] = data_021099b0[arg1];
            var2 = data_020e8e14;
            var3 = data_020e8e20;
            for (var6 = 0; var6 < 3; var6++) memcpy(var4 + var3.unknown_0_[var6], var1[var6], var2.unknown_0_[var6]);
            CleanInvalidateCacheRange(var4, var5);
            StageTexFilePaletteData(var0, true);
        }
    }
}

#include <globaldefs.h>
#include "Graphics/Model3D.h"
#include "Graphics/VRAMStaging.h"
#include "NitroSDK/Cache.h"

struct Struct_02099d34 {
    unsigned short unknown_0_[10][2];
    unsigned short unknown_28_[8][2];
    unsigned short unknown_48_[8][4];
    unsigned short unknown_88_[8][8];
    unsigned short unknown_108_[8][2];
    unsigned short unknown_128_;
};

extern unsigned short data_02109928[10][2] __attribute__((aligned(4)));

// USA: func_02099d34
extern "C" ARM void func_02099d34(Model3D* arg0, int arg1, unsigned int arg2, int arg3) {
    NSBXXTex* var0;
    unsigned char* var1;
    int var2;
    int var3;
    Struct_02099d34* var4;
    unsigned char* var5;
    int var6;

    if (arg2 > 8) {
        return;
    }
    if (arg0 == NULL) {
        return;
    }
    var0 = arg0->GetTEX0();
    if (var0 == NULL) {
        return;
    }

    var1 = NULL;
    var2 = 0;
    var4 = (Struct_02099d34*)data_02109928;

    switch (arg1) {
    case 1:
        var1 = (unsigned char*)&var4->unknown_28_[arg2];
        var2 = 2;
        break;
    case 2:
        var1 = (unsigned char*)&var4->unknown_48_[arg2];
        var2 = 4;
        break;
    case 4:
        var1 = (unsigned char*)&var4->unknown_88_[arg2];
        var2 = 8;
        break;
    }
var3 = var2 * 2;
    var5 = (unsigned char*)var0 + var0->block4Offset_;
    var6 = var0->block4NumEightBytes_ << 3;
    if ((unsigned int)var6 > 0x20) {
        int var7 = var6 & 0x1f;
        var5 += var7;
        var6 -= var7;
    }

    while (var6 > 0) {
        memcpy(var5 + arg3, var1, var3);
        var6 -= 0x20;
    }

    unsigned int var8 = var0->block4Offset_;
    unsigned int var9 = var0->block4NumEightBytes_ << 3;
    CleanInvalidateCacheRange((const void*)((unsigned char*)var0 + var8), var9);
    StageTexFilePaletteData(var0, true);
}
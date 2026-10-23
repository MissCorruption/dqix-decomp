#include <globaldefs.h>

void LockStagedTextureVRAMCopying();
extern "C" void MapVRAMBanksToTextureImage(int handle);
extern "C" void MapVRAMBanksToTexturePalette(int value);
extern "C" void MapVRAMBanksToMainBG(int v);
extern "C" void MapVRAMBanksToMainObj(int mode);
extern "C" ARM void func_020bb48c(unsigned int arg0, int arg1);
extern "C" void MapVRAMBanksToSubBG(int);
extern "C" void MapVRAMBanksToSubObj(int value);
void UpdateVRAMStagingVRAMBanks(void);
void UnlockStagedTextureVRAMCopying(void);

struct Struct_02097c18 {
    char unknown_0_[0x1e];
    unsigned char unknown_1e_;
};

// USA: func_02097c18
extern "C" ARM void func_02097c18(struct Struct_02097c18* arg0, unsigned char arg1, unsigned int arg2, int arg3, int arg4, int arg5, int arg6, int arg7) {
    LockStagedTextureVRAMCopying();
    arg0->unknown_1e_ = arg1;
    if (arg1 & 1) {
        unsigned int var0;
        unsigned short var1;

        MapVRAMBanksToTextureImage(arg2);
        MapVRAMBanksToTexturePalette(arg3);
        MapVRAMBanksToMainBG(arg4);
        MapVRAMBanksToMainObj(arg5);

        var0 = arg2;
        var1 = 0;
        while (var0 != 0) {
            var1 = var1 + 1;
            var0 &= var0 - 1;
        }
        func_020bb48c(var1, 1);
    }
    if (arg1 & 2) {
        MapVRAMBanksToSubBG(arg6);
        MapVRAMBanksToSubObj(arg7);
    }
    UpdateVRAMStagingVRAMBanks();
    UnlockStagedTextureVRAMCopying();
}

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

struct Struct_02097b34 {
    unsigned int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    char unknown_18_[0x1e - 0x18];
    unsigned char unknown_1e_;
};

// USA: func_02097b34
extern "C" ARM void func_02097b34(struct Struct_02097b34* arg0) {
    LockStagedTextureVRAMCopying();
    if (arg0->unknown_1e_ & 1) {
        unsigned int var0;
        unsigned short var1;

        MapVRAMBanksToTextureImage(arg0->unknown_0_);
        MapVRAMBanksToTexturePalette(arg0->unknown_4_);
        MapVRAMBanksToMainBG(arg0->unknown_8_);
        MapVRAMBanksToMainObj(arg0->unknown_c_);

        var0 = arg0->unknown_0_;
        var1 = 0;
        while (var0 != 0) {
            var1 = var1 + 1;
            var0 &= var0 - 1;
        }
        func_020bb48c(var1, 1);
    }
    if (arg0->unknown_1e_ & 2) {
        MapVRAMBanksToSubBG(arg0->unknown_10_);
        MapVRAMBanksToSubObj(arg0->unknown_14_);
    }
    UpdateVRAMStagingVRAMBanks();
    UnlockStagedTextureVRAMCopying();
}

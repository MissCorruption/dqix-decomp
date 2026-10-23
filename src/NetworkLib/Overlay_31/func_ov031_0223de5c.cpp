#include <globaldefs.h>

extern "C" int DisableMainBGVRAMBanks();
extern "C" int DisableMainObjVRAMBanks();
extern "C" void DisableSubBGVRAMBanks();
extern "C" void DisableSubObjVRAMBanks(void);
extern "C" void func_ov031_0223df4c();
extern "C" void MapVRAMBanksToMainBG(int v);
extern "C" void MapVRAMBanksToMainObj(int mode);
extern "C" void MapVRAMBanksToMainBGExtendedPalette(int mode);
extern "C" void MapVRAMBanksToMainObjExtendedPalette(unsigned int flag);
extern "C" void MapVRAMBanksToTextureImage(int v);
extern "C" void MapVRAMBanksToTexturePalette(int value);
extern "C" void MapVRAMBanksToClearTextures(int mode);
extern "C" void MapVRAMBanksToSubBG(int v);
extern "C" void MapVRAMBanksToSubObj(unsigned short value);
extern "C" void MapVRAMBanksToSubBGExtendedPalette(unsigned short value);
extern "C" void MapVRAMBanksToSubObjExtendedPalette(unsigned short value);
extern "C" void MapVRAMBanksToLCDC(unsigned short mask);

struct Struct_ov031_02290d68_2 {
    int unknown_0_, unknown_4_, unknown_8_, unknown_c_, unknown_10_, unknown_14_, unknown_18_, unknown_1c_;
    int unknown_20_, unknown_24_, unknown_28_, unknown_2c_, unknown_30_;
};
extern Struct_ov031_02290d68_2 data_ov031_02290d68;

typedef void (*Type_ov031_0223de5c)(int);

// USA: func_ov031_0223de5c
extern "C" ARM void func_ov031_0223de5c() {
    DisableMainBGVRAMBanks();
    DisableMainObjVRAMBanks();
    DisableSubBGVRAMBanks();
    DisableSubObjVRAMBanks();
    func_ov031_0223df4c();

    MapVRAMBanksToMainBG(data_ov031_02290d68.unknown_0_);
    MapVRAMBanksToMainObj(data_ov031_02290d68.unknown_4_);
    MapVRAMBanksToMainBGExtendedPalette(data_ov031_02290d68.unknown_8_);
    MapVRAMBanksToMainObjExtendedPalette(data_ov031_02290d68.unknown_c_);
    MapVRAMBanksToTextureImage(data_ov031_02290d68.unknown_10_);
    MapVRAMBanksToTexturePalette(data_ov031_02290d68.unknown_14_);
    MapVRAMBanksToClearTextures(data_ov031_02290d68.unknown_18_);
    MapVRAMBanksToSubBG(data_ov031_02290d68.unknown_1c_);
    ((Type_ov031_0223de5c)MapVRAMBanksToSubObj)(data_ov031_02290d68.unknown_20_);
    ((Type_ov031_0223de5c)MapVRAMBanksToSubBGExtendedPalette)(data_ov031_02290d68.unknown_24_);
    ((Type_ov031_0223de5c)MapVRAMBanksToSubObjExtendedPalette)(data_ov031_02290d68.unknown_28_);
    ((Type_ov031_0223de5c)MapVRAMBanksToLCDC)(data_ov031_02290d68.unknown_30_);

    *(volatile unsigned short *)0x4000050 = 0;
    *(volatile unsigned short *)0x4001050 = 0;
    *(volatile unsigned int *)0x4000010 = 0;
    *(volatile unsigned int *)0x4000014 = 0;
    *(volatile unsigned int *)0x4000018 = 0;
    *(volatile unsigned int *)0x400001c = 0;
    *(volatile unsigned int *)0x4001010 = 0;
    *(volatile unsigned int *)0x4001014 = 0;
    *(volatile unsigned int *)0x4001018 = 0;
    *(volatile unsigned int *)0x400101c = 0;
}

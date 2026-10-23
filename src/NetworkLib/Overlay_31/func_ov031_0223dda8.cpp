#include <globaldefs.h>

extern "C" int DisableMainBGVRAMBanks();
extern "C" int DisableMainObjVRAMBanks();
extern "C" int DisableMainBGExtendedPaletteVRAMBanks();
extern "C" int DisableMainObjExtendedPaletteVRAMBanks();
extern "C" int DisableTextureImageVRAMBanks();
extern "C" int DisableTexturePaletteVRAMBanks();
extern "C" int DisableClearTextureVRAMBanks();
extern "C" int DisableSubBGVRAMBanks();
extern "C" int DisableSubObjVRAMBanks();
extern "C" int DisableSubBGExtendedPaletteVRAMBanks(void);
extern "C" int DisableSubObjExtendedPaletteVRAMBanks(void);
extern "C" int DisableArm7WorkVRAMBanks(void);
extern "C" int DisableLCDCMappedVRAMBanks(void);
extern "C" void MapVRAMBanksToArm7WorkRAM(int flag);
extern "C" void func_ov031_0223df4c(void);

struct Struct_ov031_02290d68 {
	int unknown_0_;
	int unknown_4_;
	int unknown_8_;
	int unknown_c_;
	int unknown_10_;
	int unknown_14_;
	int unknown_18_;
	int unknown_1c_;
	int unknown_20_;
	int unknown_24_;
	int unknown_28_;
	int unknown_2c_;
	int unknown_30_;
};
extern Struct_ov031_02290d68 data_ov031_02290d68;

// USA: func_ov031_0223dda8
extern "C" ARM void func_ov031_0223dda8(void) {
	data_ov031_02290d68.unknown_0_ = DisableMainBGVRAMBanks();
	data_ov031_02290d68.unknown_4_ = DisableMainObjVRAMBanks();
	data_ov031_02290d68.unknown_8_ = DisableMainBGExtendedPaletteVRAMBanks();
	data_ov031_02290d68.unknown_c_ = DisableMainObjExtendedPaletteVRAMBanks();
	data_ov031_02290d68.unknown_10_ = DisableTextureImageVRAMBanks();
	data_ov031_02290d68.unknown_14_ = DisableTexturePaletteVRAMBanks();
	data_ov031_02290d68.unknown_18_ = DisableClearTextureVRAMBanks();
	data_ov031_02290d68.unknown_1c_ = DisableSubBGVRAMBanks();
	data_ov031_02290d68.unknown_20_ = DisableSubObjVRAMBanks();
	data_ov031_02290d68.unknown_24_ = DisableSubBGExtendedPaletteVRAMBanks();
	data_ov031_02290d68.unknown_28_ = DisableSubObjExtendedPaletteVRAMBanks();
	data_ov031_02290d68.unknown_2c_ = DisableArm7WorkVRAMBanks();
	data_ov031_02290d68.unknown_30_ = DisableLCDCMappedVRAMBanks();

	MapVRAMBanksToArm7WorkRAM(data_ov031_02290d68.unknown_2c_);
	func_ov031_0223df4c();
}

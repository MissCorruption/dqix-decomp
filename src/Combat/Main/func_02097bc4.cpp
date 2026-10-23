#include <globaldefs.h>

extern "C" int DisableTextureImageVRAMBanks();
extern "C" int DisableTexturePaletteVRAMBanks();
extern "C" int DisableMainBGVRAMBanks();
extern "C" int DisableMainObjVRAMBanks();
extern "C" int DisableSubBGVRAMBanks();
extern "C" int DisableSubObjVRAMBanks();

struct Struct_020978fc {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    char unknown_18_[6];
    unsigned char unknown_1e_;
};

// USA: func_02097bc4
extern "C" ARM void func_02097bc4(struct Struct_020978fc* arg0, int arg1) {
    arg0->unknown_1e_ = (unsigned char)arg1;
    if (arg1 & 1) {
        arg0->unknown_0_ = DisableTextureImageVRAMBanks();
        arg0->unknown_4_ = DisableTexturePaletteVRAMBanks();
        arg0->unknown_8_ = DisableMainBGVRAMBanks();
        arg0->unknown_c_ = DisableMainObjVRAMBanks();
    }
    if (arg1 & 2) {
        arg0->unknown_10_ = DisableSubBGVRAMBanks();
        arg0->unknown_14_ = DisableSubObjVRAMBanks();
    }
}

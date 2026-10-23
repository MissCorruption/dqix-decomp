#include <globaldefs.h>

extern "C" {
    void* func_ov017_021b2164(void);
    void MapVRAMBanksToSubBG(void* p);
}

struct Struct_ov011_021880f0 {
    char unknown_0_[0x1d8];
    void* unknown_1d8_;
};

// USA: func_ov011_021880f0
extern "C" ARM int func_ov011_021880f0(void) {
    Struct_ov011_021880f0* var0 = (Struct_ov011_021880f0*)func_ov017_021b2164();
    MapVRAMBanksToSubBG(var0->unknown_1d8_);
    return 1;
}

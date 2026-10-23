#include <globaldefs.h>

extern "C" unsigned short GetSubBGVRAMBanks(void);

struct Struct_ov011_02184c14 {
    char unknown_0_[0x1d8];
    unsigned int unknown_1d8_;
};

// USA: func_ov011_02184c14
extern "C" ARM void func_ov011_02184c14(Struct_ov011_02184c14* arg0) {
    arg0->unknown_1d8_ = GetSubBGVRAMBanks();
}

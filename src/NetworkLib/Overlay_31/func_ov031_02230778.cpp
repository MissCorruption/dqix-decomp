#include <globaldefs.h>

struct Struct_ov031_02230778 {
    unsigned char unknown_0_[0x44];
    unsigned char unknown_44_;
};
struct Struct_ov031_02290ca0_19 {
    unsigned char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned char unknown_6_[2];
    Struct_ov031_02230778* unknown_8_;
};
extern Struct_ov031_02290ca0_19 data_ov031_02290ca0;
extern const unsigned char data_ov031_02249048[];
extern "C" int FastIntDivide(int, unsigned int);
extern "C" int FastIntModulus(int, unsigned int);
#define REG_BG0OFS_02230778 (*(volatile unsigned int*)0x04000010)
#define REG_BG2OFS_02230778 (*(volatile unsigned int*)0x04000018)

static inline void inline_ov031_02230778(int arg0, int arg1) {
    REG_BG0OFS_02230778 = (arg0 << 16) & 0x1ff0000;
    REG_BG2OFS_02230778 = (arg1 << 16) & 0x1ff0000;
}

// USA: func_ov031_02230778
extern "C" ARM void func_ov031_02230778() {
    if (!data_ov031_02290ca0.unknown_8_->unknown_44_) return;
    int var0 = FastIntDivide(data_ov031_02290ca0.unknown_4_, 29);
    int var1 = FastIntModulus(data_ov031_02290ca0.unknown_4_, 29) - 51;
    int var2 = var1 + data_ov031_02249048[var0];
    inline_ov031_02230778(var1, var2);
    data_ov031_02290ca0.unknown_8_->unknown_44_ = 0;
}

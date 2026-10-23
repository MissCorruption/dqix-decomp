#include <globaldefs.h>

struct Struct_ov031_02237ecc_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
};
extern "C" ARM void ColorEffect_ChangeBrightness(struct Struct_ov031_02237ecc_2* dst, int value);

struct Struct_ov031_02237ecc { unsigned char unknown_0_[0x1a]; signed char unknown_1a_; };
extern Struct_ov031_02237ecc* data_ov031_02290d10;

struct Struct_ov031_02237ecc_3 { unsigned char unknown_0_[8]; int unknown_8_; };
extern "C" void func_ov031_0223e2b8(struct Struct_ov031_02237ecc_3* arg0, int arg1);

extern "C" void func_ov031_02237f2c(void);

// USA: func_ov031_02237ecc
extern "C" ARM void func_ov031_02237ecc(void* arg0) {
    data_ov031_02290d10->unknown_1a_--;
    ColorEffect_ChangeBrightness((Struct_ov031_02237ecc_2*)0x4000050, data_ov031_02290d10->unknown_1a_);
    if (data_ov031_02290d10->unknown_1a_ > -12) {
        return;
    }
    func_ov031_0223e2b8((struct Struct_ov031_02237ecc_3*)arg0, (int)func_ov031_02237f2c);
}

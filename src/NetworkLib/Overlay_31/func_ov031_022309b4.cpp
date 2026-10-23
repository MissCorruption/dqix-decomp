#include <globaldefs.h>

struct Struct_ov031_022309b4 {
    unsigned char unknown_0_[0x38];
    int unknown_38_;
    unsigned char unknown_3c_[6];
    unsigned char unknown_42_;
    unsigned char unknown_43_[4];
    unsigned char unknown_47_;
};
struct Struct_ov031_02290ca0_21 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    Struct_ov031_022309b4* unknown_8_;
};
extern Struct_ov031_02290ca0_21 data_ov031_02290ca0;

extern "C" unsigned char* func_ov031_02235c70(void);
extern "C" void* func_ov031_0223e218(void*, void*, void*, int);
extern "C" void func_ov031_02236878(int);
extern "C" void func_ov031_0222f9ec(void);
extern "C" void func_ov031_022351f8(int);
extern "C" void func_ov031_022307fc(void);
extern "C" void func_ov031_022308d4(void);
extern "C" void func_ov031_0223060c(int);
extern "C" void func_ov031_022306d4(int);

// USA: func_ov031_022309b4
extern "C" ARM void func_ov031_022309b4(int arg0) {
    unsigned char* var0 = func_ov031_02235c70();
    int var1 = 0;
    unsigned char var2 = data_ov031_02290ca0.unknown_0_;
    if (var2 == 8 && var0[0xf5] == 0) {
        if (arg0 == 0 || arg0 == 2) return;
    }
    switch (var2) {
    case 0:
        if (arg0 == 1) data_ov031_02290ca0.unknown_0_ = 11;
        else if (arg0 == 3) data_ov031_02290ca0.unknown_2_++;
        else var1 = 2;
        break;
    case 10:
        if (arg0 == 1) data_ov031_02290ca0.unknown_2_--;
        else if (arg0 == 3) data_ov031_02290ca0.unknown_0_ = data_ov031_02290ca0.unknown_8_->unknown_42_;
        else var1 = 2;
        break;
    case 11:
        if (arg0 == 1) {
            if (data_ov031_02290ca0.unknown_8_->unknown_47_) return;
            func_ov031_02236878(9);
            data_ov031_02290ca0.unknown_8_->unknown_47_ = 1;
            return;
        } else if (arg0 == 3) {
            data_ov031_02290ca0.unknown_0_ = 0;
            data_ov031_02290ca0.unknown_2_ = 0;
            data_ov031_02290ca0.unknown_4_ = 0;
            func_ov031_0222f9ec();
            func_ov031_022351f8(0);
        } else var1 = 2;
        break;
    case 12:
    case 13:
        data_ov031_02290ca0.unknown_8_->unknown_42_ = var2;
        if (arg0 == 1) {
            data_ov031_02290ca0.unknown_0_ = 10;
            data_ov031_02290ca0.unknown_2_ = 3;
            data_ov031_02290ca0.unknown_4_ = 0x91;
            func_ov031_0222f9ec();
            func_ov031_022351f8(0x37);
        } else if (arg0 == 3) {
            if (data_ov031_02290ca0.unknown_8_->unknown_47_) return;
            func_ov031_02236878(9);
            data_ov031_02290ca0.unknown_8_->unknown_47_ = 1;
            return;
        } else if (var2 == 12) {
            data_ov031_02290ca0.unknown_0_ = 13;
        } else {
            data_ov031_02290ca0.unknown_0_ = 12;
        }
        break;
    default:
        if (arg0 == 1) {
            if (data_ov031_02290ca0.unknown_2_ != 0) {
                data_ov031_02290ca0.unknown_2_--;
                break;
            }
            func_ov031_02236878(0x13);
            data_ov031_02290ca0.unknown_8_->unknown_38_ = (int)func_ov031_0223e218(0, (void*)func_ov031_0223060c, 0, 0x78);
            return;
        } else if (arg0 == 3) {
            if (data_ov031_02290ca0.unknown_2_ < 3) {
                data_ov031_02290ca0.unknown_2_++;
                break;
            }
            func_ov031_02236878(0x13);
            data_ov031_02290ca0.unknown_8_->unknown_38_ = (int)func_ov031_0223e218(0, (void*)func_ov031_022306d4, 0, 0x78);
            return;
        }
        var1 = 2;
        if (var2 == 2) data_ov031_02290ca0.unknown_0_ = 3;
        else if (var2 == 3) data_ov031_02290ca0.unknown_0_ = 2;
        else if (var2 == 7) data_ov031_02290ca0.unknown_0_ = 8;
        else if (var2 == 8) data_ov031_02290ca0.unknown_0_ = 7;
        else break;
        func_ov031_02236878(8);
        func_ov031_022307fc();
        break;
    }
    if (var1 == 2) return;
    func_ov031_02236878(8);
    if (var1 != 0) return;
    func_ov031_022308d4();
}

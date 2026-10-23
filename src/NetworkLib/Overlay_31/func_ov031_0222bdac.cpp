#include <globaldefs.h>

struct Struct_ov031_0222bdac {
    unsigned char unknown_0_[0x38];
    void* unknown_38_;
    unsigned char unknown_3c_[4];
    unsigned short unknown_40_;
    unsigned char unknown_42_[0xf];
    unsigned char unknown_51_;
    unsigned char unknown_52_;
    unsigned char unknown_53_;
    unsigned char unknown_54_;
    unsigned char unknown_55_;
    unsigned char unknown_56_;
    unsigned char unknown_57_;
    unsigned char unknown_58_;
};
struct Struct_ov031_02290c8c_6 { unsigned char unknown_0_[2]; unsigned short unknown_2_; Struct_ov031_0222bdac* unknown_4_; };
extern Struct_ov031_02290c8c_6 data_ov031_02290c8c;
extern "C" unsigned char func_ov031_022351e4();
extern "C" unsigned char func_ov031_022351d0();
extern "C" void func_ov031_02222e98();
extern "C" void func_ov031_02222e80();
extern "C" void func_ov031_022238cc();
extern "C" void func_ov031_0222c3b4();
extern "C" void func_ov031_0222c8cc();
extern "C" int func_ov031_02236878(int);
extern "C" void func_ov031_0222c71c();
extern "C" void func_ov031_0222c7d8();
extern "C" void* func_ov031_0223e218(void*, void*, void*, int);
extern "C" int FastIntDivide(int, int);
extern "C" int FastIntModulus(int, int);

// USA: func_ov031_0222bdac
extern "C" ARM void func_ov031_0222bdac() {
    if (data_ov031_02290c8c.unknown_4_->unknown_38_) return;
    if (data_ov031_02290c8c.unknown_4_->unknown_55_) data_ov031_02290c8c.unknown_4_->unknown_55_--;
    switch (func_ov031_022351e4()) {
    case 1:
        data_ov031_02290c8c.unknown_4_->unknown_57_ = 1;
        func_ov031_02222e98();
        return;
    case 2:
        if (data_ov031_02290c8c.unknown_4_->unknown_55_) return;
        func_ov031_022238cc();
        data_ov031_02290c8c.unknown_2_ = FastIntDivide(data_ov031_02290c8c.unknown_4_->unknown_40_ * func_ov031_022351d0(), data_ov031_02290c8c.unknown_4_->unknown_53_);
        func_ov031_0222c3b4();
        data_ov031_02290c8c.unknown_4_->unknown_55_ = 4;
        return;
    case 3: {
        data_ov031_02290c8c.unknown_4_->unknown_57_ = 0;
        func_ov031_02222e80();
        data_ov031_02290c8c.unknown_2_ = FastIntDivide(data_ov031_02290c8c.unknown_4_->unknown_40_ * func_ov031_022351d0(), data_ov031_02290c8c.unknown_4_->unknown_53_);
        func_ov031_02236878(0x13);
        func_ov031_0222c3b4();
        int var0 = FastIntModulus(data_ov031_02290c8c.unknown_2_, 0x1c);
        if (var0 == 0) {
            func_ov031_0222c8cc();
            return;
        }
        if (var0 < 0xe) {
            data_ov031_02290c8c.unknown_4_->unknown_38_ = func_ov031_0223e218(0, (void*)func_ov031_0222c71c, 0, 0x78);
            return;
        } else {
            data_ov031_02290c8c.unknown_4_->unknown_38_ = func_ov031_0223e218(0, (void*)func_ov031_0222c7d8, 0, 0x78);
        }
        return;
    }
    case 4:
        if (data_ov031_02290c8c.unknown_2_ == 0) {
            if (data_ov031_02290c8c.unknown_4_->unknown_58_) return;
            func_ov031_02236878(9);
            data_ov031_02290c8c.unknown_4_->unknown_58_ = 1;
        } else {
            func_ov031_02236878(0x13);
            data_ov031_02290c8c.unknown_4_->unknown_38_ = func_ov031_0223e218(0, (void*)func_ov031_0222c71c, 0, 0x78);
        }
        return;
    case 6:
        if (data_ov031_02290c8c.unknown_4_->unknown_51_ <= 4 || data_ov031_02290c8c.unknown_2_ == data_ov031_02290c8c.unknown_4_->unknown_40_) {
            if (data_ov031_02290c8c.unknown_4_->unknown_58_) return;
            func_ov031_02236878(9);
            data_ov031_02290c8c.unknown_4_->unknown_58_ = 1;
        } else {
            func_ov031_02236878(0x13);
            data_ov031_02290c8c.unknown_4_->unknown_38_ = func_ov031_0223e218(0, (void*)func_ov031_0222c7d8, 0, 0x78);
        }
        return;
    case 5:
    case 7:
        data_ov031_02290c8c.unknown_4_->unknown_58_ = 0;
        return;
    }
}

#include <globaldefs.h>

struct Struct_ov031_02232d64 { unsigned char unknown_0_[0x1c]; unsigned char unknown_1c_; };
struct Struct_ov031_02290cc0_7 { unsigned char unknown_0_; unsigned char unknown_1_[3]; Struct_ov031_02232d64* unknown_4_; };
extern Struct_ov031_02290cc0_7 data_ov031_02290cc0;
extern "C" void func_ov031_02236878(int arg0);
extern "C" void func_ov031_02232ce8(void);

// USA: func_ov031_02232d64
extern "C" ARM void func_ov031_02232d64(int arg0) {
    int var0 = 1;

    switch (data_ov031_02290cc0.unknown_0_) {
    case 0:
        data_ov031_02290cc0.unknown_4_->unknown_1c_ = 0;
        if (arg0 == 0) data_ov031_02290cc0.unknown_0_ = 2;
        else if (arg0 == 2) data_ov031_02290cc0.unknown_0_ = (unsigned char)var0;
        else if (arg0 == 1) data_ov031_02290cc0.unknown_0_ = 3;
        else data_ov031_02290cc0.unknown_0_ = 4;
        break;
    case 1:
        data_ov031_02290cc0.unknown_4_->unknown_1c_ = (unsigned char)var0;
        if (arg0 == 0) data_ov031_02290cc0.unknown_0_ = 0;
        else if (arg0 == 2) data_ov031_02290cc0.unknown_0_ = 2;
        else if (arg0 == 1) data_ov031_02290cc0.unknown_0_ = 3;
        else data_ov031_02290cc0.unknown_0_ = 5;
        break;
    case 2:
        data_ov031_02290cc0.unknown_4_->unknown_1c_ = 2;
        if (arg0 == 0) data_ov031_02290cc0.unknown_0_ = (unsigned char)var0;
        else if (arg0 == 2) data_ov031_02290cc0.unknown_0_ = 0;
        else if (arg0 == 1) data_ov031_02290cc0.unknown_0_ = 3;
        else data_ov031_02290cc0.unknown_0_ = 6;
        break;
    case 3: {
        unsigned char var1 = data_ov031_02290cc0.unknown_4_->unknown_1c_;
        int var2 = var1 + 4;
        if (arg0 == 1) data_ov031_02290cc0.unknown_0_ = var2;
        else if (arg0 == 3) data_ov031_02290cc0.unknown_0_ = var1;
        else var0 = 0;
        break;
    }
    case 4:
        data_ov031_02290cc0.unknown_4_->unknown_1c_ = 0;
        if (arg0 == 0) data_ov031_02290cc0.unknown_0_ = 6;
        else if (arg0 == 2) data_ov031_02290cc0.unknown_0_ = 5;
        else if (arg0 == 1) data_ov031_02290cc0.unknown_0_ = 0;
        else data_ov031_02290cc0.unknown_0_ = 3;
        break;
    case 5:
        data_ov031_02290cc0.unknown_4_->unknown_1c_ = (unsigned char)var0;
        if (arg0 == 0) data_ov031_02290cc0.unknown_0_ = 4;
        else if (arg0 == 2) data_ov031_02290cc0.unknown_0_ = 6;
        else if (arg0 == 1) data_ov031_02290cc0.unknown_0_ = (unsigned char)var0;
        else data_ov031_02290cc0.unknown_0_ = 3;
        break;
    case 6:
        data_ov031_02290cc0.unknown_4_->unknown_1c_ = 2;
        if (arg0 == 0) data_ov031_02290cc0.unknown_0_ = 5;
        else if (arg0 == 2) data_ov031_02290cc0.unknown_0_ = 4;
        else if (arg0 == 1) data_ov031_02290cc0.unknown_0_ = 2;
        else data_ov031_02290cc0.unknown_0_ = 3;
        break;
    }

    if (!var0) return;
    func_ov031_02236878(8);
    func_ov031_02232ce8();
}

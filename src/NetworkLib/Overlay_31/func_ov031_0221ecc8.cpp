#include <globaldefs.h>

struct Struct_ov031_0221ecc8 { short unknown_0_; short unknown_2_; };
struct Struct_ov031_0224f620 {
    int unknown_0_, unknown_4_, unknown_8_, unknown_c_;
    int unknown_10_, unknown_14_;
    int unknown_18_;
    void (*unknown_1c_)(int, int);
    int unknown_20_, unknown_24_;
};
extern Struct_ov031_0224f620 data_ov031_0224f620;
extern "C" int func_ov031_0220cdd4(int, int, int);
extern "C" int func_ov031_0220d010(int, int, int);
extern "C" int func_ov031_0220cce4();
extern "C" void func_ov031_0220ca88();

// USA: func_ov031_0221ecc8
extern "C" THUMB void func_ov031_0221ecc8(Struct_ov031_0221ecc8* arg0) {
    if (!arg0) return;
    switch (arg0->unknown_0_) {
    case 1:
        if (arg0->unknown_2_ == 0) {
            if (data_ov031_0224f620.unknown_18_ == 4) {
                data_ov031_0224f620.unknown_18_ = 3;
                if (data_ov031_0224f620.unknown_1c_) data_ov031_0224f620.unknown_1c_(6, 0);
            } else if (data_ov031_0224f620.unknown_18_ == 6) {
                if (func_ov031_0220cdd4(data_ov031_0224f620.unknown_10_, data_ov031_0224f620.unknown_14_, data_ov031_0224f620.unknown_4_) != 3) {
                    data_ov031_0224f620.unknown_18_ = 3;
                    if (data_ov031_0224f620.unknown_1c_) data_ov031_0224f620.unknown_1c_(2, 0);
                }
            } else if (data_ov031_0224f620.unknown_18_ == 8) {
                if (func_ov031_0220d010(data_ov031_0224f620.unknown_20_, data_ov031_0224f620.unknown_24_, data_ov031_0224f620.unknown_c_) != 3) {
                    data_ov031_0224f620.unknown_18_ = 3;
                    if (data_ov031_0224f620.unknown_1c_) data_ov031_0224f620.unknown_1c_(2, 0);
                }
            }
        } else {
            data_ov031_0224f620.unknown_18_ = 1;
            if (data_ov031_0224f620.unknown_1c_) data_ov031_0224f620.unknown_1c_(2, 0);
        }
        break;
    case 3:
        if (arg0->unknown_2_ == 0) {
            if (data_ov031_0224f620.unknown_18_ == 6) {
                data_ov031_0224f620.unknown_18_ = 5;
                if (data_ov031_0224f620.unknown_1c_) data_ov031_0224f620.unknown_1c_(8, 0);
            }
        } else {
            data_ov031_0224f620.unknown_18_ = 3;
            if (data_ov031_0224f620.unknown_1c_) data_ov031_0224f620.unknown_1c_(9, 0);
        }
        break;
    case 5:
        if (arg0->unknown_2_ == 0) {
            if (data_ov031_0224f620.unknown_18_ == 8) {
                data_ov031_0224f620.unknown_18_ = 7;
                if (data_ov031_0224f620.unknown_1c_) data_ov031_0224f620.unknown_1c_(12, 0);
            }
        } else {
            data_ov031_0224f620.unknown_18_ = 3;
            if (data_ov031_0224f620.unknown_1c_) data_ov031_0224f620.unknown_1c_(13, 0);
        }
        break;
    case 4:
        if (arg0->unknown_2_ == 0) {
            if (data_ov031_0224f620.unknown_18_ == 4) {
                data_ov031_0224f620.unknown_18_ = 3;
                if (data_ov031_0224f620.unknown_1c_) data_ov031_0224f620.unknown_1c_(10, 0);
            } else if (data_ov031_0224f620.unknown_18_ == 6) {
                if (func_ov031_0220cdd4(data_ov031_0224f620.unknown_10_, data_ov031_0224f620.unknown_14_, data_ov031_0224f620.unknown_4_) != 3) {
                    data_ov031_0224f620.unknown_18_ = 3;
                    if (data_ov031_0224f620.unknown_1c_) data_ov031_0224f620.unknown_1c_(2, 0);
                }
            } else if (data_ov031_0224f620.unknown_18_ == 2) {
                if (func_ov031_0220cce4() != 3) {
                    data_ov031_0224f620.unknown_18_ = 3;
                    if (data_ov031_0224f620.unknown_1c_) data_ov031_0224f620.unknown_1c_(2, 0);
                }
            } else if (data_ov031_0224f620.unknown_18_ == 8) {
                if (func_ov031_0220d010(data_ov031_0224f620.unknown_20_, data_ov031_0224f620.unknown_24_, data_ov031_0224f620.unknown_c_) != 3) {
                    data_ov031_0224f620.unknown_18_ = 3;
                    if (data_ov031_0224f620.unknown_1c_) data_ov031_0224f620.unknown_1c_(2, 0);
                }
            }
        } else {
            data_ov031_0224f620.unknown_18_ = 3;
            if (data_ov031_0224f620.unknown_1c_) data_ov031_0224f620.unknown_1c_(11, 0);
        }
        break;
    case 6:
        if (arg0->unknown_2_ == 0) {
            if (data_ov031_0224f620.unknown_18_ == 4) {
                data_ov031_0224f620.unknown_18_ = 3;
                if (data_ov031_0224f620.unknown_1c_) data_ov031_0224f620.unknown_1c_(14, 0);
            } else if (data_ov031_0224f620.unknown_18_ == 6) {
                if (func_ov031_0220cdd4(data_ov031_0224f620.unknown_10_, data_ov031_0224f620.unknown_14_, data_ov031_0224f620.unknown_4_) != 3) {
                    data_ov031_0224f620.unknown_18_ = 3;
                    if (data_ov031_0224f620.unknown_1c_) data_ov031_0224f620.unknown_1c_(2, 0);
                }
            } else if (data_ov031_0224f620.unknown_18_ == 2) {
                if (func_ov031_0220cce4() != 3) {
                    data_ov031_0224f620.unknown_18_ = 3;
                    if (data_ov031_0224f620.unknown_1c_) data_ov031_0224f620.unknown_1c_(2, 0);
                }
            } else if (data_ov031_0224f620.unknown_18_ == 8) {
                if (func_ov031_0220d010(data_ov031_0224f620.unknown_20_, data_ov031_0224f620.unknown_24_, data_ov031_0224f620.unknown_c_) != 3) {
                    data_ov031_0224f620.unknown_18_ = 3;
                    if (data_ov031_0224f620.unknown_1c_) data_ov031_0224f620.unknown_1c_(2, 0);
                }
            } else data_ov031_0224f620.unknown_18_ = 3;
        } else {
            data_ov031_0224f620.unknown_18_ = 3;
            if (data_ov031_0224f620.unknown_1c_) data_ov031_0224f620.unknown_1c_(15, 0);
        }
        break;
    case 2:
        if (arg0->unknown_2_ == 0) {
            if (data_ov031_0224f620.unknown_18_ == 2) {
                func_ov031_0220ca88();
                data_ov031_0224f620.unknown_18_ = 0;
                if (data_ov031_0224f620.unknown_1c_) data_ov031_0224f620.unknown_1c_(20, 0);
            }
        } else {
            data_ov031_0224f620.unknown_18_ = 3;
            if (data_ov031_0224f620.unknown_1c_) data_ov031_0224f620.unknown_1c_(2, 0);
        }
        break;
    case 7:
        if (data_ov031_0224f620.unknown_18_ == 5)
            if (data_ov031_0224f620.unknown_1c_) data_ov031_0224f620.unknown_1c_(5, 0);
        break;
    case 0:
    default:
        if (data_ov031_0224f620.unknown_1c_) data_ov031_0224f620.unknown_1c_(1, 0);
        break;
    }
}

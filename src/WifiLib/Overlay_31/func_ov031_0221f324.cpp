#include <globaldefs.h>
struct Struct_ov031_0221f324 {
    short unknown_0_;
    short unknown_2_;
};
struct Struct_ov031_0224f670 {
    unsigned char unknown_0_[0x28];
    unsigned char *unknown_28_;
    int unknown_2c_;
    unsigned char unknown_30_[0x14];
    int unknown_44_;
    int unknown_48_;
    void *unknown_4c_;
    unsigned char unknown_50_[8];
    int unknown_58_;
    int unknown_5c_;
    int unknown_60_;
};
extern Struct_ov031_0224f670 data_ov031_0224f670;
extern void (*data_ov031_0224f6f0)(int, int);
extern "C" int func_ov031_0220cdd4(int, int, int);
extern "C" int func_ov031_0220d010(void *, unsigned char *, int);
extern "C" int func_ov031_0220cce4();
extern "C" void func_ov031_0220ca88();
static inline int inline_ov031_0221f324(int arg0, int arg1, int arg2) {
    return func_ov031_0220cdd4(arg0, arg1, arg2);
}

// USA: func_ov031_0221f324
extern "C" THUMB void func_ov031_0221f324(Struct_ov031_0221f324 *arg0) {
    if (!arg0) return;
    switch (arg0->unknown_0_) {
    case 1:
        if (arg0->unknown_2_ == 0) {
            if (data_ov031_0224f670.unknown_2c_ == 4) {
                data_ov031_0224f670.unknown_2c_ = 3;
                if (data_ov031_0224f6f0) data_ov031_0224f6f0(6, 0);
            } else if (data_ov031_0224f670.unknown_2c_ == 6) {
                if (inline_ov031_0221f324(data_ov031_0224f670.unknown_44_, data_ov031_0224f670.unknown_48_, data_ov031_0224f670.unknown_60_) != 3) {
                    data_ov031_0224f670.unknown_2c_ = 3;
                    if (data_ov031_0224f6f0) data_ov031_0224f6f0(2, 0);
                }
            } else if (data_ov031_0224f670.unknown_2c_ == 8) {
                if (func_ov031_0220d010(data_ov031_0224f670.unknown_4c_, data_ov031_0224f670.unknown_28_, data_ov031_0224f670.unknown_58_) != 3) {
                    data_ov031_0224f670.unknown_2c_ = 3;
                    if (data_ov031_0224f6f0) data_ov031_0224f6f0(2, 0);
                }
            }
        } else {
            data_ov031_0224f670.unknown_2c_ = 1;
            if (data_ov031_0224f6f0) data_ov031_0224f6f0(2, 0);
        }
        break;
    case 3:
        if (arg0->unknown_2_ == 0) {
            if (data_ov031_0224f670.unknown_2c_ == 6) {
                data_ov031_0224f670.unknown_2c_ = 5;
                if (data_ov031_0224f6f0) data_ov031_0224f6f0(8, 0);
            }
        } else {
            data_ov031_0224f670.unknown_2c_ = 3;
            if (data_ov031_0224f6f0) data_ov031_0224f6f0(9, 0);
        }
        break;
    case 5:
        if (arg0->unknown_2_ == 0) {
            if (data_ov031_0224f670.unknown_2c_ == 8) {
                data_ov031_0224f670.unknown_2c_ = 7;
                if (data_ov031_0224f6f0) data_ov031_0224f6f0(12, 0);
            }
        } else {
            data_ov031_0224f670.unknown_2c_ = 3;
            if (data_ov031_0224f6f0) data_ov031_0224f6f0(13, 0);
        }
        break;
    case 4:
        if (arg0->unknown_2_ == 0) {
            if (data_ov031_0224f670.unknown_2c_ == 4) {
                data_ov031_0224f670.unknown_2c_ = 3;
                if (data_ov031_0224f6f0) data_ov031_0224f6f0(10, 0);
            } else if (data_ov031_0224f670.unknown_2c_ == 6) {
                if (inline_ov031_0221f324(data_ov031_0224f670.unknown_44_, data_ov031_0224f670.unknown_48_, data_ov031_0224f670.unknown_60_) != 3) {
                    data_ov031_0224f670.unknown_2c_ = 3;
                    if (data_ov031_0224f6f0) data_ov031_0224f6f0(2, 0);
                }
            } else if (data_ov031_0224f670.unknown_2c_ == 2) {
                if (func_ov031_0220cce4() != 3) {
                    data_ov031_0224f670.unknown_2c_ = 3;
                    if (data_ov031_0224f6f0) data_ov031_0224f6f0(2, 0);
                }
            } else if (data_ov031_0224f670.unknown_2c_ == 8) {
                if (func_ov031_0220d010(data_ov031_0224f670.unknown_4c_, data_ov031_0224f670.unknown_28_, data_ov031_0224f670.unknown_58_) != 3) {
                    data_ov031_0224f670.unknown_2c_ = 3;
                    if (data_ov031_0224f6f0) data_ov031_0224f6f0(2, 0);
                }
            }
        } else {
            data_ov031_0224f670.unknown_2c_ = 3;
            if (data_ov031_0224f6f0) data_ov031_0224f6f0(11, 0);
        }
        break;
    case 6:
        if (arg0->unknown_2_ == 0) {
            if (data_ov031_0224f670.unknown_2c_ == 4) {
                data_ov031_0224f670.unknown_2c_ = 3;
                if (data_ov031_0224f6f0) data_ov031_0224f6f0(14, 0);
            } else if (data_ov031_0224f670.unknown_2c_ == 6) {
                if (inline_ov031_0221f324(data_ov031_0224f670.unknown_44_, data_ov031_0224f670.unknown_48_, data_ov031_0224f670.unknown_60_) != 3) {
                    data_ov031_0224f670.unknown_2c_ = 3;
                    if (data_ov031_0224f6f0) data_ov031_0224f6f0(2, 0);
                }
            } else if (data_ov031_0224f670.unknown_2c_ == 2) {
                if (func_ov031_0220cce4() != 3) {
                    data_ov031_0224f670.unknown_2c_ = 3;
                    if (data_ov031_0224f6f0) data_ov031_0224f6f0(2, 0);
                }
            } else if (data_ov031_0224f670.unknown_2c_ == 8) {
                if (func_ov031_0220d010(data_ov031_0224f670.unknown_4c_, data_ov031_0224f670.unknown_28_, data_ov031_0224f670.unknown_58_) != 3) {
                    data_ov031_0224f670.unknown_2c_ = 3;
                    if (data_ov031_0224f6f0) data_ov031_0224f6f0(2, 0);
                }
            } else if (data_ov031_0224f670.unknown_2c_ == 7) {
                data_ov031_0224f670.unknown_2c_ = 3;
            }
        } else {
            data_ov031_0224f670.unknown_2c_ = 3;
            if (data_ov031_0224f6f0) data_ov031_0224f6f0(15, 0);
        }
        break;
    case 2:
        if (arg0->unknown_2_ == 0) {
            if (data_ov031_0224f670.unknown_2c_ == 2) {
                func_ov031_0220ca88();
                data_ov031_0224f670.unknown_2c_ = 0;
                if (data_ov031_0224f6f0) data_ov031_0224f6f0(20, 0);
            }
        } else {
            data_ov031_0224f670.unknown_2c_ = 3;
            if (data_ov031_0224f6f0) data_ov031_0224f6f0(2, 0);
        }
        break;
    case 7:
        if (data_ov031_0224f670.unknown_2c_ == 5)
            if (data_ov031_0224f6f0) data_ov031_0224f6f0(5, 0);
        break;
    case 8:
        if (data_ov031_0224f6f0) data_ov031_0224f6f0(4, 0);
        break;
    case 9:
        data_ov031_0224f670.unknown_2c_ = 0;
        if (data_ov031_0224f6f0) data_ov031_0224f6f0(3, 0);
        break;
    case 0:
    default:
        if (data_ov031_0224f6f0) data_ov031_0224f6f0(1, 0);
        break;
    }
}

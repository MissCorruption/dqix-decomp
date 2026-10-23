#include <globaldefs.h>

extern "C" void func_ov031_0222506c(void);
extern "C" void func_ov031_02236878(int arg0);

struct Struct_ov031_02225148 {
    unsigned char unknown_0_[0x120];
    signed char unknown_120_;
    signed char unknown_121_;
};

extern Struct_ov031_02225148* data_ov031_02250bfc;
extern signed char data_ov031_02248b9c[53][4];

// USA: func_ov031_02225148
extern "C" ARM void func_ov031_02225148(int arg0) {
    signed char var0 = data_ov031_02250bfc->unknown_121_;
    data_ov031_02250bfc->unknown_121_ = data_ov031_02248b9c[var0][arg0];

    Struct_ov031_02225148* var1 = data_ov031_02250bfc;
    signed char var2 = var1->unknown_121_;
    if (var2 == 0x2e && arg0 == 3) {
        var1->unknown_120_ = var0;
    } else if (var2 == 0x33 && (arg0 == 1 || arg0 == 3)) {
        var1->unknown_120_ = var0;
    } else if (var2 == 0x34 && (arg0 == 1 || arg0 == 3)) {
        if (var0 != 0x2e) {
            var1->unknown_120_ = var0;
        }
    } else if (var2 == -1) {
        if (var1->unknown_120_ == 0x23 || var1->unknown_120_ == 0x32) {
            var1->unknown_121_ = 0x23;
        } else {
            var1->unknown_121_ = 0x22;
        }
    } else if (var2 == -2) {
        switch (var1->unknown_120_) {
        case 0:
        case 0x31:
            var1->unknown_121_ = 0x31;
            break;
        case 1:
        case 0x24:
            var1->unknown_121_ = 0x24;
            break;
        case 3:
        case 0x26:
            var1->unknown_121_ = 0x26;
            break;
        case 4:
        case 0x27:
            var1->unknown_121_ = 0x27;
            break;
        case 5:
        case 0x28:
            var1->unknown_121_ = 0x28;
            break;
        default:
            var1->unknown_121_ = 0x25;
            break;
        }
    } else if (var2 == -3) {
        switch (var1->unknown_120_) {
        case 6:
        case 0x29:
            var1->unknown_121_ = 0x29;
            break;
        case 7:
        case 0x2a:
            var1->unknown_121_ = 0x2a;
            break;
        case 9:
        case 0x2c:
            var1->unknown_121_ = 0x2c;
            break;
        case 10:
        case 0x2d:
            var1->unknown_121_ = 0x2d;
            break;
        case 11:
        case 0x22:
        case 0x23:
        case 0x32:
            var1->unknown_121_ = 0x2e;
            break;
        default:
            var1->unknown_121_ = 0x2b;
            break;
        }
    } else if (var2 == -4) {
        switch (var1->unknown_120_) {
        case 0:
        case 0x31:
            var1->unknown_121_ = 0;
            break;
        case 1:
        case 0x24:
            var1->unknown_121_ = 1;
            break;
        case 3:
        case 0x26:
            var1->unknown_121_ = 3;
            break;
        case 4:
        case 0x27:
            var1->unknown_121_ = 4;
            break;
        case 5:
        case 0x28:
            var1->unknown_121_ = 5;
            break;
        default:
            var1->unknown_121_ = 2;
            break;
        }
    } else if (var2 == -5) {
        switch (var1->unknown_120_) {
        case 6:
        case 0x29:
            var1->unknown_121_ = 6;
            break;
        case 7:
        case 0x2a:
            var1->unknown_121_ = 7;
            break;
        case 9:
        case 0x2c:
            var1->unknown_121_ = 9;
            break;
        case 10:
        case 0x2d:
            var1->unknown_121_ = 10;
            break;
        case 11:
        case 0x22:
            var1->unknown_121_ = 11;
            break;
        case 0x23:
        case 0x32:
            var1->unknown_121_ = 0x32;
            break;
        default:
            var1->unknown_121_ = 8;
            break;
        }
    }
    func_ov031_0222506c();
    func_ov031_02236878(8);
}

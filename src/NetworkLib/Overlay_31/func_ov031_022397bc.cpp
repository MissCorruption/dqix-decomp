#include <globaldefs.h>

struct Struct_ov031_022397bc_2 { unsigned short unknown_0_; unsigned short unknown_2_; unsigned short unknown_4_; };
struct Struct_ov031_022397bc { char unknown_0_[0x40]; int unknown_40_; int unknown_44_; char unknown_48_[0x1398]; char unknown_13e0_[1]; };
struct Struct_ov031_02290d18_12 { void (*unknown_0_)(unsigned int, void*, ...); Struct_ov031_022397bc* unknown_4_; };
extern Struct_ov031_02290d18_12 data_ov031_02290d18;
extern char data_ov031_0224c3c4[];
extern char data_ov031_0224c3a4[];
extern "C" void func_ov031_022393e4(int);
extern "C" void func_ov031_02239368(int);
extern "C" int func_ov031_022398e8();
extern "C" int func_020d5d34(void*, int, int, int, int);

// USA: func_ov031_022397bc
extern "C" ARM void func_ov031_022397bc(Struct_ov031_022397bc_2* arg0) {
    if (arg0->unknown_2_) {
        func_ov031_022393e4(arg0->unknown_2_);
        func_ov031_02239368(9);
        return;
    }
    switch (arg0->unknown_4_) {
    case 10:
        if (data_ov031_02290d18.unknown_4_->unknown_44_ == 2) {
            if (data_ov031_02290d18.unknown_4_->unknown_40_ == 4) {
                if (func_ov031_022398e8()) return;
                if (data_ov031_02290d18.unknown_0_) data_ov031_02290d18.unknown_0_(0x08000000, data_ov031_0224c3c4);
                func_ov031_02239368(9);
                return;
            } else if (data_ov031_02290d18.unknown_4_->unknown_40_ == 6) {
                return;
            }
        } else if (data_ov031_02290d18.unknown_4_->unknown_44_ == 4) {
            int var0 = func_020d5d34(data_ov031_02290d18.unknown_4_->unknown_13e0_, 13, 7, 68, 1);
            if (var0) {
                func_ov031_022393e4(var0);
                func_ov031_02239368(9);
            } else {
                func_ov031_02239368(5);
            }
            return;
        }
        func_ov031_02239368(4);
        break;
    case 11:
        break;
    case 12:
    case 13:
    default:
        if (data_ov031_02290d18.unknown_0_) data_ov031_02290d18.unknown_0_(0x08000000, data_ov031_0224c3a4, arg0->unknown_4_);
    }
}

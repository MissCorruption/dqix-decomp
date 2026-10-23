#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_0205bb84 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    int unknown_18_;
    int unknown_1c_;
    int unknown_20_;
    int* unknown_24_;
    int* unknown_28_;
    int* unknown_2c_;
};
struct Struct_0205c4a8 : Struct_0205bb84 {};
struct Struct_0205bf3c : Struct_0205c4a8 {
    int unknown_30_;
    unsigned short unknown_34_;
    unsigned char unknown_36_;
    unsigned char unknown_37_;
    unsigned char unknown_38_;
    unsigned char unknown_39_;
    unsigned char unknown_3a_;
    unsigned char unknown_3b_;
    unsigned char unknown_3c_;
    unsigned char unknown_3d_;
};
struct Struct_020e7dc4 { int unknown_0_[4]; };
struct Struct_020e7db8 { unsigned short unknown_0_[5]; };
struct Struct_020e7db0 { unsigned char unknown_0_[4]; };
extern "C" void func_0205bf3c(Struct_0205bf3c*);
extern "C" int func_0205bb84(Struct_0205bb84*);
extern "C" void func_0205c4a8(Struct_0205c4a8*, int);
extern "C" void func_0205bb04(Struct_0205bf3c*, int);
extern const Struct_020e7db8 data_020e7db8;
extern const Struct_020e7dc4 data_020e7dc4;
extern const Struct_020e7db0 data_020e7db0, data_020e7db4;

// USA: func_0205bf58
extern "C" ARM int func_0205bf58(Struct_0205bf3c* arg0, unsigned int arg1) {
    if (arg0->unknown_0_ == 0) return 0;
    if (arg0->unknown_8_ <= 0) return 0;
    if (arg0->unknown_c_ <= 0) return 0;
    unsigned char var0 = arg0->unknown_39_;
    unsigned char var1 = arg0->unknown_3a_;
    Struct_020e7db8 var2 = data_020e7db8;
    int var3 = 0;
    while (var2.unknown_0_[var3] != 0xffff && arg0->unknown_34_ == 0) {
        unsigned short var4 = var2.unknown_0_[var3];
        if (g_keyManager.TestKeysPressed(var4)) {
            if (arg0->unknown_36_ | arg0->unknown_37_) {
                func_0205bf3c(arg0);
                break;
            }
            Struct_020e7dc4 var5 = data_020e7dc4;
            Struct_020e7db0 var6 = data_020e7db0;
            Struct_020e7db0 var7 = data_020e7db4;
            arg0->unknown_34_ = var4;
            arg0->unknown_38_ = var0;
            arg0->unknown_30_ = var5.unknown_0_[var3];
            arg0->unknown_36_ = var6.unknown_0_[var3];
            arg0->unknown_37_ = var7.unknown_0_[var3];
            if (arg0->unknown_34_ == 0x40 || arg0->unknown_34_ == 0x80) {
                int var8 = arg0->unknown_1c_;
                arg0->unknown_1c_ += arg0->unknown_30_;
                if (arg0->unknown_3d_) {
                    if (arg0->unknown_c_ <= arg0->unknown_1c_) arg0->unknown_1c_ = 0;
                    else if (arg0->unknown_1c_ < 0) arg0->unknown_1c_ = arg0->unknown_c_ - 1;
                    if (arg0->unknown_34_ == 0x40) {
                        int var9 = arg0->unknown_0_;
                        if (var9 <= func_0205bb84(arg0))
                            func_0205bb04(arg0, var9 - 1);
                    } else if (arg0->unknown_34_ == 0x80) {
                        if (arg0->unknown_0_ <= func_0205bb84(arg0))
                            arg0->unknown_1c_ = 0;
                    }
                } else {
                    if (arg0->unknown_c_ <= arg0->unknown_1c_) arg0->unknown_1c_ = var8;
                    else if (arg0->unknown_1c_ < 0) arg0->unknown_1c_ = var8;
                    if (func_0205bb84(arg0) >= arg0->unknown_0_)
                        arg0->unknown_1c_ = var8;
                }
            } else if (arg0->unknown_34_ == 0x20 || arg0->unknown_34_ == 0x10) {
                int var10 = arg0->unknown_18_;
                arg0->unknown_18_ += arg0->unknown_30_;
                if (arg0->unknown_8_ <= arg0->unknown_18_) {
                    if (arg0->unknown_3c_) {
                        arg0->unknown_18_ = 0;
                        if (arg0->unknown_4_ > 1) func_0205c4a8(arg0, 1);
                    } else {
                        if (arg0->unknown_4_ == 1) arg0->unknown_18_ = var10;
                        else {
                            arg0->unknown_18_ = 0;
                            func_0205c4a8(arg0, 1);
                        }
                    }
                } else if (arg0->unknown_18_ < 0) {
                    if (arg0->unknown_3c_) {
                        arg0->unknown_18_ = arg0->unknown_8_ - 1;
                        if (arg0->unknown_4_ > 1) func_0205c4a8(arg0, -1);
                    } else {
                        if (arg0->unknown_4_ == 1) arg0->unknown_18_ = var10;
                        else {
                            arg0->unknown_18_ = arg0->unknown_8_ - 1;
                            func_0205c4a8(arg0, -1);
                        }
                    }
                }
                if (func_0205bb84(arg0) >= arg0->unknown_0_) {
                    if (arg0->unknown_4_ == 1) arg0->unknown_18_ = var10;
                    else {
                        arg0->unknown_18_ = 0;
                        func_0205c4a8(arg0, 1);
                    }
                }
            }
            return 1;
        }
        ++var3;
    }
    if (arg0->unknown_36_) {
        if (g_keyManager.TestKeysHeld(0xf0)) {
            unsigned char var11 = arg1;
            if (var11 < arg0->unknown_38_) arg0->unknown_38_ -= var11;
            else {
                arg0->unknown_38_ = var1;
                arg0->unknown_36_ = 1;
                arg0->unknown_37_ = 0;
                arg0->unknown_1c_ += arg0->unknown_30_;
                if (arg0->unknown_c_ <= arg0->unknown_1c_) arg0->unknown_1c_ = arg0->unknown_c_ - 1;
                else if (arg0->unknown_1c_ < 0) arg0->unknown_1c_ = 0;
                int var12 = arg0->unknown_0_;
                if (var12 <= func_0205bb84(arg0))
                    func_0205bb04(arg0, var12 - 1);
                if (arg0->unknown_34_ == 0x40 || arg0->unknown_34_ == 0x20) {
                    int var13 = arg0->unknown_0_;
                    if (var13 <= func_0205bb84(arg0))
                        func_0205bb04(arg0, var13 - 1);
                } else if (arg0->unknown_34_ == 0x80 || arg0->unknown_34_ == 0x10) {
                    if (arg0->unknown_0_ <= func_0205bb84(arg0))
                        arg0->unknown_1c_ = 0;
                }
            }
        }
        if (g_keyManager.TestKeysReleased(0xf0)) func_0205bf3c(arg0);
        return 1;
    } else if (arg0->unknown_37_) {
        if (g_keyManager.TestKeysHeld(0xf0)) {
            unsigned char var14 = arg1;
            if (var14 < arg0->unknown_38_) arg0->unknown_38_ -= var14;
            else {
                arg0->unknown_38_ = var1;
                arg0->unknown_36_ = 0;
                arg0->unknown_37_ = 1;
                arg0->unknown_18_ += arg0->unknown_30_;
                if (arg0->unknown_8_ <= arg0->unknown_18_) {
                    arg0->unknown_18_ = arg0->unknown_8_ - 1;
                    func_0205c4a8(arg0, 1);
                } else if (arg0->unknown_18_ < 0) {
                    arg0->unknown_18_ = 0;
                    func_0205c4a8(arg0, -1);
                }
                if (func_0205bb84(arg0) >= arg0->unknown_0_) {
                    if (arg0->unknown_4_ == 1) arg0->unknown_18_ = 0;
                    else {
                        arg0->unknown_18_ = 0;
                        func_0205c4a8(arg0, 1);
                    }
                }
            }
        }
        if (g_keyManager.TestKeysReleased(0xf0)) func_0205bf3c(arg0);
        return 1;
    }
    return 0;
}

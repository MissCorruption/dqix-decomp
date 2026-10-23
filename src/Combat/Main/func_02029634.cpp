#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_02029634_3 {
    char unknown_0_[0x4c];
    int unknown_4c_;
    char unknown_50_[0xc];
    short unknown_5c_, unknown_5e_, unknown_60_;
    char unknown_62_[6];
    short unknown_68_, unknown_6a_;
    unsigned char unknown_6c_, unknown_6d_, unknown_6e_, unknown_6f_, unknown_70_;
};
struct Struct_02029634;
struct Struct_02029634_2 { int unknown_0_; char unknown_4_[0x34]; int unknown_38_; };
extern "C" int func_0202a9f4(Struct_02029634_3*);
extern "C" int func_0202aa94(Struct_02029634_3*);
extern "C" Struct_02029634_2* func_0202a9ac(Struct_02029634*, int);
extern "C" void func_0202a91c(Struct_02029634_3*);
extern "C" void func_0202a8cc(char*, int);

// USA: func_02029634
extern "C" ARM void func_02029634(Struct_02029634_3* arg0, int arg1) {
    if (arg0->unknown_6c_ != 0) return;
    if (!(arg0->unknown_6d_ & 1) && arg0->unknown_5c_ >= 0 && arg0->unknown_5c_ <= arg0->unknown_5e_) {
        if (g_keyManager.TestKeysReleased(0x40)) {
            arg0->unknown_6f_ = 0;
            arg0->unknown_68_ = 0;
            arg0->unknown_6a_ = 0;
        }
        if (g_keyManager.TestKeysReleased(0x80)) {
            arg0->unknown_6f_ = 0;
            arg0->unknown_68_ = 0;
            arg0->unknown_6a_ = 0;
        }
        if (arg0->unknown_6f_) arg0->unknown_6a_ += arg1;
        if (func_0202a9f4(arg0)) {
            if (arg0->unknown_6a_ >= arg0->unknown_68_) {
                arg0->unknown_6a_ = 0;
                arg0->unknown_68_ -= 5;
                if (arg0->unknown_68_ < 0) arg0->unknown_68_ = 0;
                if (arg0->unknown_60_ != arg0->unknown_5c_ || !arg0->unknown_6f_) {
                    --arg0->unknown_60_;
                    if (arg0->unknown_60_ < arg0->unknown_5c_) arg0->unknown_60_ = arg0->unknown_5e_;
                }
            }
            if (!arg0->unknown_6f_) {
                arg0->unknown_68_ = 15;
                arg0->unknown_6a_ = 0;
            }
            arg0->unknown_6f_ = 1;
        } else if (func_0202aa94(arg0)) {
            if (arg0->unknown_6a_ >= arg0->unknown_68_) {
                arg0->unknown_6a_ = 0;
                arg0->unknown_68_ -= 5;
                if (arg0->unknown_68_ < 0) arg0->unknown_68_ = 0;
                if (arg0->unknown_60_ != arg0->unknown_5e_ || !arg0->unknown_6f_) {
                    ++arg0->unknown_60_;
                    if (arg0->unknown_5e_ < arg0->unknown_60_) arg0->unknown_60_ = arg0->unknown_5c_;
                }
            }
            if (!arg0->unknown_6f_) {
                arg0->unknown_68_ = 15;
                arg0->unknown_6a_ = 0;
            }
            arg0->unknown_6f_ = 1;
        }
        if (arg0->unknown_70_) {
            if (g_keyManager.TestKeyRepeat(0x20)) {
                arg0->unknown_60_ -= arg0->unknown_4c_;
                if (arg0->unknown_60_ < arg0->unknown_5c_) arg0->unknown_60_ = arg0->unknown_5c_;
            } else if (g_keyManager.TestKeyRepeat(0x10)) {
                arg0->unknown_60_ += arg0->unknown_4c_;
                if (arg0->unknown_5e_ < arg0->unknown_60_) arg0->unknown_60_ = arg0->unknown_5e_;
            }
        }
    }
    Struct_02029634_2* var0 = func_0202a9ac(reinterpret_cast<Struct_02029634*>(arg0), arg0->unknown_60_);
    if (arg0->unknown_6d_ & 1) return;
    if (g_keyManager.TestKeysPressed(1)) {
        int var1 = arg0->unknown_6d_ & 2;
        if (!var1 && !var0) {
            func_0202a91c(arg0);
            arg0->unknown_6e_ = 1;
            return;
        }
        if (!var0) return;
        if (arg0->unknown_60_ < 0 || var0->unknown_0_ != 1) {
            if (var1) return;
            func_0202a91c(arg0);
            arg0->unknown_6e_ = 1;
            return;
        }
        if (var0->unknown_0_ != 1 || var0->unknown_38_ != 0) return;
        func_0202a8cc(reinterpret_cast<char*>(var0), 1);
        arg0->unknown_6c_ = 4;
        return;
    }
    if (!(arg0->unknown_6d_ & 4) && g_keyManager.TestKeysPressed(2)) {
        arg0->unknown_6e_ = 0;
        func_0202a91c(arg0);
        return;
    }
    if (g_keyManager.TestKeysPressed(4)) {
        arg0->unknown_6e_ = 0;
        func_0202a91c(arg0);
    }
}

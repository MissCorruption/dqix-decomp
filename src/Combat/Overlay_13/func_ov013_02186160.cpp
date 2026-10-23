#include <globaldefs.h>
#include "Input/Input.h"

#if defined(jpn)
#define func_ov013_02186160 func_ov013_02187178
#endif

struct Struct_ov013_021846a0_2 {
#if defined(jpn)
    char unknown_0_[0x34];
    unsigned char unknown_34_[0xbc];
    char unknown_f0_[0x5ac - 0xf0];
#else
    char unknown1_0_[0x38];
    unsigned char unknown_38_[0xbc];
    char unknown_f4_[0x620 - 0xf4];
#endif
    char unknown_620_[0x18];
    unsigned char unknown_638_[4];
    unsigned char unknown_63c_;
    unsigned char unknown_63d_;
    unsigned char unknown_63e_;
    bool unknown_63f_;
    bool unknown_640_;
    unsigned int unknown_644_;
    int unknown_648_;
#if !defined(jpn)
    int unknown_64c_;
#endif
    int unknown_650_;
    void* unknown_654_;
    char* unknown_658_;
    int unknown_65c_;
    int unknown_660_;
    unsigned char unknown_664_;
    unsigned char unknown_665_;
    char unknown_666_[2];
    int unknown_668_;
    int unknown_66c_;
    int unknown_670_;
    int unknown_674_[5];
    int unknown_688_[5];
    unsigned char unknown_69c_[5];
    char unknown_6a1_[8];
    unsigned char unknown_6a9_[5];
    char unknown_6ae_[0xe];
    unsigned char unknown_6bc_;
#if defined(jpn)
    enum Enum_ov013_02186160 { Enum_ov013_02186160_m1 = -1, Enum_ov013_02186160_2 = 2, Enum_ov013_02186160_3 = 3, Enum_ov013_02186160_4 = 4 };
    void inline_ov013_02186160();
#endif
};

extern "C" void* __clear(void* arg0, int arg1);
struct Struct_0205dee8;
extern "C" void func_0205dee8(struct Struct_0205dee8* arg0, int arg1);
struct Struct_0205c570;
extern "C" int func_0205d794(struct Struct_0205c570* arg0);
extern "C" void func_0205d7a0(unsigned char* arg0, int arg1);
struct Struct_0205d81c;
extern "C" int func_0205d97c(Struct_0205d81c* arg0);
extern "C" int func_ov013_021842a0(void* arg0, int arg1);
struct Struct_02108760;
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);
extern int data_02108760;
extern "C" void func_ov013_02185774(void* arg0);
extern "C" void func_ov013_02185828(unsigned char* arg0);
struct Struct_0205d6a0;
extern "C" void func_0205d6a0(struct Struct_0205d6a0* arg0, int arg1);
extern "C" void func_ov013_02186c64(void* arg0, int arg1, int arg2);
extern "C" void func_ov013_02186bd4(void* arg0);

#if defined(jpn)
inline void Struct_ov013_021846a0_2::inline_ov013_02186160() {
    func_0205dee8((Struct_0205dee8*)unknown_34_, 4);
    func_0205d6a0((Struct_0205d6a0*)unknown_34_, 0);
}
#endif

// USA: func_ov013_02186160
extern "C" ARM void func_ov013_02186160(Struct_ov013_021846a0_2* arg0) {
#if defined(jpn)
    arg0->unknown_6bc_ |= 1;
    arg0->unknown_638_[0] = 0;
    arg0->unknown_638_[1] = 0;
    func_0205dee8((Struct_0205dee8*)arg0->unknown_34_, 0);

    int var0[5];
    for (int var1 = 0; var1 < 5; var1++)
        var0[var1] = arg0->unknown_688_[var1];
    bool var2 = false;
    bool var3 = false;
    if (g_keyManager.TestKeyRepeat(0x80)) {
        ++arg0->unknown_65c_;
        var2 = true;
    }
    if (g_keyManager.TestKeyRepeat(0x40)) {
        --arg0->unknown_65c_;
        var2 = true;
    }
    if (arg0->unknown_65c_ < 0) arg0->unknown_65c_ = 5;
    if (arg0->unknown_65c_ >= 6) arg0->unknown_65c_ = 0;
    int var4 = g_touchInput.TestPressInRectangle(0x1e, 0x5a, 0x2a, 0xa);
    if (arg0->unknown_648_ == 2) {
        arg0->unknown_65c_ = (signed char)func_0205d794((Struct_0205c570*)arg0->unknown_34_);
        var2 = true;
    }
    if (arg0->unknown_66c_ >= 0 && arg0->unknown_65c_ < 5) {
        if (g_keyManager.TestKeyRepeat(0x20) ||
            g_keyManager.TestKeyRepeat(2) ||
            (g_touchInput.repeatFired_ && g_touchInput.TestHoldInRectangle(0x52, arg0->unknown_65c_ * 0xd + 0x12, 0xe, 0xb))) {
            if (arg0->unknown_69c_[arg0->unknown_65c_] == 0) {
                arg0->unknown_688_[arg0->unknown_65c_]--;
                var2 = true;
                if (arg0->unknown_688_[arg0->unknown_65c_] < 0)
                    arg0->unknown_688_[arg0->unknown_65c_] = 0;
                else
                    func_0205eaa0((Struct_02108760*)&data_02108760, 0x5d, 0);
            }
        } else if (arg0->unknown_66c_ > 0 && arg0->unknown_674_[arg0->unknown_65c_] != 0x64) {
            if (arg0->unknown_674_[arg0->unknown_65c_] > arg0->unknown_670_) {
                if (g_keyManager.TestKeyRepeat(0x611) ||
                    (g_touchInput.repeatFired_ && g_touchInput.TestHoldInRectangle(0x8c, arg0->unknown_65c_ * 0xd + 0x14, 0xe, 0xb))) {
                    arg0->unknown_6bc_ &= ~1;
                    arg0->unknown_63c_ = Struct_ov013_021846a0_2::Enum_ov013_02186160_2;
                    var3 = true;
                    var2 = true;
                    if (arg0->unknown_640_) func_ov013_02185828((unsigned char*)arg0);
                    else func_ov013_02185774(arg0);
                    if (!arg0->unknown_640_) {
                        arg0->inline_ov013_02186160();
                    }
                }
            } else {
                bool var5 = false;
                if (g_keyManager.TestKeyRepeat(0x611) ||
                    (g_touchInput.repeatFired_ && g_touchInput.TestHoldInRectangle(0x84, arg0->unknown_65c_ * 0xd + 0x14, 0xe, 0xb))) {
                    if (arg0->unknown_69c_[arg0->unknown_65c_] == 0) {
                        arg0->unknown_688_[arg0->unknown_65c_]++;
                        var5 = true;
                        var2 = true;
                    }
                }
                if (arg0->unknown_688_[arg0->unknown_65c_] + arg0->unknown_674_[arg0->unknown_65c_] > arg0->unknown_670_) {
                    arg0->unknown_688_[arg0->unknown_65c_]--;
                    var5 = false;
                    if (arg0->unknown_670_ != 0x64) {
                        arg0->unknown_6bc_ &= ~1;
                        arg0->unknown_63c_ = Struct_ov013_021846a0_2::Enum_ov013_02186160_2;
                        var3 = true;
                        var2 = true;
                        if (arg0->unknown_640_) func_ov013_02185828((unsigned char*)arg0);
                        else func_ov013_02185774(arg0);
                        if (!arg0->unknown_640_) {
                            arg0->inline_ov013_02186160();
                        }
                    }
                }
                if (var5)
                    func_0205eaa0((Struct_02108760*)&data_02108760, 0x5d, 0);
            }
        }
    }
    Struct_ov013_021846a0_2::Enum_ov013_02186160 var6 = Struct_ov013_021846a0_2::Enum_ov013_02186160_m1;
    if (g_keyManager.TestKeysPressed(0x601) && arg0->unknown_63c_ != Struct_ov013_021846a0_2::Enum_ov013_02186160_2) {
        if (arg0->unknown_65c_ != 5 && arg0->unknown_66c_ == 0) {
            arg0->unknown_65c_ = 5;
            var2 = true;
        } else if (arg0->unknown_65c_ == 5) {
            var6 = Struct_ov013_021846a0_2::Enum_ov013_02186160_3;
        } else if (func_0205d97c((Struct_0205d81c*)arg0->unknown_34_) == 2) {
            var6 = Struct_ov013_021846a0_2::Enum_ov013_02186160_4;
        }
    } else {
        if ((g_keyManager.TestKeyRepeat(0x611) ||
             (g_touchInput.repeatFired_ && g_touchInput.TestHoldInRectangle(0x84, arg0->unknown_65c_ * 0xd + 0x14, 0xe, 0xb))) &&
            arg0->unknown_65c_ != 5 && arg0->unknown_66c_ == 0) {
            arg0->unknown_65c_ = 5;
            var2 = true;
        } else if (g_keyManager.TestKeysPressed(2) && arg0->unknown_63c_ != Struct_ov013_021846a0_2::Enum_ov013_02186160_2) {
            if (var0[arg0->unknown_65c_] == 0 || arg0->unknown_65c_ == 5 || arg0->unknown_65c_ == 6)
                var6 = Struct_ov013_021846a0_2::Enum_ov013_02186160_4;
        } else if (arg0->unknown_65c_ == 5 && arg0->unknown_63c_ != Struct_ov013_021846a0_2::Enum_ov013_02186160_2 && g_touchInput.released_ &&
                   (unsigned int)g_touchInput.prevTimeHeld_ < 0x14 && arg0->unknown_665_ == 1) {
            if (var4) {
                arg0->unknown_665_ = 0;
                var6 = Struct_ov013_021846a0_2::Enum_ov013_02186160_3;
            }
        } else if (func_0205d97c((Struct_0205d81c*)arg0->unknown_34_) == 2 && arg0->unknown_63c_ != Struct_ov013_021846a0_2::Enum_ov013_02186160_2) {
            var6 = Struct_ov013_021846a0_2::Enum_ov013_02186160_4;
        }
    }
    if (var6 == Struct_ov013_021846a0_2::Enum_ov013_02186160_3 || var6 == Struct_ov013_021846a0_2::Enum_ov013_02186160_4) {
        if (var6 == Struct_ov013_021846a0_2::Enum_ov013_02186160_3) arg0->unknown_63c_ = Struct_ov013_021846a0_2::Enum_ov013_02186160_3;
        else arg0->unknown_63c_ = Struct_ov013_021846a0_2::Enum_ov013_02186160_4;
        arg0->unknown_6bc_ &= ~1;
        var3 = true;
        var2 = true;
        if (arg0->unknown_640_ == 0) {
            func_0205eaa0((Struct_02108760*)&data_02108760, var3, 0);
            arg0->inline_ov013_02186160();
        } else {
            func_0205eaa0((Struct_02108760*)&data_02108760, 5, 0);
        }
        if (arg0->unknown_640_) func_ov013_02185828((unsigned char*)arg0);
                        else func_ov013_02185774(arg0);
    } else {
        if (arg0->unknown_65c_ == 5 && g_touchInput.released_ && var4)
            arg0->unknown_665_ = 1;
        else if (g_touchInput.pressed_ && !var4)
            arg0->unknown_665_ = 0;
    }
    int var7 = 0;
    for (int var8 = 0; var8 < 5; var8++)
        var7 += arg0->unknown_688_[var8];
    arg0->unknown_66c_ = arg0->unknown_668_ - var7;
    if (var3)
        func_ov013_02186c64(arg0, 0, 1);
    else if (var2)
        func_ov013_02186bd4(arg0);
#else

    arg0->unknown_6bc_ |= 1;
    arg0->unknown_638_[0] = 0;
    arg0->unknown_638_[1] = 0;
    func_0205dee8((struct Struct_0205dee8*)arg0->unknown_38_, 0);

    int var9[6];
    __clear(var9, 0x18);
    for (int var10 = 0; var10 < 5; var10++) {
        var9[var10] = arg0->unknown_688_[var10];
    }

    int var11, var12, var13, var14;
    var14 = arg0->unknown_65c_;
    var11 = 0;
    var12 = var11;
    var13 = var11 - 1;
    arg0->unknown_65c_ = func_0205d794((struct Struct_0205c570*)arg0->unknown_38_);

    if (g_keyManager.TestKeysPressed(0x601) != 0) {
        if (arg0->unknown_65c_ != 5) {
            if (arg0->unknown_66c_ == 0) {
                arg0->unknown_65c_ = 5;
                func_0205d7a0(arg0->unknown_38_, 5);
                arg0->unknown_64c_ = var11;
                var11 = 1;
            }
        } else {
            var13 = 3;
        }
    } else {
        int var15 = func_0205d97c((Struct_0205d81c*)arg0->unknown_38_);
        if (var15 == 2) {
            var13 = 4;
        } else if (g_keyManager.TestKeysPressed(2) != 0) {
            if (var9[arg0->unknown_65c_] == 0) {
                var13 = 4;
            }
        }
    }

    int var16 = arg0->unknown_648_;
    if (var16 == 0) {
        if (arg0->unknown_66c_ >= 0 && arg0->unknown_65c_ < 5) {
            if (g_keyManager.TestKeyRepeat(0x20) != 0 ||
                g_keyManager.TestKeyRepeat(2) != 0 ||
                func_ov013_021842a0((void*)arg0->unknown_38_, 0xa) != 0) {
                arg0->unknown_64c_ = 0;
                if (arg0->unknown_69c_[arg0->unknown_65c_] == 0) {
                    arg0->unknown_688_[arg0->unknown_65c_]--;
                    var11 = 1;
                    if (arg0->unknown_688_[arg0->unknown_65c_] >= 0) {
                        func_0205eaa0((struct Struct_02108760*)&data_02108760, 0x5d, 0);
                    } else {
                        arg0->unknown_688_[arg0->unknown_65c_] = 0;
                    }
                }
            } else if (arg0->unknown_66c_ > 0) {
                int var17 = 0;
                arg0->unknown_64c_ = 0;
                int var18 = arg0->unknown_674_[arg0->unknown_65c_];
                if (var18 != 0x64) {
                    int var19 = arg0->unknown_688_[arg0->unknown_65c_];
                    if (var18 + var19 < 0x64) {
                        if (g_keyManager.TestKeyRepeat(0x611) != 0 ||
                            func_ov013_021842a0((void*)arg0->unknown_38_, 0xb) != 0) {
                            if (arg0->unknown_69c_[arg0->unknown_65c_] == 0) {
                                arg0->unknown_688_[arg0->unknown_65c_]++;
                                var17 = 1;
                                var11 = var17;
                            }
                        }
                        if (var17 != 0) {
                            func_0205eaa0((struct Struct_02108760*)&data_02108760, 0x5d, 0);
                        }
                    }
                }
            }
        }
    } else {
        var11 = 1;
        if (var16 == 2 && arg0->unknown_64c_ == var16 && var14 == 5 && arg0->unknown_65c_ == 5) {
            var13 = 3;
        }
        arg0->unknown_64c_ = var16;
    }

    if (var13 >= 0) {
        arg0->unknown_64c_ = 0;
        arg0->unknown_63c_ = (unsigned char)var13;
        arg0->unknown_665_ = 0;
        arg0->unknown_6bc_ &= ~1;
        var12 = 1;
        var11 = 1;
        if (arg0->unknown_640_ == 0) {
            func_0205eaa0((struct Struct_02108760*)&data_02108760, var12, 0);
            func_0205dee8((struct Struct_0205dee8*)arg0->unknown_38_, 4);
            func_0205d6a0((struct Struct_0205d6a0*)arg0->unknown_38_, 0);
        } else {
            func_0205eaa0((struct Struct_02108760*)&data_02108760, 5, 0);
        }
        if (arg0->unknown_640_ != 0) {
            func_ov013_02185828((unsigned char*)arg0);
        } else {
            func_ov013_02185774(arg0);
        }
    }

    int var20 = 0;
    for (int var21 = 0; var21 < 5; var21++) {
        var20 += arg0->unknown_688_[var21];
    }
    arg0->unknown_66c_ = arg0->unknown_668_ - var20;

    if (var12 != 0) {
        func_ov013_02186c64(arg0, 0, 1);
    } else if (var11 != 0) {
        func_ov013_02186bd4(arg0);
    }
#endif
}

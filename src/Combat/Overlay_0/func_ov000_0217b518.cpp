#include <globaldefs.h>
#include <GameState/GameState.h>
#include "Input/Input.h"

struct Struct_0205c570;
struct Struct_0205def8;
struct Struct_02108760;

struct Struct_ov000_0217b518 {
    unsigned char unknown_0_[0x188];
#if defined(jpn)
    unsigned char unknown_188_[0x1faa - 0x188];
#else
    unsigned char unknown1_188_[0x1bea];
#endif
    unsigned short unknown_1d72_;
};

struct Struct_ov000_02184294_4 {
#if defined(jpn)
    Struct_ov000_0217b518* unknown_0_;
    int arg0;
    int arg1;
    Struct_ov000_0217b518* const& inline_ov000_0217b518_2() const {
        return unknown_0_;
    }
#else
    int arg0;
    int arg1;
    Struct_ov000_0217b518* unknown_8_;
#endif
};

struct Struct_ov000_0217b518_2 {
    unsigned char unknown_0_[0xb8];
    unsigned char unknown_b8_;
};

struct Struct_ov000_0217b518_3 {
    unsigned char unknown_0_[0x10];
    signed char unknown_10_[8];
    signed char unknown_18_;
    unsigned char unknown_19_[7];
    signed char unknown_20_;
    unsigned char unknown_21_[5];
    unsigned short unknown_26_;
    unsigned char unknown_28_[0x10];
    Struct_ov000_0217b518_2* unknown_38_;
    unsigned char unknown_3c_[0x10];
    int unknown_4c_;
#if defined(jpn)
    unsigned char unknown_50_[0x434];
#else
    unsigned char unknown1_50_[0x3f4];
#endif
    unsigned char unknown_444_;
#if defined(jpn)
    const signed char& inline_ov000_0217b518() const {
        return unknown_20_;
    }
#endif
};

extern Struct_ov000_02184294_4 data_ov000_02184294;
extern Struct_02108760 data_02108760;

extern "C" int func_0205d794(struct Struct_0205c570* arg0);
extern "C" void func_0205def8(struct Struct_0205def8* arg0, int arg1, int arg2);
struct Struct_0205da38;
extern "C" int func_0205da38(struct Struct_0205da38* arg0, int arg1);
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);
extern "C" unsigned char* func_02053c6c(unsigned char* arg0);
extern "C" int func_ov000_0217ab48(void* arg0);
extern "C" void func_ov000_02171458(Struct_ov000_0217b518_3* arg0);
extern "C" void func_ov000_0217629c(Struct_ov000_0217b518_3* arg0);
extern "C" void func_ov000_0217ab8c(Struct_ov000_0217b518_3* arg0, int arg1, int arg2);
extern "C" void func_ov000_02176e3c(Struct_ov000_0217b518* arg0, Struct_ov000_0217b518_3* arg1, int arg2, int arg3, int arg4, int arg5);

#if defined(jpn)
// USA: func_ov000_0217b518
extern "C" ARM int func_ov000_0217b518(Struct_ov000_0217b518_3* arg0, int arg1, int arg2)
{
    Struct_ov000_0217b518* var0;
    enum Enum_ov000_0217b518 { Enum_ov000_0217b518_m128 = -128, Enum_ov000_0217b518_127 = 127 };
    Enum_ov000_0217b518 var1;
    data_ov000_02184294.unknown_0_->unknown_1d72_ |= 0x100;
    const signed char var2 = arg0->inline_ov000_0217b518();
    var1 = (Enum_ov000_0217b518)(signed char)func_0205d794((struct Struct_0205c570*)arg0->unknown_38_);
    arg0->unknown_20_ = var1;
    {
    var0 = data_ov000_02184294.inline_ov000_0217b518_2();
    func_0205def8((struct Struct_0205def8*)var0->unknown_188_, 1, 0x22);
    if (var2 != var1) {
        return -1;
    }
    int var3 = g_keyManager.TestKeysPressed(0x601);
    bool var4 = (var3 | func_0205da38((struct Struct_0205da38*)arg0->unknown_38_, 0x14)) ? 1 : 0;
    if (var4 || arg0->unknown_444_) {
        func_0205def8((struct Struct_0205def8*)var0->unknown_188_, 0, 0x22);
        func_0205eaa0(&data_02108760, 1, 0);
        func_ov000_02171458(arg0);
        GameObject* var5 = GameState::GetInstance()->GetPartyMemberByIndex(arg0->unknown_4c_);
        if (var5 != NULL) {
            unsigned char* var6 = func_02053c6c((unsigned char*)var5);
            if (var6 != NULL) {
                *(unsigned short*)(var6 + 0x8c8) = arg0->unknown_26_;
            }
        }
        if (arg0->unknown_10_[arg0->unknown_18_] != 100) {
            arg0->unknown_38_->unknown_b8_ = 15;
        }
        return arg0->unknown_10_[arg0->unknown_18_];
    }
    if (func_ov000_0217ab48(arg0)) {
        func_ov000_0217629c(arg0);
        arg0->unknown_10_[arg0->unknown_18_] = 0;
        arg0->unknown_18_ = arg0->unknown_18_ - 1;
        arg0->unknown_20_ = -1;
        arg0->unknown_26_ = 0;
        func_ov000_0217ab8c(arg0, arg1, arg2);
        func_ov000_02176e3c(data_ov000_02184294.unknown_0_, arg0, arg0->unknown_10_[arg0->unknown_18_],
                            data_ov000_02184294.arg1, data_ov000_02184294.arg0, 0);
    }
    return -1;
    }
}
#else
// USA: func_ov000_0217b518
extern "C" ARM int func_ov000_0217b518(Struct_ov000_0217b518_3* arg0, int arg1, int arg2)
{
    signed char var7;
    Struct_ov000_0217b518* var8;
    signed char var9;
    data_ov000_02184294.unknown_8_->unknown_1d72_ |= 0x100;
    var9 = arg0->unknown_20_;
    var7 = func_0205d794((struct Struct_0205c570*)arg0->unknown_38_);
    arg0->unknown_20_ = var7;
    var8 = data_ov000_02184294.unknown_8_;
    func_0205def8((struct Struct_0205def8*)var8->unknown1_188_, 1, 0x22);
    if (var9 != var7) {
        return -1;
    }
    int var10 = g_keyManager.TestKeysPressed(0x601);
    int var11 = (var10 | func_0205da38((struct Struct_0205da38*)arg0->unknown_38_, 0x14)) ? 1 : 0;
    if (var11 || arg0->unknown_444_) {
        func_0205def8((struct Struct_0205def8*)var8->unknown1_188_, 0, 0x22);
        func_0205eaa0(&data_02108760, 1, 0);
        func_ov000_02171458(arg0);
        GameObject* var12 = GameState::GetInstance()->GetPartyMemberByIndex(arg0->unknown_4c_);
        if (var12 != NULL) {
            unsigned char* var13 = func_02053c6c((unsigned char*)var12);
            if (var13 != NULL) {
                *(unsigned short*)(var13 + 0x960) = arg0->unknown_26_;
            }
        }
        if (arg0->unknown_10_[arg0->unknown_18_] != 100) {
            arg0->unknown_38_->unknown_b8_ = 15;
        }
        return arg0->unknown_10_[arg0->unknown_18_];
    }
    if (func_ov000_0217ab48(arg0)) {
        func_ov000_0217629c(arg0);
        arg0->unknown_10_[arg0->unknown_18_] = 0;
        arg0->unknown_18_ = arg0->unknown_18_ - 1;
        arg0->unknown_20_ = -1;
        arg0->unknown_26_ = 0;
        func_ov000_0217ab8c(arg0, arg1, arg2);
        func_ov000_02176e3c(data_ov000_02184294.unknown_8_, arg0, arg0->unknown_10_[arg0->unknown_18_],
                            data_ov000_02184294.arg1, data_ov000_02184294.arg0, 0);
    }
    return -1;
}
#endif

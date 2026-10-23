#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"
#include "NitroSDK/OverlayId.h"
#include "Input/Input.h"

#if defined(jpn)
#define func_020c39c8 func_020c5494
#endif

#if defined(jpn)
enum { Enum_ov017_021a51a4_14032 = 0x34c0, Enum_ov017_021a51a4_14036 = 0x34c4, Enum_ov017_021a51a4_14076 = 0x34ec, Enum_ov017_021a51a4_14080 = 0x34f0, Enum_ov017_021a51a4_14108 = 0x350c, Enum_ov017_021a51a4_14112 = 0x3510, Enum_ov017_021a51a4_15180 = 0x392c, Enum_ov017_021a51a4_15184 = 0x3930, Enum_ov017_021a51a4_15216 = 0x3950, Enum_ov017_021a51a4_15220 = 0x3954, Enum_ov017_021a51a4_16832 = 0x3fa0, Enum_ov017_021a51a4_16836 = 0x3fa4, Enum_ov017_021a51a4_17124 = 0x40c4, Enum_ov017_021a51a4_396 = 0x180 };
#else
enum { Enum_ov017_021a51a4_14032 = 0x36d0, Enum_ov017_021a51a4_14036 = 0x36d4, Enum_ov017_021a51a4_14076 = 0x36fc, Enum_ov017_021a51a4_14080 = 0x3700, Enum_ov017_021a51a4_14108 = 0x371c, Enum_ov017_021a51a4_14112 = 0x3720, Enum_ov017_021a51a4_15180 = 0x3b4c, Enum_ov017_021a51a4_15184 = 0x3b50, Enum_ov017_021a51a4_15216 = 0x3b70, Enum_ov017_021a51a4_15220 = 0x3b74, Enum_ov017_021a51a4_16832 = 0x41c0, Enum_ov017_021a51a4_16836 = 0x41c4, Enum_ov017_021a51a4_17124 = 0x42e4, Enum_ov017_021a51a4_396 = 0x18c };
#endif

struct Struct_0202b2f0;
struct Struct_02012de8;
struct Struct_0203402c;
struct Struct_02000c9c_8;
struct Struct_ov017_021befe4;
struct Struct_02108760;
struct Struct_02018300_3;
struct Struct_0206f81c_2;
struct Struct_0201bdac_2;
struct Struct_0201bdac;
struct Struct_020213fc;
struct Struct_02027bac;
struct SafeAllocator;

extern "C" int func_020421a0();
extern "C" Struct_0202b2f0* func_0202ae18(void);
extern "C" void* func_02012fe4(void);
extern "C" Struct_02012de8* func_020d6c00();
extern "C" unsigned char* func_0200fd0c(GameState* arg0);
extern "C" int func_02046b08(void** arg0);
extern "C" int func_02039820(void* arg0);
extern "C" int func_020535c8(signed char* arg0);
extern "C" int func_02046708(Struct_02012de8* arg0, unsigned int arg1);
extern "C" int func_0203402c(Struct_0203402c* arg0);
extern "C" int func_020c39c8(volatile unsigned short* arg0);
extern "C" int func_0200fb08(Struct_02000c9c_8* arg0);
extern "C" int func_0202c508(Struct_0202b2f0* arg0);
extern "C" int func_0202c540(Struct_0202b2f0* arg0);
extern "C" void func_ov017_021befe4(Struct_ov017_021befe4* arg0);
extern "C" void func_020469b4(Struct_0201bdac_2* arg0, Struct_0201bdac* arg1);
extern "C" void func_020397cc(Struct_02018300_3* arg0, int arg1);
extern "C" void func_0205eaa0(Struct_02108760* arg0, int arg1, int arg2);
extern "C" void func_ov017_021a5568(void* arg0);
extern "C" int func_02039d7c(char* arg0);
extern "C" void func_ov017_021b2174(unsigned char* arg0);
extern "C" void func_ov017_021b2ba0(Struct_0206f81c_2* arg0, char* arg1);
extern "C" void func_ov017_021b2bd0(void* arg0, int arg1, int arg2);
extern "C" void func_020dc2d0(int arg0);
extern "C" void func_020213fc(Struct_020213fc* arg0, int arg1);
extern "C" void func_02027bac(Struct_02027bac* arg0, unsigned char arg1);
extern "C" void func_ov004_0216ae2c(SafeAllocator* arg0, void* arg1);
extern char data_02108760;
extern char data_ov017_021d76dc;

struct Struct_ov017_021d6a80 {
    short unknown_0_[5];
};

extern Struct_ov017_021d6a80 data_ov017_021d6a80;

struct Struct_ov017_021a51a4 {
    char unknown_0_[0xac];
    short unknown_ac_;
    char unknown_ae_[0xb2 - 0xae];
    short unknown_b2_;
    char unknown_b4_[Enum_ov017_021a51a4_396 - 0xb4];
    int unknown_18c_;
};

struct Struct_ov017_021a51a4_2 {
    char unknown_0_[0x24];
    unsigned char unknown_24_;
    char unknown_25_[0x28 - 0x25];
    int unknown_28_;
    int unknown_2c_;
};

struct Struct_ov017_021a51a4_3 {
    char unknown_0_[0xc];
    unsigned char unknown_c_0_ : 4;
};

struct Struct_ov017_021a51a4_4 {
    char unknown_0_[Enum_ov017_021a51a4_14032];
    Struct_020213fc* unknown_36d0_;
    char unknown_36d4_[Enum_ov017_021a51a4_14076 - Enum_ov017_021a51a4_14036];
    Struct_0201bdac_2* unknown_36fc_;
    char unknown_3700_[Enum_ov017_021a51a4_14108 - Enum_ov017_021a51a4_14080];
    Struct_ov017_021a51a4_2* unknown_371c_;
    char unknown_3720_[Enum_ov017_021a51a4_15180 - Enum_ov017_021a51a4_14112];
    unsigned char* unknown_3b4c_;
    char unknown_3b50_[Enum_ov017_021a51a4_15216 - Enum_ov017_021a51a4_15184];
    Struct_ov017_021befe4* unknown_3b70_;
    char unknown_3b74_[Enum_ov017_021a51a4_16832 - Enum_ov017_021a51a4_15220];
    int unknown_41c0_;
    char unknown_41c4_[Enum_ov017_021a51a4_17124 - Enum_ov017_021a51a4_16836];
    unsigned char unknown_42e4_;
};

// USA: func_ov017_021a51a4
extern "C" ARM void func_ov017_021a51a4(Struct_ov017_021a51a4_4* arg0) {
    GameState* var0;
    Struct_ov017_021a51a4* var1;
    unsigned char* var2;
    Struct_0202b2f0* var3;
    Struct_02012de8* var4;
    unsigned char* var5;
    int var6;
    int var7;
    int var8;
    unsigned char* var9;
    int var10;
    Struct_ov017_021a51a4_3* var11;
    var0 = GameState::GetInstance();
    var1 = (Struct_ov017_021a51a4*)var0->GetUnknownGameObject();
    func_020421a0();
    var3 = func_0202ae18();
    var11 = *(Struct_ov017_021a51a4_3**)((char*)func_02012fe4() + 8);
    var4 = func_020d6c00();
    var5 = func_0200fd0c(var0);
    if (!func_02046b08((void**)arg0->unknown_36fc_)) {
        return;
    }
    if (!func_02039820(var1)) {
        return;
    }
    if (func_020535c8((signed char*)var1)) {
        return;
    }
    if (var1->unknown_18c_ & 1) {
        return;
    }
    if (var1->unknown_ac_ > 0) {
        return;
    }
    if (var5[2] != 0) {
        return;
    }
    var6 = 0;
    if (!func_02046708(var4, 0x800)) {
        if ((g_keyManager.TestKeysPressed(0x400) || arg0->unknown_42e4_ == 1) && var1->unknown_ac_ == 0) {
            if (!func_0203402c((Struct_0203402c*)var1)) {
                var6 = 1;
            }
        }
    } else {
        arg0->unknown_42e4_ = var6;
    }
    var7 = g_touchInput.pressX_;
    var8 = g_touchInput.pressY_;
    if (func_020c39c8((volatile unsigned short*)0x400006c) != 0) {
        return;
    }
    var9 = (unsigned char*)var0->GetGrottoStruct();
#if !defined(jpn)
    Struct_ov017_021d6a80 var12 = data_ov017_021d6a80;
    var10 = func_0200fb08((Struct_02000c9c_8*)GameState::GetInstance());
#endif
    int var13;
    if (g_touchInput.isRepeatValid_ && g_touchInput.currentReading_.isHeld &&
#if defined(jpn)
        0xb0 <= var7
#else
        var12.unknown_0_[var10 - 1] <= var7
#endif
         && var7 <= 0xf8 && var8 >= 0xa2 && var8 <= 0xb2) {
        var13 = 1;
    } else {
        var13 = 0;
    }
    if (func_0202c508(var3) && var9[0] != 0 && var11->unknown_c_0_ == 0
        && (g_keyManager.TestKeysPressed(0x800) || var13)) {
        func_ov017_021befe4(arg0->unknown_3b70_);
        func_020469b4(arg0->unknown_36fc_, (Struct_0201bdac*)arg0->unknown_3b70_);
        return;
    }
    if (var6) {
        func_020397cc((Struct_02018300_3*)var1, 1);
        var1->unknown_b2_ = 0;
        arg0->unknown_42e4_ = 0;
        func_0205eaa0((Struct_02108760*)&data_02108760, 1, 0);
        func_ov017_021a5568(arg0->unknown_371c_);
        Struct_ov017_021a51a4_2* var14 = arg0->unknown_371c_;
        var14->unknown_24_ = 0;
        var14->unknown_28_ = 0;
        var14->unknown_2c_ = -1;
        func_020469b4(arg0->unknown_36fc_, (Struct_0201bdac*)arg0->unknown_371c_);
        return;
    }
    if (var9[0] != 0 && func_0202c540(var3) == 0 && var11->unknown_c_0_ == 0) {
        return;
    }
    if (arg0->unknown_41c0_ != 0) {
        return;
    }
    if (!g_keyManager.TestKeysPressed(0x800)) {
        return;
    }
    if (arg0->unknown_42e4_ != 0 || var1->unknown_ac_ != 0) {
        return;
    }
    if (func_0203402c((Struct_0203402c*)var1)) {
        return;
    }
    if (func_02039d7c((char*)var1)) {
        return;
    }
    func_020397cc((Struct_02018300_3*)var1, 1);
    var1->unknown_b2_ = 0;
    var2 = arg0->unknown_3b4c_;
    func_ov017_021b2174(var2);
    func_ov017_021b2ba0((Struct_0206f81c_2*)var2, &data_ov017_021d76dc);
    func_ov017_021b2bd0(var2, (int)func_ov004_0216ae2c, OVERLAY_ID(4));
    func_020469b4(arg0->unknown_36fc_, (Struct_0201bdac*)var2);
    func_020dc2d0(3);
    func_020213fc(arg0->unknown_36d0_, 1);
    func_02027bac((Struct_02027bac*)arg0->unknown_36d0_, 1);
}

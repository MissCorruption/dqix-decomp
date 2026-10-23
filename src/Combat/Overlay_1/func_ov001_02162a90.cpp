#include <globaldefs.h>
#include "NitroSDK/Graphics.h"
#include "NitroSDK/VRAM.h"

typedef enum
{
    Enum_02000c9c_E_0 = 0,
    Enum_02000c9c_E_1 = 1,
    Enum_02000c9c_E_2 = 2,
    Enum_02000c9c_E_3 = 3
} Enum_02000c9c_E;

typedef enum
{
    Enum_02000c9c_B_0  = 0,
    Enum_02000c9c_B_1 = 1
} Enum_02000c9c_B;

typedef enum
{
    Enum_02000c9c_C_0 = 0,
    Enum_02000c9c_C_1 = 1,
    Enum_02000c9c_C_2 = 2,
    Enum_02000c9c_C_3 = 3,
    Enum_02000c9c_C_4 = 4,
    Enum_02000c9c_C_5 = 5,
    Enum_02000c9c_C_6 = 6,
    Enum_02000c9c_C_7 = 7,
    Enum_02000c9c_C_8 = 8,
    Enum_02000c9c_C_9 = 9,
    Enum_02000c9c_C_10 = 10,
    Enum_02000c9c_C_11 = 11,
    Enum_02000c9c_C_12 = 12,
    Enum_02000c9c_C_13 = 13,
    Enum_02000c9c_C_14 = 14,
    Enum_02000c9c_C_15 = 15
} Enum_02000c9c_C;

typedef enum
{
    Enum_02000c9c_D_0 = 0,
    Enum_02000c9c_D_1 = 1,
    Enum_02000c9c_D_2 = 2,
    Enum_02000c9c_D_3 = 3,
    Enum_02000c9c_D_4 = 4,
    Enum_02000c9c_D_5 = 5,
    Enum_02000c9c_D_6 = 6,
    Enum_02000c9c_D_7 = 7,
    Enum_02000c9c_D_8 = 8,
    Enum_02000c9c_D_9 = 9,
    Enum_02000c9c_D_10 = 10,
    Enum_02000c9c_D_11 = 11,
    Enum_02000c9c_D_12 = 12,
    Enum_02000c9c_D_13 = 13,
    Enum_02000c9c_D_14 = 14,
    Enum_02000c9c_D_15 = 15,
    Enum_02000c9c_D_16 = 16,
    Enum_02000c9c_D_17 = 17,
    Enum_02000c9c_D_18 = 18,
    Enum_02000c9c_D_19 = 19,
    Enum_02000c9c_D_20 = 20,
    Enum_02000c9c_D_21 = 21,
    Enum_02000c9c_D_22 = 22,
    Enum_02000c9c_D_23 = 23,
    Enum_02000c9c_D_24 = 24,
    Enum_02000c9c_D_25 = 25,
    Enum_02000c9c_D_26 = 26,
    Enum_02000c9c_D_27 = 27,
    Enum_02000c9c_D_28 = 28,
    Enum_02000c9c_D_29 = 29,
    Enum_02000c9c_D_30 = 30,
    Enum_02000c9c_D_31 = 31
} Enum_02000c9c_D;

typedef enum
{
    Enum_02000c9c_0 = 0,
    Enum_02000c9c_1 = 1
} Enum_02000c9c;

union Struct_ov001_02162a90 {
    unsigned short unknown_0_;
    struct {
        unsigned short unknown_0_0_ : 2;
        unsigned short unknown_0_2_ : 4;
        unsigned short unknown_0_6_ : 1;
        unsigned short unknown_0_7_ : 1;
        unsigned short unknown_1_0_ : 5;
        unsigned short unknown_1_5_ : 1;
        unsigned short unknown_1_6_ : 2;
    } unknown1_0_;
};
struct Struct_ov001_021658b8_13 {
    char unknown_0_[0x494];
    int unknown_494_;
    Struct_ov001_02162a90 unknown_498_[4];
    unsigned int unknown_4a0_;
    int unknown_4a4_;
    Struct_ov001_02162a90 unknown_4a8_[4];
    unsigned int unknown_4b0_;
};
extern Struct_ov001_021658b8_13 data_ov001_021658b8;
union Struct_ov017_021d60f4 {
    int unknown_0_;
    float unknown1_0_;
};
struct Struct_ov001_0215f344 {
    int unknown_0_;
    Struct_ov017_021d60f4 unknown_4_;
};
extern "C" int func_ov017_021d60f4(Struct_ov001_0215f344*);
extern "C" void func_ov001_02162678(int, int, int, int);
extern "C" void func_ov001_0215e758(int, int, int, int, int);
extern "C" void func_ov001_0215e78c(int, int, int, int, int);
extern "C" void func_ov001_021628d4(int, int, int, int);

// USA: func_ov001_02162a90
extern "C" ARM int func_ov001_02162a90(Struct_ov001_0215f344* arg0) {
    Struct_ov001_02162a90 var0, var1, var2, var3;
    Struct_ov001_02162a90 var4, var5, var6, var7;
    int var8 = func_ov017_021d60f4(arg0);
    if (var8 == 0) {
        ReleaseMainBGVRAMBanks();
        MapVRAMBanksToMainBG(data_ov001_021658b8.unknown_494_);
        var0 = data_ov001_021658b8.unknown_498_[0];
        var1 = data_ov001_021658b8.unknown_498_[1];
        var2 = data_ov001_021658b8.unknown_498_[2];
        var3 = data_ov001_021658b8.unknown_498_[3];
        {
            Enum_02000c9c var9 = (Enum_02000c9c)var0.unknown1_0_.unknown_1_5_;
            Enum_02000c9c_C var10 = (Enum_02000c9c_C)var0.unknown1_0_.unknown_0_2_;
            Enum_02000c9c_D var11 = (Enum_02000c9c_D)var0.unknown1_0_.unknown_1_0_;
            Enum_02000c9c_B var12 = (Enum_02000c9c_B)var0.unknown1_0_.unknown_0_7_;
            Enum_02000c9c_E var13 = (Enum_02000c9c_E)var0.unknown1_0_.unknown_1_6_;
            BG0CNT = (unsigned short)((BG0CNT & 0x43)
                | (var13 << 14)
                | (var12 << 7)
                | (var11 << 8)
                | (var10 << 2)
                | (var9 << 13));
        }
        {
            Enum_02000c9c var14 = (Enum_02000c9c)var1.unknown1_0_.unknown_1_5_;
            Enum_02000c9c_C var15 = (Enum_02000c9c_C)var1.unknown1_0_.unknown_0_2_;
            Enum_02000c9c_D var16 = (Enum_02000c9c_D)var1.unknown1_0_.unknown_1_0_;
            Enum_02000c9c_B var17 = (Enum_02000c9c_B)var1.unknown1_0_.unknown_0_7_;
            Enum_02000c9c_E var18 = (Enum_02000c9c_E)var1.unknown1_0_.unknown_1_6_;
            BG1CNT = (unsigned short)((BG1CNT & 0x43)
                | (var18 << 14)
                | (var17 << 7)
                | (var16 << 8)
                | (var15 << 2)
                | (var14 << 13));
        }
        {
            Enum_02000c9c_C var19 = (Enum_02000c9c_C)var2.unknown1_0_.unknown_0_2_;
            Enum_02000c9c_D var20 = (Enum_02000c9c_D)var2.unknown1_0_.unknown_1_0_;
            Enum_02000c9c_B var21 = (Enum_02000c9c_B)var2.unknown1_0_.unknown_0_7_;
            Enum_02000c9c_E var22 = (Enum_02000c9c_E)var2.unknown1_0_.unknown_1_6_;
            BG2CNT = (unsigned short)((BG2CNT & 0x43)
                | (var22 << 14)
                | (var21 << 7)
                | (var20 << 8)
                | (var19 << 2));
        }
        func_ov001_02162678(var3.unknown1_0_.unknown_1_6_, var3.unknown1_0_.unknown_0_7_, var3.unknown1_0_.unknown_1_0_, var3.unknown1_0_.unknown_0_2_);
        DISPCNT = (DISPCNT & ~0x1f00) | (data_ov001_021658b8.unknown_4a0_ << 8);
    } else if (var8 == 1) {
        ReleaseSubBGVRAMBanks();
        MapVRAMBanksToSubBG(data_ov001_021658b8.unknown_4a4_);
        var4 = data_ov001_021658b8.unknown_4a8_[0];
        var5 = data_ov001_021658b8.unknown_4a8_[1];
        var6 = data_ov001_021658b8.unknown_4a8_[2];
        var7 = data_ov001_021658b8.unknown_4a8_[3];
        func_ov001_0215e758(var4.unknown1_0_.unknown_1_6_, var4.unknown1_0_.unknown_0_7_, var4.unknown1_0_.unknown_1_0_, var4.unknown1_0_.unknown_0_2_, var4.unknown1_0_.unknown_1_5_);
        func_ov001_0215e78c(var5.unknown1_0_.unknown_1_6_, var5.unknown1_0_.unknown_0_7_, var5.unknown1_0_.unknown_1_0_, var5.unknown1_0_.unknown_0_2_, var5.unknown1_0_.unknown_1_5_);
        {
            Enum_02000c9c_C var23 = (Enum_02000c9c_C)var6.unknown1_0_.unknown_0_2_;
            Enum_02000c9c_D var24 = (Enum_02000c9c_D)var6.unknown1_0_.unknown_1_0_;
            Enum_02000c9c_B var25 = (Enum_02000c9c_B)var6.unknown1_0_.unknown_0_7_;
            Enum_02000c9c_E var26 = (Enum_02000c9c_E)var6.unknown1_0_.unknown_1_6_;
            BG2CNTSUB = (unsigned short)((BG2CNTSUB & 0x43)
                | (var26 << 14)
                | (var25 << 7)
                | (var24 << 8)
                | (var23 << 2));
        }
        func_ov001_021628d4(var7.unknown1_0_.unknown_1_6_, var7.unknown1_0_.unknown_0_7_, var7.unknown1_0_.unknown_1_0_, var7.unknown1_0_.unknown_0_2_);
        DISPCNTSUB = (DISPCNTSUB & ~0x1f00) | (data_ov001_021658b8.unknown_4b0_ << 8);
    }
    return 1;
}

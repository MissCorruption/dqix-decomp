#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void* arg0);
extern "C" unsigned short GetMainBGVRAMBanks(void);
extern "C" unsigned short GetSubBGVRAMBanks(void);

struct Struct_ov001_0216297c {
    volatile unsigned short unknown_0_;
    volatile unsigned short unknown_2_;
    volatile unsigned short unknown_4_;
    volatile unsigned short unknown_6_;
};

struct Struct_ov001_02165cb8 {
    char unknown_0_[0x98];
    volatile unsigned short unknown_98_;
    volatile unsigned short unknown_9a_;
    volatile unsigned short unknown_9c_;
    volatile unsigned short unknown_9e_;
    char unknown_a0_[8];
    volatile unsigned short unknown_a8_;
    volatile unsigned short unknown_aa_;
    volatile unsigned short unknown_ac_;
    volatile unsigned short unknown_ae_;
};
extern struct Struct_ov001_02165cb8 data_ov001_02165cb8;

struct Struct_ov001_021658b8_12 {
    char unknown_0_[0x494];
    int unknown_494_;
    char unknown_498_[8];
    int unknown_4a0_;
    int unknown_4a4_;
    char unknown_4a8_[8];
    int unknown_4b0_;
};
extern struct Struct_ov001_021658b8_12 data_ov001_021658b8;

// USA: func_ov001_0216297c
extern "C" ARM int func_ov001_0216297c(void* arg0) {
    int var0 = func_ov017_021d60f4(arg0);
    if (var0 == 0) {
        data_ov001_021658b8.unknown_494_ = GetMainBGVRAMBanks();
        struct Struct_ov001_0216297c* var1 = (struct Struct_ov001_0216297c*)0x04000008;
        struct Struct_ov001_02165cb8* var2 = &data_ov001_02165cb8;
        volatile short var3, var4, var5, var6;
        {
            unsigned short var7 = var1->unknown_0_;
            var3 = var7; var3;
            var2->unknown_98_ = var7; var3;
        }
        {
            unsigned short var8 = var1->unknown_2_;
            var2->unknown_9a_ = var8;
            var4 = var8; var4;
        }
        {
            unsigned short var9 = var1->unknown_4_;
            var5 = var9; var5;
            var2->unknown_9c_ = var9; var5;
        }
        {
            unsigned short var10 = var1->unknown_6_;
            var6 = var10;
            var2->unknown_9e_ = var10;
            var6;
        }
        data_ov001_021658b8.unknown_4a0_ = (*(volatile unsigned int*)0x04000000 & 0x1f00) >> 8;
    } else if (var0 == 1) {
        data_ov001_021658b8.unknown_4a4_ = GetSubBGVRAMBanks();
        struct Struct_ov001_0216297c* var11 = (struct Struct_ov001_0216297c*)0x04001008;
        struct Struct_ov001_02165cb8* var12 = &data_ov001_02165cb8;
        volatile short var13, var14, var15, var16;
        {
            unsigned short var17 = var11->unknown_0_;
            var13 = var17;
            var12->unknown_a8_ = var17;
            var13;
        }
        {
            unsigned short var18 = var11->unknown_2_;
            var12->unknown_aa_ = var18;
            var14 = var18; var14;
        }
        {
            unsigned short var19 = var11->unknown_4_;
            var15 = var19; var15;
            var12->unknown_ac_ = var19; var15;
        }
        {
            unsigned short var20 = var11->unknown_6_;
            var16 = var20;
            var12->unknown_ae_ = var20;
            var16;
        }
        data_ov001_021658b8.unknown_4b0_ = (*(volatile unsigned int*)0x04001000 & 0x1f00) >> 8;
    }
    return 1;
}

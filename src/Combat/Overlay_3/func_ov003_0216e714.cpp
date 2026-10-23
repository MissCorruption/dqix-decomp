#include "Filesystem/BackgroundLoader.h"
#include "NitroSDK/ColorEffects.h"
#include "NitroSDK/Graphics.h"
#include <globaldefs.h>
#include "Resource/FontGlyphTable.h"

struct Struct_ov003_0216e714;
#if !defined(jpn)
extern "C" struct Struct_ov003_0216e714 *func_02012fe4(void);
#endif
struct Struct_02020cb8_4;
extern "C" int func_02046900(Struct_02020cb8_4 *arg0);
struct Struct_02020aec;
extern "C" void *func_020467f0(Struct_02020aec *arg0, int arg1, void **arg2, int *arg3);
extern "C" void func_0204c684(void *arg0);
extern "C" void __clear(void *arg0, int arg1);
extern "C" void func_02042764(void *arg0, void *arg1, int arg2);
extern "C" void func_0204f41c(void *arg0, short arg1, short arg2, void *arg3, int arg4, int arg5, short *arg6, short *arg7, int arg8);
struct Struct_0201099c_3;
extern "C" int func_020e0434(Struct_0201099c_3 *arg0, int arg1);
extern "C" int func_020420e8(void *arg0, int arg1);
extern "C" void func_0204e038(void *arg0, char *arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
struct Struct_02020cb8;
extern "C" void func_0204af64(struct Struct_02020cb8 *arg0);
extern "C" void func_0204b11c(unsigned char *arg0, int arg1);
struct Struct_02020cb8_5;
extern "C" int func_0204b5e8(struct Struct_02020cb8_5 *arg0, int arg1, int arg2);
void CleanInvalidateCacheRange(const void *addr, unsigned int size);
extern "C" int LoadToMainBG3ScreenData(int arg0, int arg1, unsigned int arg2);
extern "C" void func_0204b174(void *arg0, void *arg1, SafeAllocator *arg2, unsigned int arg3);
struct Struct_02020cb8_2;
extern "C" void func_0204b0e8(struct Struct_02020cb8_2 *arg0, void *arg1);
struct Struct_02020cb8_3;
extern "C" void func_0204afb4(struct Struct_02020cb8_3 *arg0);

extern char data_ov003_0218028b[];
extern char data_ov003_0218029b[];
extern char data_ov003_021802a7[];
extern char data_ov003_021802b3[];
extern char data_ov003_021802b6[];
extern char data_ov003_021802b9[];
extern char data_ov003_021802bc[];
extern char data_ov003_0217f5bc[];

struct Struct_01ff8b48_17 {
    unsigned char unknown_0_[0xb38];
    int unknown_b38_;
};

#if defined(jpn)
struct Struct_ov003_0216e714 {
    unsigned char unknown_0_[0x1000];
    struct Struct_01ff8b48_17 unknown_1840_;
};

struct Struct_ov003_0216e714_2 {
    unsigned char unknown_0_[0x860];
    struct Struct_ov003_0216e714 unknown_860_;
};
extern "C" struct Struct_ov003_0216e714_2 *func_02012fe4(void);
#else
struct Struct_ov003_0216e714 {
    unsigned char unknown_0_[0x1840];
    struct Struct_01ff8b48_17 unknown_1840_;
};
#endif

static inline struct Struct_01ff8b48_17 *inline_ov003_0216e714_2(struct Struct_ov003_0216e714 *arg0) { return &arg0->unknown_1840_; }
static inline int inline_ov003_0216e714(struct Struct_01ff8b48_17 *arg0) { return arg0->unknown_b38_; }

struct Struct_ov003_0216e714_3 {
    int unknown_0_;
    int unknown_4_;
    unsigned char unknown_8_[3];
    unsigned char unknown_b_0_ : 7;
    unsigned char unknown_b_7_ : 1;
    unsigned int unknown_c_0_ : 4;
    unsigned int unknown_c_4_ : 4;
    unsigned int unknown_d_0_ : 7;
    unsigned int unknown_d_7_ : 4;
    unsigned int unknown_e_3_ : 5;
    unsigned int unknown_f_0_ : 8;
};

struct Struct_ov003_0216e714_4 {
    char unknown_0_[8];
    char *unknown_8_;
    char unknown_c_[0xa8 - 0xc];
    short unknown_a8_;
    short unknown_aa_;
    char unknown_ac_[0xb4 - 0xac];
    short unknown_b4_;
    short unknown_b6_;
    char unknown_b8_[0xe0 - 0xb8];
};

struct Struct_ov003_0216e714_5 {
    char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
    char unknown_1d_[3];
};

struct Struct_ov003_0216e714_6 {
    char unknown_0_[0xc];
    unsigned int unknown_c_;
    char unknown_10_[1];
};

struct Struct_ov003_0216e714_7 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    signed char unknown_2_;
    unsigned char unknown_3_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    signed char unknown_6_;
    signed char unknown_7_;
    char unknown_8_[0x1c - 0x8];
    int unknown_1c_;
    unsigned short unknown_20_;
    char unknown_22_[0xdc - 0x22];
    char unknown_dc_[0x18];
    Struct_ov003_0216e714_3 *unknown_f4_[(0x3b0 - 0xf4) / 4];
    int unknown_3b0_[8];
};

#if defined(jpn)
extern char data_ov003_0217e264[];
extern char data_ov003_0217ea1f[];
extern char data_ov003_0217ea2b[];
extern char data_ov003_0217ea2e[];
extern char data_ov003_0217ea33[];
extern char data_ov003_0217ea38[];
extern char data_ov003_0217ea3d[];
extern char data_ov003_0217ea42[];
extern char data_ov003_0217ea47[];
extern char data_ov003_0217ea4c[];
extern char data_ov003_0217ea51[];
extern char data_ov003_0217ea56[];
extern char data_ov003_0217ea5b[];
extern char data_ov003_0217ea60[];
extern char data_ov003_0217ea65[];
extern char data_ov003_0217ea6a[];
extern char data_ov003_0217ea6f[];
extern char data_ov003_0217ea74[];
extern char data_ov003_0217ea83[];
extern char data_ov003_0217ea86[];
extern char data_ov003_0217ea89[];
extern "C" void func_02050678(void *arg0, short arg1, short arg2, char *arg3, int arg4, int arg5, short *arg6, short *arg7);

struct Struct_ov003_0216e714_8 {
    char unknown_0_[0x40];
};

extern "C" ARM void func_ov003_0216e714(Struct_ov003_0216e714_7 *arg0) {
    int var0;
    int var1;
    int var2;
    Struct_ov003_0216e714_3 *var3;
    int var4;
    Struct_ov003_0216e714 *var5         = &func_02012fe4()->unknown_860_;
    BackgroundLoader *var6 = BackgroundLoader::GetInstance();
    if (arg0->unknown_2_ == 0) {
        Struct_ov003_0216e714_8 var7 = *(Struct_ov003_0216e714_8 *) data_ov003_0217e264;
        arg0->unknown_1c_        = var6->QueueLoadFile(var7.unknown_0_, 0);
        if (!(arg0->unknown_20_ & 0x20)) {
            ColorEffect_ConfigureAlphaBlend(0x04000050, 0x18, 1, 0, 0x10);
        }
        arg0->unknown_2_ = 1;
    } else if (arg0->unknown_2_ == 1) {
        if (var6->GetTaskStatus(arg0->unknown_1c_) != 0) {
            Struct_ov003_0216e714_4 var8;
            char var9[0x80];
            Struct_ov003_0216e714_6 *var10[3];
            int var11[3];
            Struct_ov003_0216e714_5 var12;
            void *var13;
            void *var14;
            unsigned int var15;
            short var16;
            short var17;
            int var18;
            var6->GetLoadedFileByID(arg0->unknown_1c_, &var14, &var15);
            int var19 = func_02046900((Struct_02020cb8_4 *) var14);
            for (int var20 = 0; var20 < var19; var20++) {
                var10[var20] = (Struct_ov003_0216e714_6 *) func_020467f0((Struct_02020aec *) var14, var20, &var13, &var11[var20]);
            }
            func_0204c684(&var8);
            var8.unknown_8_   = (char *) var10[0] + 0x10;
            var8.unknown_a8_  = 0x20;
            var8.unknown_aa_ = 0x18;
            var8.unknown_b4_  = 10;
            var8.unknown_b6_  = 10;
            var0           = 0;
            var1         = (arg0->unknown_0_ - 1) * 8;
            __clear(var9, sizeof(var9));
            var4 = var1 + 8;
            for (var2 = var1; var2 < var4; var0++, var2++) {
                if (var2 >= inline_ov003_0216e714(inline_ov003_0216e714_2(var5))) break;
                var3          = arg0->unknown_f4_[var2];
                var8.unknown_b4_ = 10;
                var8.unknown_b6_ = 10;
                if (var2 == arg0->unknown_7_ + (arg0->unknown_0_ - 1) * 8) {
                    sprintf(var9, data_ov003_0217ea1f, var3);
                } else {
                    sprintf(var9, data_ov003_0217ea2b, var3);
                }
                func_02050678(&var8, 0x14, var0 * 16 + 0x2f, var9, 10, 15, &var16, &var17);
                switch (var3->unknown_c_0_) {
                    case 0: sprintf(var9, data_ov003_0217ea2e); break;
                    case 1: sprintf(var9, data_ov003_0217ea33); break;
                    case 2: sprintf(var9, data_ov003_0217ea38); break;
                    case 3: sprintf(var9, data_ov003_0217ea3d); break;
                    case 4: sprintf(var9, data_ov003_0217ea42); break;
                    case 5: sprintf(var9, data_ov003_0217ea47); break;
                    case 6: sprintf(var9, data_ov003_0217ea4c); break;
                    case 7: sprintf(var9, data_ov003_0217ea51); break;
                    case 8: sprintf(var9, data_ov003_0217ea56); break;
                    case 9: sprintf(var9, data_ov003_0217ea5b); break;
                    case 10: sprintf(var9, data_ov003_0217ea60); break;
                    case 11: sprintf(var9, data_ov003_0217ea65); break;
                    case 12: sprintf(var9, data_ov003_0217ea6a); break;
                    default: sprintf(var9, data_ov003_0217ea6f); break;
                }
                func_02050678(&var8, 0x51, var0 * 16 + 0x2f, var9, 10, 15, &var16, &var17);
                switch (var3->unknown_c_4_) {
                    case 2: sprintf(var9, (char *) func_020e0434((Struct_0201099c_3 *) arg0->unknown_dc_, 0)); break;
                    case 3:
                    case 4: sprintf(var9, (char *) func_020e0434((Struct_0201099c_3 *) arg0->unknown_dc_, 1)); break;
                    case 5:
                    case 6: sprintf(var9, (char *) func_020e0434((Struct_0201099c_3 *) arg0->unknown_dc_, 2)); break;
                    case 9:
                    case 10: sprintf(var9, (char *) func_020e0434((Struct_0201099c_3 *) arg0->unknown_dc_, 3)); break;
                    default: sprintf(var9, (char *) func_020e0434((Struct_0201099c_3 *) arg0->unknown_dc_, 4)); break;
                }
                func_02050678(&var8, 0x80, var0 * 16 + 0x2f, var9, 10, 15, &var16, &var17);
                var8.unknown_b4_ = 8;
                var8.unknown_b6_ = 8;
                sprintf(var9, data_ov003_0217ea74, var3->unknown_b_0_ + 2000, var3->unknown_d_7_, var3->unknown_e_3_);
                func_02050678(&var8, 0xa0, var0 * 16 + 0x30, var9, 8, 15, &var16, &var17);
            }
            if (inline_ov003_0216e714(inline_ov003_0216e714_2(var5)) > 8) {
                var8.unknown_b4_ = 8;
                var8.unknown_b6_ = 8;
                func_02050678(&var8, 0xc, 0xb2, data_ov003_0217ea83, 8, 15, &var16, &var17);
                func_02050678(&var8, 0xee, 0xb2, data_ov003_0217ea86, 8, 15, &var16, &var17);
                var8.unknown_b4_ = 10;
                var8.unknown_b6_ = 10;
                sprintf(var9, data_ov003_0217ea89, arg0->unknown_0_, arg0->unknown_4_);
                func_02050678(&var8, 0x71, 0xaf, var9, 8, 15, &var16, &var17);
            }
            switch (arg0->unknown_3_) {
                case 1: arg0->unknown_6_ = arg0->unknown_5_ - 1; break;
                case 2: arg0->unknown_6_ = 0; break;
            }
            arg0->unknown_3_ = 0;
            if (arg0->unknown_6_ >= arg0->unknown_5_) {
                arg0->unknown_6_ = arg0->unknown_5_ - 1;
            }
            func_0204af64((struct Struct_02020cb8 *) &var12);
            var12.unknown_1c_0_ = 0;
            var12.unknown_1c_4_ = 3;
            func_0204b11c((unsigned char *) &var12, 0);
            func_0204b5e8((struct Struct_02020cb8_5 *) &var12, 0, 0);
            BG3CNT = (BG3CNT & 0x43) | 0xf00;
            for (int var21 = 0; var21 < var19; var21++) {
                if (var21 == 2) {
                    Struct_ov003_0216e714_6 *var22  = var10[var21];
                    unsigned int var23 = var22->unknown_c_;
                    CleanInvalidateCacheRange((char *) var22 + 0x10, var23);
                    LoadToMainBG3ScreenData((int) ((char *) var22 + 0x10), 0, var23);
                } else {
                    func_0204b174(&var12, var10[var21], 0, var11[var21]);
                }
            }
            func_0204b0e8((struct Struct_02020cb8_2 *) &var12, 0);
            func_0204afb4((struct Struct_02020cb8_3 *) &var12);
            var6->RemoveTask(arg0->unknown_1c_);
            arg0->unknown_1c_ = -1;
            if (!(arg0->unknown_20_ & 0x20)) {
                DISPCNT     = (DISPCNT & ~0x1f00) | 0xf00;
                BG0CNT      = (BG0CNT & ~3) | 3;
                BG1CNT      = BG1CNT & ~3;
                BG2CNT      = (BG2CNT & ~3) | 1;
                BG3CNT      = (BG3CNT & ~3) | 2;
                arg0->unknown_1_ = 3;
                arg0->unknown_2_  = 0;
            } else {
                DISPCNT     = (DISPCNT & ~0x1f00) | 0x1f00;
                BG0CNT      = BG0CNT & ~3;
                BG1CNT      = (BG1CNT & ~3) | 1;
                BG2CNT      = (BG2CNT & ~3) | 2;
                BG3CNT      = (BG3CNT & ~3) | 3;
                arg0->unknown_1_ = 4;
                arg0->unknown_2_  = 0;
            }
        }
    }
}
#else
// USA: func_ov003_0216e714
extern "C" ARM void func_ov003_0216e714(Struct_ov003_0216e714_7 *arg0) {
    int var24;
    Struct_ov003_0216e714 *var25         = func_02012fe4();
    BackgroundLoader *var26 = BackgroundLoader::GetInstance();
    if (arg0->unknown_2_ == 0) {
        arg0->unknown_1c_ = var26->QueueLoadFileInGP2(data_ov003_0218028b, data_ov003_0218029b, 0);
        if (!(arg0->unknown_20_ & 0x20)) {
            ColorEffect_ConfigureAlphaBlend(0x04000050, 0x18, 1, 0, 0x10);
        }
        arg0->unknown_2_ = 1;
    } else if (arg0->unknown_2_ == 1) {
        if (var26->GetTaskStatus(arg0->unknown_1c_) != 0) {
            Struct_ov003_0216e714_4 var27;
            char var28[0x80];
            Struct_ov003_0216e714_6 *var29[7];
            int var30[7];
            char var31[0x30];
            Struct_ov003_0216e714_5 var32;
            void *var33;
            void *var34;
            unsigned int var35;
            short var36;
            short var37;
            int var38;
            int var39;
            int var40;
            Struct_ov003_0216e714_3 *var41;
            int var42;
            int var43;
            var26->GetLoadedFileByID(arg0->unknown_1c_, &var34, &var35);
            int var44 = func_02046900((Struct_02020cb8_4 *) var34);
            for (int var45 = 0; var45 < var44; var45++) {
                var29[var45] = (Struct_ov003_0216e714_6 *) func_020467f0((Struct_02020aec *) var34, var45, &var33, &var30[var45]);
            }
            func_0204c684(&var27);
            var27.unknown_8_   = (char *) var29[0] + 0x10;
            var27.unknown_a8_  = 0x20;
            var27.unknown_aa_ = 0x18;
            var27.unknown_b4_  = 10;
            var27.unknown_b6_  = 10;
            var38           = 0;
            var39         = (arg0->unknown_0_ - 1) * 8;
            __clear(var28, sizeof(var28));
            var43 = 0;
            memset(arg0->unknown_3b0_, -1, sizeof(arg0->unknown_3b0_));
            var24 = var39 + 8;
            for (var40 = var39; var40 < var24; var38++, var40++) {
                if (var40 >= inline_ov003_0216e714(inline_ov003_0216e714_2(var25))) break;
                var41          = arg0->unknown_f4_[var40];
                var42            = var38 * 16 + 0x2f;
                var27.unknown_b4_ = 10;
                var27.unknown_b6_ = 10;
                __clear(var31, sizeof(var31));
                func_02042764(var41, var31, 1);
                if (var40 == arg0->unknown_7_ + (arg0->unknown_0_ - 1) * 8) {
                    sprintf(var28, data_ov003_021802a7, var31);
                } else {
                    sprintf(var28, data_ov003_021802b3, var31);
                }
                func_0204f41c(&var27, 0x14, var42, var28, 10, 15, &var36, &var37, 0);
                arg0->unknown_3b0_[var43] = var41->unknown_c_0_;
                var43++;
                int var46 = 4;
                switch (var41->unknown_c_4_) {
                    case 2: var46 = 0; break;
                    case 3:
                    case 4: var46 = 1; break;
                    case 5:
                    case 6: var46 = 2; break;
                    case 9:
                    case 10: var46 = 3; break;
                }
                sprintf(var28, (char *) func_020e0434((Struct_0201099c_3 *) arg0->unknown_dc_, var46));
                func_0204f41c(&var27, 0xb0 - func_020420e8(var28, 0), var42, var28, 10, 15, &var36, &var37, 0);
                var27.unknown_b4_ = 8;
                var27.unknown_b6_ = 8;
                sprintf(var28, data_ov003_021802b6, var41->unknown_e_3_);
                func_0204f41c(&var27, 0xc8 - func_020420e8(var28, 0), var42, var28, 10, 15, &var36, &var37, 0);
                sprintf(var28, data_ov003_021802b3,
                        (char *) func_020e0434((Struct_0201099c_3 *) arg0->unknown_dc_,
                                                                                (short) (var41->unknown_d_7_ + 0xe)));
                func_0204f41c(&var27, 0xce, var42, var28, 10, 15, &var36, &var37, 0);
                sprintf(var28, data_ov003_021802b6, var41->unknown_b_0_ + 2000);
                func_0204f41c(&var27, 0xf4 - func_020420e8(var28, 0), var42, var28, 10, 15, &var36, &var37, 0);
            }
            if (inline_ov003_0216e714(inline_ov003_0216e714_2(var25)) > 8) {
                char *var47 = func_02042a50(8, data_ov003_021802b9);
                if (var47 != 0) {
                    func_0204e038(&var27, var47, 0xc, 0xb2, 8, 8, 0xf0, 0xf);
                }
                var47 = func_02042a50(8, data_ov003_021802bc);
                if (var47 != 0) {
                    func_0204e038(&var27, var47, 0xee, 0xb2, 8, 8, 0xf0, 0xf);
                }
                func_0204f41c(&var27, 0x7e, 0xaf, data_ov003_0217f5bc, 8, 15, &var36, &var37, 0);
                sprintf(var28, data_ov003_021802b6, arg0->unknown_0_);
                func_0204f41c(&var27, 0x7d - func_020420e8(var28, 0), 0xaf, var28, 8, 15, &var36, &var37, 0);
                sprintf(var28, data_ov003_021802b6, arg0->unknown_4_);
                func_0204f41c(&var27, 0x82, 0xaf, var28, 8, 15, &var36, &var37, 0);
            }
            switch (arg0->unknown_3_) {
                case 1: arg0->unknown_6_ = arg0->unknown_5_ - 1; break;
                case 2: arg0->unknown_6_ = 0; break;
            }
            arg0->unknown_3_ = 0;
            if (arg0->unknown_6_ >= arg0->unknown_5_) {
                arg0->unknown_6_ = arg0->unknown_5_ - 1;
            }
            func_0204af64((struct Struct_02020cb8 *) &var32);
            var32.unknown_1c_0_ = 0;
            var32.unknown_1c_4_ = 3;
            func_0204b11c((unsigned char *) &var32, 0);
            func_0204b5e8((struct Struct_02020cb8_5 *) &var32, 0, 0);
            BG3CNT = (BG3CNT & 0x43) | 0xf00;
            for (int var48 = 0; var48 < var44; var48++) {
                if (var48 == 2) {
                    Struct_ov003_0216e714_6 *var49  = var29[var48];
                    unsigned int var50 = var49->unknown_c_;
                    CleanInvalidateCacheRange((char *) var49 + 0x10, var50);
                    LoadToMainBG3ScreenData((int) ((char *) var49 + 0x10), 0, var50);
                } else {
                    func_0204b174(&var32, var29[var48], 0, var30[var48]);
                }
            }
            func_0204b0e8((struct Struct_02020cb8_2 *) &var32, 0);
            func_0204afb4((struct Struct_02020cb8_3 *) &var32);
            var26->RemoveTask(arg0->unknown_1c_);
            arg0->unknown_1c_ = -1;
            if (!(arg0->unknown_20_ & 0x20)) {
                DISPCNT     = (DISPCNT & ~0x1f00) | 0xf00;
                BG0CNT      = (BG0CNT & ~3) | 3;
                BG1CNT      = BG1CNT & ~3;
                BG2CNT      = (BG2CNT & ~3) | 1;
                BG3CNT      = (BG3CNT & ~3) | 2;
                arg0->unknown_1_ = 3;
                arg0->unknown_2_  = 0;
            } else {
                DISPCNT     = (DISPCNT & ~0x1f00) | 0x1f00;
                BG0CNT      = BG0CNT & ~3;
                BG1CNT      = (BG1CNT & ~3) | 1;
                BG2CNT      = (BG2CNT & ~3) | 2;
                BG3CNT      = (BG3CNT & ~3) | 3;
                arg0->unknown_1_ = 4;
                arg0->unknown_2_  = 0;
            }
        }
    }
}
#endif

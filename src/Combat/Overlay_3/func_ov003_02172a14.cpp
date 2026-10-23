#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"
#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include "Resource/GameResources.h"

struct GameResources;
struct Struct_02020cb8_4;
struct Struct_02020aec;
struct Struct_02020cb8;
struct Struct_02020cb8_5;
struct Struct_02020cb8_6;
struct Struct_ov003_02172a14;

extern "C" int func_02046900(Struct_02020cb8_4 *arg0);
extern "C" void *func_020467f0(Struct_02020aec *arg0, int arg1, void **arg2, int *arg3);
extern "C" void func_0205a528(void *arg0, void *arg1, unsigned int arg2, void *arg3);
extern "C" void func_0204c684(void *arg0);
extern "C" Struct_ov003_02172a14 *func_02012fe4(void);
extern "C" void __clear(void *arg0, int arg1);
extern "C" void func_0204f41c(void *arg0, int arg1, int arg2, char *arg3, int arg4, int arg5, short *arg6, short *arg7, int arg8);
extern "C" void func_0204af64(Struct_02020cb8 *arg0);
extern "C" void func_0204b11c(unsigned char *arg0, int arg1);
extern "C" void func_0204b5e8(Struct_02020cb8_5 *arg0, int arg1, int arg2);
extern "C" void func_0204b2e0(void *arg0, char *arg1);
extern "C" void func_0204b3a0(Struct_02020cb8_6 *arg0, char *arg1);
extern "C" void ColorEffect_ConfigureAlphaBlend(int control, int a, int b, int c, int d);
void SetMainBrightness(GameResources *resources, int a, int b);
extern "C" void func_020728ac(void *arg0, void *arg1, void *arg2, unsigned int arg3, int arg4, int arg5, int arg6);

extern char data_ov003_021809b0[];
extern char data_ov003_021809c4[];
extern char data_ov003_021809d4[];
extern char data_ov003_021809e6[];
extern char data_ov003_021809f4[];
extern char data_ov003_021809f8[];
extern char data_ov003_02180a0d[];
extern char data_ov003_02180a1e[];
extern char data_ov003_02180a38[];

struct Struct_02000c9c_88 {
    unsigned char unknown_0_[0xb34];
    int unknown_b34_;
};

struct Struct_ov003_02172a14 {
    unsigned char unknown_0_[0x1840];
    Struct_02000c9c_88 unknown_1840_;
};

static inline Struct_02000c9c_88 *inline_ov003_0216e714_2(Struct_ov003_02172a14 *arg0) { return &arg0->unknown_1840_; }
static inline int inline_ov003_02172a14(Struct_02000c9c_88 *arg0) { return arg0->unknown_b34_; }

struct Struct_ov003_02172a14_2 {
    unsigned char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
    unsigned char unknown_1d_[3];
};

struct Struct_ov003_02172a14_3 {
    void *unknown_0_;
    void *unknown_4_;
    void *unknown_8_;
    char unknown_c_[0xa8 - 0xc];
    short unknown_a8_;
    short unknown_aa_;
    char unknown_ac_[0xb4 - 0xac];
    short unknown_b4_;
    short unknown_b6_;
    char unknown_b8_[0xe0 - 0xb8];
};

struct Struct_ov003_02172a14_4 {
    char unknown_0_[0xec];
    unsigned char unknown_ec_;
    char unknown_ed_;
    unsigned char unknown_ee_;
    char unknown_ef_;
    int unknown_f0_;
    char unknown_f4_[0x128 - 0xf4];
    int unknown_128_;
    int unknown_12c_;
    char unknown_130_[0x16c - 0x130];
    int unknown_16c_;
    int unknown_170_;
    char unknown_174_[0x17c - 0x174];
    short unknown_17c_;
    char unknown_17e_[2];
    unsigned char unknown_180_;
    char unknown_181_[0x1d8 + 8 - 0x181];
};

// USA: func_ov003_02172a14
extern "C" ARM void func_ov003_02172a14(Struct_ov003_02172a14_4 *arg0) {
    GameResources *var0       = GetGameResources();
    BackgroundLoader *var1 = BackgroundLoader::GetInstance();
    Struct_0208cb08* var2 = func_02094a00();
    if (arg0->unknown_ee_ == 0) {
        arg0->unknown_180_ = 0;
        arg0->unknown_170_ = arg0->unknown_128_;
        arg0->unknown_17c_ = 0xd;
        arg0->unknown_16c_ = arg0->unknown_12c_;
        arg0->unknown_f0_ = var1->QueueLoadFileInGP2(data_ov003_021809b0, data_ov003_021809c4, 0);
        arg0->unknown_ee_ = 1;
    }
    if (arg0->unknown_ee_ == 1) {
        if (var1->GetTaskStatus(arg0->unknown_f0_) == 0) return;
        void *var3;
        void *var4;
        unsigned int var5;
        int var6;
        var1->GetLoadedFileByID(arg0->unknown_f0_, &var4, &var5);
        int var7 = func_02046900((Struct_02020cb8_4 *) var4);
        for (int var8 = 0; var8 < var7; var8++) {
            void *var9 = func_020467f0((Struct_02020aec *) var4, var8, &var3, &var6);
            func_0205a528((char *) arg0 + 0x130, var9, var6, (char *) arg0 + 0x1ac);
        }
        var1->RemoveTask(arg0->unknown_f0_);
        arg0->unknown_f0_ = -1;
        arg0->unknown_f0_ = var1->QueueLoadFileInGP2(data_ov003_021809d4, data_ov003_021809e6, 0);
        arg0->unknown_ee_ = 2;
    }
    if (arg0->unknown_ee_ == 2) {
        if (var1->GetTaskStatus(arg0->unknown_f0_) == 0) return;
        void *var10;
        void *var11;
        unsigned int var12;
        void *var13[3];
        int var14[3];
        Struct_ov003_02172a14_3 var15;
        char var16[0x40];
        Struct_ov003_02172a14_2 var17;
        short var18;
        short var19;
        var1->GetLoadedFileByID(arg0->unknown_f0_, &var11, &var12);
        int var20 = func_02046900((Struct_02020cb8_4 *) var11);
        for (int var21 = 0; var21 < var20; var21++) {
            var13[var21] = func_020467f0((Struct_02020aec *) var11, var21, &var10, &var14[var21]);
        }
        func_0204c684(&var15);
        var15.unknown_8_ = (char *) var13[0] + 0x10;
        var15.unknown_a8_  = 0x20;
        var15.unknown_aa_ = 0x18;
        var15.unknown_b4_  = 8;
        var15.unknown_b6_  = 8;
        Struct_ov003_02172a14 *var22 = func_02012fe4();
        __clear(var16, 0x40);
        int var23 = inline_ov003_02172a14(inline_ov003_0216e714_2(var22));
        if (var23 > 9999) var23 = 9999;
        sprintf(var16, data_ov003_021809f4, var23);
        func_0204f41c(&var15, 0xb0, 0x48, var16, 8, 1, &var18, &var19, 0);
        func_0204af64((Struct_02020cb8 *) &var17);
        var17.unknown_1c_0_ = 0;
        var17.unknown_1c_4_ = 1;
        func_0204b11c((unsigned char *) &var17, 0);
        func_0204b5e8((Struct_02020cb8_5 *) &var17, 0, 0);
        for (int var24 = 0; var24 < var20; var24++) {
            func_0204b2e0(&var17, (char *) var13[var24]);
            func_0204b3a0((Struct_02020cb8_6 *) &var17, (char *) var13[var24]);
        }
        ColorEffect_ConfigureAlphaBlend(0x04000050, 1, 0x12, 0x1f, 0x1f);
        SetMainBrightness(var0, 0, 0x18);
        var1->RemoveTask(arg0->unknown_f0_);
        arg0->unknown_f0_ = -1;
        arg0->unknown_f0_ = var1->QueueLoadFileInGP2(data_ov003_021809f8, data_ov003_02180a0d, 0);
        arg0->unknown_ee_ = 3;
    }
    if (arg0->unknown_ee_ == 3) {
        if (var1->GetTaskStatus(arg0->unknown_f0_) == 0) return;
        void *var25;
        unsigned int var26;
        var1->GetLoadedFileByID(arg0->unknown_f0_, &var25, &var26);
        func_020728ac((char *) arg0 + 0x1d0, (char *) arg0 + 0x184, var25, var26, 0, 0, 0);
        var1->RemoveTask(arg0->unknown_f0_);
        arg0->unknown_f0_ = var1->QueueLoadFileInGP2(data_ov003_02180a1e, data_ov003_02180a38, 0);
        arg0->unknown_ee_ = 4;
    }
    if (arg0->unknown_ee_ == 4) {
        if (var1->GetTaskStatus(arg0->unknown_f0_) == 0) return;
        void *var27;
        unsigned int var28;
        var1->GetLoadedFileByID(arg0->unknown_f0_, &var27, &var28);
        func_020728ac((char *) arg0 + 0x1d8, (char *) arg0 + 0x198, var27, var28, 0, 0, 0);
        var1->RemoveTask(arg0->unknown_f0_);
        arg0->unknown_f0_ = -1;
        arg0->unknown_ee_ = 5;
    }
    if (arg0->unknown_ee_ == 5) {
        func_02094b30(var2, 0x1ff, 0);
        if (func_02094b4c(var2) != 0) {
            arg0->unknown_ec_ = 2;
            arg0->unknown_ee_  = 0;
        }
    }
}

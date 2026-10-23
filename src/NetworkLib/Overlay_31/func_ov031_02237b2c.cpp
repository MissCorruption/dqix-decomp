#include <globaldefs.h>
#include <Resource/UiArrayEntry.h>
#include <NitroSDK/ColorEffects.h>

struct Struct_ov031_022492e2 { unsigned short unknown_0_; unsigned short unknown_2_; unsigned short unknown_4_; unsigned short unknown_6_; };
struct Struct_ov031_02222ce4;
struct Struct_ov031_02237b2c {
    Struct_ov031_02222ce4* unknown_0_;
    void* unknown_4_;
    Struct_ov031_02222ce4* unknown_8_[2];
    void* unknown_10_;
    void* unknown_14_;
    unsigned char unknown_18_[3];
    signed char unknown_1b_;
    unsigned char unknown_1c_;
    unsigned char unknown_1d_;
    unsigned char unknown_1e_;
    unsigned char unknown_1f_;
};
struct Struct_ov031_022492d8 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned char unknown_4_[6];
};
struct Struct_ov031_0224931c { unsigned short unknown_0_, unknown_2_; };
extern const Struct_ov031_022492d8 data_ov031_022492d8;
extern Struct_ov031_022276b4* data_ov031_02290c4c;
extern Struct_ov031_02237b2c* data_ov031_02290d10;
extern const unsigned char data_ov031_0224938c[];
extern unsigned char data_ov031_02249394[];
extern const unsigned char data_ov031_022492fe[][2];
extern const Struct_ov031_0224931c data_ov031_0224931c[];
extern const Struct_ov031_022492e2 data_ov031_022492e2;
extern "C" void* func_ov031_0223cf4c(unsigned int, int);
extern "C" Struct_ov031_02222ce4* func_ov031_0223be70(int, int, int);
extern "C" void func_ov031_0223bbd8(Struct_ov031_02222ce4*, int, int, int);
extern "C" void func_ov031_0223bcc8(Struct_ov031_02222ce4*, int, int);
extern "C" void* func_ov031_0223c458(int, int, int, int, int*, int);
extern "C" void* func_ov031_0223b8c4(int, int, int);
extern "C" int func_ov031_022236d0();
extern "C" void func_ov031_0223c980(void*, int, int, int, int, int, int, void*);
extern "C" void func_ov031_0223ca54(void*, int, int, void*, int);
extern "C" void func_ov031_0223cd30(int, int, int, int);
extern "C" void func_ov031_0223cc18(int, int, const Struct_ov031_022492e2*);
extern "C" void func_ov031_022381c8(int);
extern "C" void* func_ov031_0223e218(void*, void*, void*, int);
extern "C" void func_ov031_02237ecc(void*);
extern "C" void func_ov031_02237f2c(void*);
#define REG_DISPCNT (*(volatile unsigned int*)0x04000000)

// USA: func_ov031_02237b2c
extern "C" ARM void func_ov031_02237b2c(int arg0, int arg1, unsigned char arg2, int arg3, int arg4) {
    unsigned char var0[6] = {
        data_ov031_022492d8.unknown_4_[0], data_ov031_022492d8.unknown_4_[1],
        data_ov031_022492d8.unknown_4_[2], data_ov031_022492d8.unknown_4_[3],
        data_ov031_022492d8.unknown_4_[4], data_ov031_022492d8.unknown_4_[5]
    };
    int var1 = func_ov031_022276cc(data_ov031_02290c4c, arg0, arg3, arg4);
    data_ov031_02290d10 = (Struct_ov031_02237b2c*)func_ov031_0223cf4c(sizeof(Struct_ov031_02237b2c), 4);
    data_ov031_02290d10->unknown_1c_ = arg1;
    data_ov031_02290d10->unknown_1b_ = -2;
    data_ov031_02290d10->unknown_1e_ = arg2;
    ColorEffect_ConfigureBrightnessAdjust(0x04000050, 31, 0);
    data_ov031_02290d10->unknown_0_ = func_ov031_0223be70(0, data_ov031_0224938c[arg1], 0);
    func_ov031_0223bbd8(data_ov031_02290d10->unknown_0_, -1, 256, 0);
    func_ov031_0223bcc8(data_ov031_02290d10->unknown_0_, -1, 0);
    int var2 = 0;
    if (var2 < data_ov031_02249394[arg1]) {
        const unsigned char* var3 = data_ov031_022492fe[arg1];
        do {
            data_ov031_02290d10->unknown_8_[var2] = func_ov031_0223be70(0, *var3++, 0);
            func_ov031_0223bbd8(data_ov031_02290d10->unknown_8_[var2], -1, 256, 0);
            func_ov031_0223bcc8(data_ov031_02290d10->unknown_8_[var2], -1, 0);
            var2++;
        } while (var2 < data_ov031_02249394[arg1]);
    }
    int var4;
    data_ov031_02290d10->unknown_10_ = func_ov031_0223c458(0, 32, 12, 1, &var4, 0);
    data_ov031_02290d10->unknown_4_ = func_ov031_0223b8c4(0, var4, 0);
    int var5 = func_ov031_022236d0();
    func_ov031_0223c980(data_ov031_02290d10->unknown_10_, 0, 0,
        data_ov031_0224931c[arg1].unknown_0_, data_ov031_0224931c[arg1].unknown_2_,
        2, var5, (void*)var1);
    func_ov031_0223ca54(data_ov031_02290d10->unknown_10_, 256, 0, data_ov031_02290d10->unknown_4_, 0);
    func_ov031_0223cd30(0, 0, 31, 0);
    func_ov031_0223cd30(0, 1, 31, var0[data_ov031_02290d10->unknown_1c_]);
    func_ov031_0223cd30(0, 3, 31, 1);
    func_ov031_0223cc18(0, 1, &data_ov031_022492e2);
    func_ov031_022381c8(192);
    REG_DISPCNT = (REG_DISPCNT & ~0xe000) | 0x6000;
    if (arg2) data_ov031_02290d10->unknown_14_ = func_ov031_0223e218((void*)1, (void*)func_ov031_02237ecc, 0, 120);
    else data_ov031_02290d10->unknown_14_ = func_ov031_0223e218((void*)1, (void*)func_ov031_02237f2c, 0, 120);
}

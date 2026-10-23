#include <globaldefs.h>

struct Struct_020b1d48_2 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    unsigned char unknown_c_;
    unsigned char unknown_d_[3];
    int unknown_10_;
    void* unknown_14_;
    Struct_020b1d48_2* unknown_18_;
    void* unknown_1c_;
    int unknown_20_;
    int unknown_24_;
    int unknown_28_;
    void* unknown_2c_;
};
struct Struct_020b1d48 { unsigned char unknown_0_[8]; };
struct Struct_ov031_0223c560 {
    Struct_020b1d48 unknown_0_[0x610 / 8];
    Struct_020b1d48_2 unknown_610_[2];
    unsigned char unknown_670_[0xc];
    unsigned char unknown_67c_[2];
};
struct Struct_ov031_022493b0 { unsigned short unknown_0_; unsigned short unknown_2_; };
extern Struct_ov031_0223c560* data_ov031_02290d38;
extern Struct_ov031_022493b0 data_ov031_022493b2[];
extern Struct_ov031_022493b0 data_ov031_022493b0[];
extern const unsigned short data_ov031_022493ac[];
extern "C" int func_ov031_0223cf4c(unsigned int, int);
extern "C" void func_020b1e94(Struct_020b1d48_2*, int, int, int, int);
extern "C" void* GetSubBG0ScreenBase();
extern "C" void* GetMainBG0ScreenBase();
extern "C" void func_020b1f48(void*, int, int, int, int, int, int, int);
extern "C" void func_ov031_0223ca40(Struct_020b1d48_2*, int);
extern "C" void func_ov031_0223c6d8();
extern "C" void* func_ov031_0223e218(void*, void*, void*, int);
#define REG_SUB_BG0CNT (*(volatile unsigned short*)0x04001008)
#define REG_MAIN_BG0CNT (*(volatile unsigned short*)0x04000008)

// USA: func_ov031_0223c560
extern "C" ARM Struct_020b1d48_2* func_ov031_0223c560(int arg0, int arg1) {
    unsigned short var0 = data_ov031_022493b2[arg0].unknown_0_;
    unsigned short var1 = data_ov031_022493b0[arg0].unknown_0_;
    Struct_020b1d48_2* var2 = &data_ov031_02290d38->unknown_610_[arg0];
    var2->unknown_28_ = func_ov031_0223cf4c(var1 * var0 * 0x20, 0x20);
    if (arg0 == 1) {
        REG_SUB_BG0CNT &= ~0x40;
        REG_SUB_BG0CNT = (REG_SUB_BG0CNT & 0x43) | 0xc00;
    } else {
        REG_MAIN_BG0CNT &= ~0x40;
        REG_MAIN_BG0CNT = (REG_MAIN_BG0CNT & 0x43) | 0xc00;
    }
    func_020b1e94(var2, var2->unknown_28_, var1, var0, 4);
    void* var3 = &data_ov031_02290d38->unknown_0_[arg1];
    var2->unknown_18_ = var2;
    var2->unknown_1c_ = var3;
    var2->unknown_20_ = 1;
    var2->unknown_24_ = 1;
    void* var4 = arg0 == 1 ? GetSubBG0ScreenBase() : GetMainBG0ScreenBase();
    int var5 = data_ov031_022493ac[arg0];
    func_020b1f48(var4, var1, var0, 0, 0, 0x20, var5, 0xf);
    func_ov031_0223ca40(var2, 0);
    var2->unknown_2c_ = func_ov031_0223e218((void*)1, (void*)func_ov031_0223c6d8, &data_ov031_02290d38->unknown_67c_[arg0], 0xc8);
    return var2;
}

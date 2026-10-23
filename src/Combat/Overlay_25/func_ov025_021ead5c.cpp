#include <globaldefs.h>

extern "C" void* __clear(void* arg0, int arg1);

struct Struct_ov025_021ead5c_2 {
    char unknown_0_[0xe];
    short unknown_e_;
    char unknown_10_[0x20 - 0x10];
    struct Struct_ov025_021ead5c_2* unknown_20_;
};

struct Struct_ov000_021600f8 {
    struct Struct_ov025_021ead5c_2* unknown_0_;
    char unknown_4_[0x20 - 0x4];
    struct Struct_ov000_021600f8* unknown_20_;
};

struct Struct_ov000_0215440c {
    char unknown_0_[0x1e];
    unsigned short unknown_1e_;
    unsigned short unknown_20_;
};

struct Struct_ov025_021ead5c {
    char unknown_0_[0x5ca];
    unsigned char unknown_5ca_;
    unsigned char unknown_5cb_;
    char unknown_5cc_[0x5d2 - 0x5cc];
    short unknown_5d2_[9];
    int unknown_5e4_;
    char unknown_5e8_[1];
};

extern "C" void* func_ov000_02160130(void);
extern "C" Struct_ov000_0215440c* func_ov000_02160f20(void* arg0);
extern "C" Struct_ov000_021600f8* func_ov000_021600f8(Struct_ov000_0215440c* arg0, int arg1);
extern "C" int func_ov000_0215fd90(Struct_ov025_021ead5c_2* arg0, int arg1);
extern "C" short func_ov000_0215ffa0(Struct_ov000_021600f8* arg0);
extern "C" int func_ov025_021ed380(char* arg0, int arg1, int arg2, int arg3, int arg4, short arg5, unsigned short arg6);

static inline int inline_ov017_021c530c(int arg0) {
    return (arg0 >= 0xc0 && arg0 <= 0xc7) ? 1 : 0;
}

static inline int inline_ov025_021ead5c(int arg0) {
    return (arg0 >= 0 && arg0 <= 3) ? 1 : 0;
}

// USA: func_ov025_021ead5c
extern "C" ARM void func_ov025_021ead5c(Struct_ov025_021ead5c* arg0, int arg1) {
    if (arg1 == 0) {
        if (arg0->unknown_5ca_ != 0) {
            return;
        }
        arg0->unknown_5ca_ = 1;
    }
    if (arg1 != 0) {
        if (arg0->unknown_5cb_ != 0) {
            return;
        }
        arg0->unknown_5cb_ = 1;
    }
    Struct_ov000_0215440c* var0 = func_ov000_02160f20(func_ov000_02160130());
    unsigned char var1[4];
    int var2[4];
    __clear(var1, sizeof(var1));
    int var3 = 0;
    __clear(var2, sizeof(var2));
    int var4 = 0;
    if (var0->unknown_1e_ != 0 || var0->unknown_20_ != 0) {
        for (Struct_ov000_021600f8* var5 = func_ov000_021600f8(var0, 0); var5 != NULL; var5 = var5->unknown_20_) {
            for (Struct_ov025_021ead5c_2* var6 = var5->unknown_0_; var6 != NULL; var6 = var6->unknown_20_) {
                if (func_ov000_0215fd90(var6, 0xd) != 0) {
                    continue;
                }
                if (var6->unknown_e_ > 0) {
                    continue;
                }
                int var7 = func_ov000_0215ffa0(var5);
                if (inline_ov017_021c530c(var7)) {
                    if (var3 == 0) {
                        var3 = var7;
                    }
                } else if (inline_ov025_021ead5c(var7)) {
                    if (var1[var7] == 0) {
                        var2[var4] = var7;
                        var1[var7] = 1;
                        var4++;
                    }
                }
                break;
            }
        }
    }
    if (arg1 != 0) {
        for (int var8 = 0; var8 < arg0->unknown_5e4_; var8++) {
            func_ov025_021ed380(arg0->unknown_5e8_, 8, arg0->unknown_5d2_[var8], 0, 0, -1, 0);
        }
        arg0->unknown_5e4_ = 0;
    } else if (var3 != 0) {
        func_ov025_021ed380(arg0->unknown_5e8_, var0->unknown_20_, (short)var3, 0, 0, -1, 0);
    }
}

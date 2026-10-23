#include <globaldefs.h>

extern "C" void func_ov031_022415b4(void* arg0, unsigned int arg1);
extern "C" void func_ov031_022415c8(void* arg0, const void* arg1, unsigned int arg2);
extern "C" int func_ov031_022415a8(const char* arg0);
extern "C" int func_ov031_02241540(const char* arg0, const char* arg1, int arg2);
extern "C" int func_ov031_02242c54(const char* arg0, int arg1);
extern "C" int func_ov031_02242f14(const char* arg0, int arg1);

extern int data_ov031_02290fc0;
extern void* (*data_ov031_02290fc4)(unsigned int size, int align);
extern void (*data_ov031_02290fc8)(void* p);
extern const char data_ov031_0224c770[];
extern const char data_ov031_0224c778[];
extern const unsigned char data_ov031_022494c0[];

struct Struct_ov031_02240890 {
    char unknown_0_[0x800];
    char* unknown_800_;
    char unknown_804_[0x2c];
};

struct Struct_ov031_02240890_2 {
    char unknown_0_[0xc];
    unsigned int unknown_c_;
    char unknown_10_[8];
    void* unknown_18_;
    char unknown_1c_[0x404];
};

struct Struct_ov031_02218098_2 {
    char unknown_0_[8];
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    char unknown_14_[0xc];
    Struct_ov031_02240890* unknown_20_;
    char* unknown_24_;
    int unknown_28_;
    void* unknown_2c_;
    Struct_ov031_02240890_2* unknown_30_;
    char unknown_34_[8];
    void* unknown_3c_;
    int unknown_40_;
    unsigned char unknown_44_[0x14];
};

// USA: func_ov031_02240890
extern "C" ARM Struct_ov031_02218098_2* func_ov031_02240890(const char* arg0, int arg1, void* arg2, unsigned int arg3,
                                                void* arg4, void* arg5) {
    int var0;
    int var1;
    int var2;
    int var3;
    const char* var4;
    int var5;
    int var6;
    signed char var7;
    Struct_ov031_02218098_2* var8 = 0;
    int var9;

    if (arg1 != 0 && arg1 != 1 && arg1 != 2) {
        data_ov031_02290fc0 = 0xb;
        goto fail;
    }
    if (arg3 == 0) {
        data_ov031_02290fc0 = 0xb;
        goto fail;
    }
    var8 = (Struct_ov031_02218098_2*)data_ov031_02290fc4(sizeof(Struct_ov031_02218098_2), 4);
    if (var8 == 0) {
        data_ov031_02290fc0 = 1;
        goto fail;
    }
    func_ov031_022415b4(var8, sizeof(Struct_ov031_02218098_2));
    var8->unknown_30_ = (Struct_ov031_02240890_2*)data_ov031_02290fc4(sizeof(Struct_ov031_02240890_2), 4);
    if (var8->unknown_30_ == 0) {
        data_ov031_02290fc0 = 1;
        goto fail;
    }
    func_ov031_022415b4(var8->unknown_30_, sizeof(Struct_ov031_02240890_2));
    var8->unknown_30_->unknown_18_ = arg2;
    var8->unknown_30_->unknown_c_ = arg3;

    var1 = func_ov031_022415a8(arg0);
    if (var1 <= 7) {
        data_ov031_02290fc0 = 4;
        goto fail;
    }
    var0 = 7;
    var8->unknown_28_ = 80;
    if (func_ov031_02241540(arg0, data_ov031_0224c770, var0) != 0) {
        if (func_ov031_02241540(arg0, data_ov031_0224c778, 8) != 0) {
            data_ov031_02290fc0 = 4;
            goto fail;
        }
        var8->unknown_8_ = 1;
        var8->unknown_28_ = 443;
        var0 = 8;
    }
    var1 -= var0;
    var4 = arg0 + var0;
    if (var1 <= 0) {
        data_ov031_02290fc0 = 4;
        goto fail;
    }

    for (var2 = 0, var5 = 0, var9 = 0; var2 < var1 && var4[var2] != '/'; var2++) {
        if (var9 == 2) {
            var9--;
        } else if (var9 == 1) {
            var7 = func_ov031_02242c54(&var4[var2 - 1], 2);
            var9--;
            if (var7 < 0) {
                data_ov031_02290fc0 = 4;
                goto fail;
            }
            if (var7 == '/') {
                var5--;
                break;
            }
        } else if (var4[var2] == '%') {
            var9 = 2;
            var5++;
        }
    }
    if (var9 != 0) {
        data_ov031_02290fc0 = 4;
        goto fail;
    }

    var8->unknown_24_ = (char*)data_ov031_02290fc4(var0 + var1 - var5 * 2 + 1, 4);
    if (var8->unknown_24_ == 0) {
        data_ov031_02290fc0 = 1;
        goto fail;
    }
    func_ov031_022415c8(var8->unknown_24_, arg0, var0);

    for (var2 = 0, var3 = 0, var9 = 0, var6 = 0; var2 < var1; var2++) {
        if (var9 == 2) {
            var9--;
        } else if (var9 == 1) {
            var7 = func_ov031_02242c54(&var4[var2 - 1], 2);
            var8->unknown_24_[var0 + var3 - 1] = var7;
            var9--;
            if (var7 == '/') {
                var6 = 1;
            }
        } else {
            var7 = var4[var2];
            if (var7 == '/') {
                var6 = 1;
            }
            if (var6 == 0 && var7 == '%') {
                var9 = 2;
            } else {
                var8->unknown_24_[var0 + var3] = var7;
            }
            var3++;
        }
    }
    var8->unknown_24_[var0 + var3] = 0;

    {
        const char* var10 = var8->unknown_24_ + var0;
        int var11;
        for (var11 = 0; var11 < var3; var11++) {
            if (var10[var11] == '/' || var10[var11] == ':') {
                var8->unknown_c_ = var11 + var0;
                break;
            }
        }
        if (var11 == var3) {
            var8->unknown_c_ = var11 + var0;
            var8->unknown_10_ = var11 + var0;
        } else if (var10[var11] == '/') {
            var8->unknown_10_ = var8->unknown_c_;
        } else if (var10[var11] == ':') {
            for (; var11 < var3; var11++) {
                if (var10[var11] == '/') {
                    var8->unknown_10_ = var11 + var0;
                    break;
                }
            }
            if (var11 == var3) {
                var8->unknown_10_ = var11 + var0;
            } else {
                int var12 = var8->unknown_c_ + 1;
                int var13 = func_ov031_02242f14(var8->unknown_24_ + var12, var8->unknown_10_ - var12);
                if (var13 < 0) {
                    var13 = var8->unknown_28_;
                } else if (var13 > 0xffff) {
                    data_ov031_02290fc0 = 4;
                    goto fail;
                }
                var8->unknown_28_ = (unsigned short)var13;
            }
        }
    }

    if (var8->unknown_8_ != 0) {
        int var14 = var8->unknown_c_ - var0;
        var8->unknown_20_ = (Struct_ov031_02240890*)data_ov031_02290fc4(sizeof(Struct_ov031_02240890), 4);
        if (var8->unknown_20_ == 0) {
            data_ov031_02290fc0 = 1;
            goto fail;
        }
        func_ov031_022415b4(var8->unknown_20_, sizeof(Struct_ov031_02240890));
        var8->unknown_20_->unknown_800_ = (char*)data_ov031_02290fc4(var14 + 1, 4);
        if (var8->unknown_20_->unknown_800_ == 0) {
            data_ov031_02290fc0 = 1;
            goto fail;
        }
        func_ov031_022415c8(var8->unknown_20_->unknown_800_, var8->unknown_24_ + var0, var14);
        var8->unknown_20_->unknown_800_[var14] = 0;
    }

    func_ov031_022415c8(var8->unknown_44_, data_ov031_022494c0, sizeof(var8->unknown_44_));
    var8->unknown_2c_ = arg5;
    var8->unknown_40_ = arg1;
    var8->unknown_3c_ = arg4;
    return var8;

fail:
    if (var8 != 0) {
        if (var8->unknown_20_ != 0) {
            if (var8->unknown_20_->unknown_800_ != 0) {
                data_ov031_02290fc8(var8->unknown_20_->unknown_800_);
            }
            data_ov031_02290fc8(var8->unknown_20_);
        }
        if (var8->unknown_24_ != 0) {
            data_ov031_02290fc8(var8->unknown_24_);
        }
        if (var8->unknown_30_ != 0) {
            data_ov031_02290fc8(var8->unknown_30_);
        }
        data_ov031_02290fc8(var8);
    }
    return 0;
}

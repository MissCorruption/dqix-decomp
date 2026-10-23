#include <globaldefs.h>

struct Struct_0204fd00_2 {
    char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
};

struct Struct_0204fd00 {
    Struct_0204fd00* unknown_0_;
    Struct_0204fd00_2* unknown_4_;
    char unknown_8_[0xa8 - 0x8];
    short unknown_a8_;
    short unknown_aa_;
    short unknown_ac_;
    short unknown_ae_;
    char unknown_b0_[0xc5 - 0xb0];
    unsigned char unknown_c5_;
};

extern "C" int func_0204ea28(short arg0, short arg1, short arg2, short arg3, short arg4, short arg5);

// USA: func_0204fd00
extern "C" ARM int func_0204fd00(Struct_0204fd00* arg0, int arg1) {
    int var0;
    short var1;
    short var2;
    short var3;
    short var4;
    short var5;
    short var6;
    short var7;
    short var8;
    unsigned char var9;
    Struct_0204fd00* var10;
    var10 = arg0->unknown_0_;
    if (var10 == NULL) {
        return 0;
    }
    var6 = arg0->unknown_ac_;
    var1 = arg0->unknown_ae_;
    var7 = var6 + arg0->unknown_a8_;
    var8 = var1 + arg0->unknown_aa_;
    var9 = 0;
    var0 = 0;
    if (arg0->unknown_4_ != NULL) {
        var9 = arg0->unknown_4_->unknown_1c_0_;
    }
    while (var10 != NULL) {
        if (var10->unknown_4_ != NULL && arg0->unknown_4_ != NULL && var9 != var10->unknown_4_->unknown_1c_0_) {
            var10 = var10->unknown_0_;
            continue;
        }
        if (var10->unknown_c5_ & 0x20) {
            var10 = var10->unknown_0_;
            continue;
        }
        if ((var10->unknown_c5_ & 4) && (var10->unknown_c5_ & 0x10)) {
            var10 = var10->unknown_0_;
            continue;
        }
        var2 = var10->unknown_ac_;
        var3 = var10->unknown_ae_;
        var4 = var2 + var10->unknown_a8_;
        var5 = var3 + var10->unknown_aa_;
        if (arg1 & 1) {
            if (func_0204ea28(var6, var1, var2, var3, var4, var5)) {
                if (var6 != var2 || var1 != var3) {
                    var0 = 5;
                    if (var6 == var2) {
                        var0 = 1;
                    } else if (var1 == var3) {
                        var0 = 2;
                    }
                    break;
                }
            }
        }
        if (arg1 & 2) {
            if (func_0204ea28(var7 - 1, var1, var2, var3, var4, var5)) {
                if (var7 != var4 || var1 != var3) {
                    var0 = 5;
                    if (var7 == var4) {
                        var0 = 3;
                    } else if (var1 == var3) {
                        var0 = 2;
                    }
                    break;
                }
            }
        }
        if (arg1 & 4) {
            if (func_0204ea28(var6, var8 - 1, var2, var3, var4, var5)) {
                if (var6 != var2 || var8 != var5) {
                    var0 = 5;
                    if (var6 == var2) {
                        var0 = 1;
                    } else if (var8 == var5) {
                        var0 = 4;
                    }
                    break;
                }
            }
        }
        if (arg1 & 8) {
            if (func_0204ea28(var7 - 1, var8 - 1, var2, var3, var4, var5)) {
                if (var7 != var4 || var8 != var5) {
                    var0 = 5;
                    if (var7 == var4) {
                        var0 = 3;
                    } else if (var8 == var5) {
                        var0 = 4;
                    }
                    break;
                }
            }
        }
        var10 = var10->unknown_0_;
    }
    return var0;
}

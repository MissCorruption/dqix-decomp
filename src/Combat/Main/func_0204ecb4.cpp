#include <globaldefs.h>

struct Struct_0204ecb4 {
    char unknown_0_[0xa8];
    short unknown_a8_;
    short unknown_aa_;
};

extern "C" int func_0204fd00(Struct_0204ecb4* arg0, int arg1);
extern "C" void* func_020421b0(int arg0);
extern "C" void func_0204e1c8(Struct_0204ecb4* arg0, void* arg1, short arg2, short arg3, int arg4, int arg5, int arg6, int arg7);

static inline short inline_0204ecb4(short arg0) {
    return arg0 << 3;
}

// USA: func_0204ecb4
extern "C" ARM void func_0204ecb4(Struct_0204ecb4* arg0, int arg1, int arg2, short arg3, short arg4, signed char* arg5) {
    if (arg3 < 0 || arg4 < 0) {
        return;
    }
    short var0;
    int var1 = 0;
    int var2 = 0;
    int var3 = 0;
    int var4 = 0;
    if (arg5) {
        var1 = arg5[0];
        var2 = arg5[1];
        var3 = arg5[2];
        var4 = arg5[3];
    }

    int var5 = func_0204fd00(arg0, 1);
    int var6 = 0;
    if (var5 == 1) {
        var6 = 8;
    } else if (var5 == 2) {
        var6 = 12;
    }
    void* var7 = func_020421b0(var6);
    if (var7) {
        func_0204e1c8(arg0, var7, var3, var1, 8, 8, 0xf0, 0xf);
    }

    void* var8 = func_020421b0(1);
    if (var8) {
        for (short var9 = 1; var9 < arg0->unknown_a8_ - 1; var9++) {
            func_0204e1c8(arg0, var8, inline_0204ecb4(var9), var1, 8, 8, 0xf0, 0xf);
        }
    }

    short var10 = arg0->unknown_a8_;
    var5 = func_0204fd00(arg0, 2);
    var6 = 2;
    if (var5 == 3) {
        var6 = 9;
    } else if (var5 == 2) {
        var6 = 13;
    }
    var7 = func_020421b0(var6);
    if (var7) {
        func_0204e1c8(arg0, var7, inline_0204ecb4(var10 - 1) - var4, var1, 8, 8, 0xf0, 0xf);
    }

    var7 = func_020421b0(3);
    if (var7) {
        for (short var11 = 1; var11 < arg0->unknown_aa_ - 1; var11++) {
            func_0204e1c8(arg0, var7, var3, inline_0204ecb4(var11), 8, 8, 0xf0, 0xf);
        }
    }

    var7 = func_020421b0(4);
    var0 = inline_0204ecb4(arg0->unknown_a8_ - 1);
    if (var7) {
        for (short var12 = 1; var12 < arg0->unknown_aa_ - 1; var12++) {
            func_0204e1c8(arg0, var7, var0 - var4, inline_0204ecb4(var12), 8, 8, 0xf0, 0xf);
        }
    }

    short var13 = arg0->unknown_aa_;
    var5 = func_0204fd00(arg0, 4);
    var6 = 5;
    if (var5 == 1) {
        var6 = 10;
    } else if (var5 == 4) {
        var6 = 14;
    }
    var7 = func_020421b0(var6);
    if (var7) {
        func_0204e1c8(arg0, var7, var3, inline_0204ecb4(var13 - 1) - var2, 8, 8, 0xf0, 0xf);
    }

    void* var14 = func_020421b0(6);
    var0 = inline_0204ecb4(arg0->unknown_aa_ - 1);
    if (var14) {
        for (short var15 = 1; var15 < arg0->unknown_a8_ - 1; var15++) {
            func_0204e1c8(arg0, var14, inline_0204ecb4(var15), var0 - var2, 8, 8, 0xf0, 0xf);
        }
    }

    var10 = arg0->unknown_a8_;
    var13 = arg0->unknown_aa_;
    var5 = func_0204fd00(arg0, 8);
    var6 = 7;
    if (var5 == 3) {
        var6 = 11;
    } else if (var5 == 4) {
        var6 = 15;
    }
    var7 = func_020421b0(var6);
    if (var7) {
        func_0204e1c8(arg0, var7, inline_0204ecb4(var10 - 1) - var4, inline_0204ecb4(var13 - 1) - var2, 8, 8, 0xf0, 0xf);
    }
}

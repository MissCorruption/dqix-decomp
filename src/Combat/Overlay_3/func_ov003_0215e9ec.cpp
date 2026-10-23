#include <globaldefs.h>

struct Struct_ov003_0215e9a4 {
    char unknown_0_;
    signed char unknown_1_;
    signed char unknown_2_;
    char unknown_3_;
    short* unknown_4_;
};

struct Struct_ov003_0215e930 {
    char unknown_0_;
    signed char unknown_1_;
    char unknown_2_;
    signed char unknown_3_;
    short* unknown_4_;
};

struct Struct_ov003_0215e824;

struct Struct_ov003_0215e9ec {
    char unknown_0_[0x10];
    short unknown_10_;
};

struct Struct_ov003_0215e8f4 {
    struct Struct_ov003_0215e9ec* unknown_0_;
    struct Struct_ov003_0215e824* unknown_4_;
    char unknown_8_[0x19];
    unsigned char unknown_21_;
};

extern "C" struct Struct_ov003_0215e9a4* func_ov003_0215e8f4(struct Struct_ov003_0215e8f4*);
extern "C" ARM int func_ov003_0215e930(struct Struct_ov003_0215e930* arg0, short arg1, unsigned char* arg2, unsigned char* arg3);
extern "C" int func_ov003_0215e9a4(struct Struct_ov003_0215e9a4*, int, int);
extern "C" struct Struct_ov003_0215e9ec* func_ov003_0215e824(struct Struct_ov003_0215e824*, int);

// USA: func_ov003_0215e9ec
extern "C" ARM void func_ov003_0215e9ec(struct Struct_ov003_0215e8f4* arg0, int arg1, int arg2) {
    struct Struct_ov003_0215e9a4* var0 = func_ov003_0215e8f4(arg0);
    short var1;
    signed char var2;
    signed char var3;
    unsigned char var4;
    int var5;

    if (var0 == 0 || arg0->unknown_0_ == 0) return;
    var1 = arg0->unknown_0_->unknown_10_;
    if (func_ov003_0215e930((struct Struct_ov003_0215e930*)var0, var1, (unsigned char*)&var2, (unsigned char*)&var3) != 0) return;

    var4 = arg0->unknown_21_;
    var2 += arg1;
    var3 += arg2;
    var5 = func_ov003_0215e9a4(var0, var2, var3);
    if (var3 < 0) {
        var3 = 0;
        if (var4) var3 = var0->unknown_2_ - 1;
        arg1 = -1;
        arg2 = 0;
        if (var5 == -2) arg1 = 1;
    } else if (var0->unknown_2_ <= var3) {
        var3 = var0->unknown_2_ - 1;
        if (var4) var3 = 0;
        arg1 = -1;
        arg2 = 0;
        if (var5 == -2) arg1 = 1;
    }

    var5 = func_ov003_0215e9a4(var0, var2, var3);
    if (arg2 != 0) {
        if (var5 == -2) {
            while (var5 < 0) {
                var2++;
                if (var0->unknown_1_ <= var2) break;
                var5 = func_ov003_0215e9a4(var0, var2, var3);
            }
            while (var5 < 0) {
                var2--;
                if (var2 < 0) break;
                var5 = func_ov003_0215e9a4(var0, var2, var3);
            }
        } else {
            while (var5 < 0) {
                var2--;
                if (var2 < 0) break;
                var5 = func_ov003_0215e9a4(var0, var2, var3);
            }
            while (var5 < 0) {
                var2++;
                if (var0->unknown_1_ <= var2) break;
                var5 = func_ov003_0215e9a4(var0, var2, var3);
            }
        }
    }

    var4 = 0;
    while (var5 < 0) {
        if (arg1 < 0) {
            var2--;
            if (var2 < 0) var2 = var0->unknown_1_ - 1;
            var5 = func_ov003_0215e9a4(var0, var2, var3);
        } else if (arg1 > 0) {
            var2++;
            if (var0->unknown_1_ <= var2) var2 = var4;
            var5 = func_ov003_0215e9a4(var0, var2, var3);
        }
    }

    arg0->unknown_0_ = func_ov003_0215e824(arg0->unknown_4_, var5);
}

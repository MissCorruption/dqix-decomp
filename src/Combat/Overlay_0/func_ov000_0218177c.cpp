#include <globaldefs.h>

struct Struct_ov000_02160094 {
    char unknown_0_[0x20];
    short unknown_20_;
};
struct Struct_ov000_0215440c_2;
extern "C" Struct_ov000_02160094* func_ov000_02160094(Struct_ov000_0215440c_2* arg0, int arg1);

struct Struct_ov000_021600f8 {
    char unknown_0_[0xe];
    short unknown_e_;
};
struct Struct_ov000_0215440c;
extern "C" Struct_ov000_021600f8* func_ov000_021600f8(Struct_ov000_0215440c* arg0, int arg1);

extern "C" int func_ov000_0215e9fc(void* arg0, short* arg1, int arg2, int arg3);
extern "C" int func_ov000_0215ec1c(void* arg0, short* arg1, int arg2, int arg3);

static inline int inline_ov000_02156cc4_2(int arg0) {
    return arg0 >= 0 && arg0 <= 3;
}

static inline int inline_ov000_0218177c(int arg0) {
    return arg0 >= 0xc0 && arg0 <= 0xc7;
}

// USA: func_ov000_0218177c
extern "C" ARM int func_ov000_0218177c(void* arg0, void* arg1, int arg2, int arg3, int* arg4) {
    short var0[12];
    int var1;
    if (arg2) {
        Struct_ov000_02160094* var2 = func_ov000_02160094((Struct_ov000_0215440c_2*)arg1, 0);
        if (var2 == 0) {
            return 0;
        }
        var1 = var2->unknown_20_;
    } else {
        Struct_ov000_021600f8* var3 = func_ov000_021600f8((Struct_ov000_0215440c*)arg1, 0);
        if (var3 == 0) {
            return 0;
        }
        var1 = var3->unknown_e_;
    }
    int var4 = 0;
    if (arg3) {
        if (inline_ov000_02156cc4_2(var1)) {
            var4 = func_ov000_0215e9fc(arg0, var0, 12, 0);
        } else if (inline_ov000_0218177c(var1)) {
            var4 = func_ov000_0215ec1c(arg0, var0, 12, 0);
        }
    } else {
        if (inline_ov000_02156cc4_2(var1)) {
            var4 = func_ov000_0215ec1c(arg0, var0, 12, 0);
        } else if (inline_ov000_0218177c(var1)) {
            var4 = func_ov000_0215e9fc(arg0, var0, 12, 0);
        }
    }
    for (int var5 = 0; var5 < var4; var5++) {
        arg4[var5] = var0[var5];
    }
    return var4;
}

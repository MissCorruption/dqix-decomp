#include <globaldefs.h>

struct Struct_ov000_02160094 {
    char unknown_0_[0x1c];
    short unknown_1c_;
    char unknown_1e_[2];
    unsigned short unknown_20_;
};
struct Struct_ov000_0215440c_2;

struct Struct_ov025_021eaf48 {
    unsigned short unknown_0_;
    char unknown_2_[2];
    struct Struct_ov025_021eaf48* unknown_4_;
};

struct Struct_ov025_021eaf48_2 {
    char unknown_0_[8];
    struct Struct_ov025_021eaf48* unknown_8_;
    short unknown_c_;
};

extern "C" void* func_ov000_02160130(void);
extern "C" void* func_ov000_02160f20(void* arg0);
extern "C" struct Struct_ov000_02160094* func_ov000_02160094(struct Struct_ov000_0215440c_2* arg0, int arg1);
extern "C" int func_ov025_021ed380(char* arg0, int arg1, int arg2, int arg3, int arg4, short arg5, unsigned short arg6);
extern "C" void func_ov025_021ed5f0(char* arg0, int arg1, int arg2, int arg3);

// USA: func_ov025_021eaf48
extern "C" ARM void func_ov025_021eaf48(char* arg0, int arg1, int arg2, struct Struct_ov025_021eaf48_2* arg3) {
    struct Struct_ov000_02160094* var0 = func_ov000_02160094((struct Struct_ov000_0215440c_2*)func_ov000_02160f20(func_ov000_02160130()), arg1);
    if (var0 == 0) {
        return;
    }
    int var1 = var0->unknown_20_;
    if (arg3 == 0) {
        return;
    }
    short var2 = var1;
    if (arg2 == 3) {
        var2 = var0->unknown_1c_;
    }
    struct Struct_ov025_021eaf48* var3 = arg3->unknown_8_;
    while (var3 != 0) {
        int var4 = func_ov025_021ed380(arg0 + 0x1e8 + 0x400, var3->unknown_0_, var2, 3, (int)arg3, var1, 0);
        if (var3->unknown_0_ == 0x172) {
            func_ov025_021ed5f0(arg0 + 0x1e8 + 0x400, arg3->unknown_c_, 4, var4);
        }
        var3 = var3->unknown_4_;
    }
}

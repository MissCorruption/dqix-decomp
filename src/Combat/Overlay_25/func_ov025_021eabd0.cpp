#include <globaldefs.h>

extern "C" void* func_ov000_02160130();
extern "C" void* func_ov000_02160f20(void* arg0);
struct Struct_ov000_0215440c;
extern "C" void* func_ov000_021600f8(Struct_ov000_0215440c*, int);
extern "C" short func_ov000_0215ffa0(void* arg0);
extern "C" int func_ov025_021ed380(char* arg0, unsigned short arg1, short arg2, int arg3, int arg4, short arg5, unsigned short arg6);

extern unsigned int data_ov025_021ef9a4;

struct Struct_ov025_021eabd0 {
    char unknown_0_[9];
    unsigned char unknown_9_;
    char unknown_a_[2];
    unsigned char unknown_c_0_ : 1;
    unsigned char unknown_c_1_ : 1;
    unsigned char unknown_c_2_ : 1;
    unsigned char unknown_c_3_ : 1;
    unsigned char unknown_c_4_ : 1;
    char unknown_d_[0xd];
    unsigned short unknown_1a_;
    unsigned short unknown_1c_;
};

static inline int inline_ov000_02156cc4_2(short arg0) {
    return (arg0 >= 0 && arg0 <= 3) ? 1 : 0;
}

// USA: func_ov025_021eabd0
extern "C" ARM void func_ov025_021eabd0(char* arg0, int arg1) {
    Struct_ov025_021eabd0* var0 = (Struct_ov025_021eabd0*)func_ov000_02160f20(func_ov000_02160130());
    int var1 = -1;
    for (int var2 = 0; var2 < var0->unknown_9_; var2++) {
        void* var3 = func_ov000_021600f8((Struct_ov000_0215440c*)var0, var2);
        if (var3 == 0) continue;
        short var4 = func_ov000_0215ffa0(var3);
        if (arg1 != 0) {
            if (inline_ov000_02156cc4_2(var4) != 0) {
                var1 = var4;
                break;
            }
        } else {
            if (inline_ov000_02156cc4_2(var4) == 0) {
                var1 = var4;
                break;
            }
        }
    }
    int var5 = 0;
    if (arg1 != 0 && (var0->unknown_c_0_ || var0->unknown_c_1_)) {
        var5 = 5;
    } else if (arg1 == 0 && (var0->unknown_c_3_ || var0->unknown_c_4_)) {
        var5 = 5;
    }
    int var6 = (var1 >= 0 && var1 <= 3) ? 1 : 0;
    int var7 = var6 != 0 ? var0->unknown_1a_ : var0->unknown_1c_;
    func_ov025_021ed380(arg0 + 0x5e8, var7, var1, var5, 0, -1, 0);
    arg0[0x5cc] = 1;
    if (arg1 != 0) {
        data_ov025_021ef9a4 |= 0x800;
    } else {
        data_ov025_021ef9a4 |= 0x4000;
    }
}

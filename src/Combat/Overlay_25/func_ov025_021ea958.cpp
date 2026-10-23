#include <globaldefs.h>

struct Struct_ov000_021600f8 {
    char unknown_0_[0x14];
    unsigned char unknown_14_[3];
    unsigned char unknown_17_;
};
struct Struct_ov000_0215440c {
    char unknown_0_[6];
    short unknown_6_;
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    char unknown_a_[2];
    unsigned char unknown_c_0_ : 1;
    unsigned char unknown_c_1_ : 1;
    unsigned char unknown_c_2_ : 1;
    unsigned char unknown_c_3_ : 1;
    unsigned char unknown_c_4_ : 1;
    unsigned char unknown_c_5_ : 3;
    char unknown_d_[0x1a-0xd];
    unsigned short unknown_1a_;
    unsigned short unknown_1c_;
};
struct Struct_ov025_021ea604_3 {
    char unknown_0_[0x5cc];
    unsigned char unknown_5cc_;
    char unknown_5cd_[3];
    unsigned char unknown_5d0_;
    unsigned char unknown_5d1_;
    char unknown_5d2_[0x5e8-0x5d2];
    unsigned char unknown_5e8_[1];
};
extern "C" void* func_ov000_02160130();
extern "C" Struct_ov000_0215440c* func_ov000_02160f20(void*);
extern "C" Struct_ov000_021600f8* func_ov000_021600f8(Struct_ov000_0215440c*, int);
extern "C" short func_ov000_0215ffa0(Struct_ov000_021600f8*);
extern "C" void func_ov025_021ed380(void*, unsigned short, short, int, int, int, int);
extern "C" void func_ov025_021ead5c(Struct_ov025_021ea604_3*, int);
extern unsigned int data_ov025_021ef9a4;

inline int inline_ov025_021dfce0_2(int arg0) { return arg0 >= 0 && arg0 <= 3; }

// USA: func_ov025_021ea958
extern "C" ARM void func_ov025_021ea958(Struct_ov025_021ea604_3* arg0, int arg1, int arg2, int arg3) {
    if (arg1 && (data_ov025_021ef9a4 & 0x800)) return;
    if (!arg1 && (data_ov025_021ef9a4 & 0x4000)) return;
    Struct_ov000_0215440c* var0 = func_ov000_02160f20(func_ov000_02160130());
    if (arg0->unknown_5d0_ && !arg0->unknown_5d1_) return;
    if (arg1 && (var0->unknown_c_0_ || var0->unknown_c_1_)) arg3 = -2;
    else if (!arg1 && (var0->unknown_c_3_ || var0->unknown_c_4_)) arg3 = -2;
    for (int var1 = 0; var1 < var0->unknown_9_; var1++) {
        Struct_ov000_021600f8* var2 = func_ov000_021600f8(var0, var1);
        if (var2) {
            for (int var3 = 1; var3 < var2->unknown_17_; var3++) {
                if (var2->unknown_14_[var3] == 1 || var2->unknown_14_[var3] == 2) return;
            }
        }
    }
    int var4 = 0;
    if (arg3 == -2) var4 = 1;
    if (arg3 < 0) {
        for (int var5 = 0; var5 < var0->unknown_9_; var5++) {
            Struct_ov000_021600f8* var6 = func_ov000_021600f8(var0, var5);
            if (var6) {
                int var7 = func_ov000_0215ffa0(var6);
                if (arg1) {
                    if (inline_ov025_021dfce0_2(var7)) { arg3 = var7; break; }
                } else if (!inline_ov025_021dfce0_2(var7)) { arg3 = var7; break; }
            }
        }
    }
    int var8 = inline_ov025_021dfce0_2(arg3) ? var0->unknown_1a_ : var0->unknown_1c_;
    if ((var8 == 0xf1 || var8 == 0xf2) && var0->unknown_6_ != arg3) return;
    int var9 = 0;
    if (var4) var9 = 5;
    func_ov025_021ed380(arg0->unknown_5e8_, var8, arg3, var9, 0, -1, 0);
    arg0->unknown_5cc_ = 1;
    if (arg2) func_ov025_021ead5c(arg0, arg1);
    if (arg1) data_ov025_021ef9a4 |= 0x800;
    else data_ov025_021ef9a4 |= 0x4000;
}

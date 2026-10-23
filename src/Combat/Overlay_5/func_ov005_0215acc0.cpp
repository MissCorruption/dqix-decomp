#if defined(jpn)
#define R(j,u) (j)
#define func_02045f3c func_02046c78
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include <Resource/GameResources.h>

struct Struct_0201099c_10;
struct Struct_0201099c_23 { short unknown_0_[3]; };
struct Struct_0201730c_4 { short unknown_0_; signed char unknown_2_; char unknown_3_[9]; int unknown_c_; int unknown_10_; char unknown_14_[8]; };
struct Struct_ov005_0215acc0 { char unknown_0_[0xdf4]; Struct_0201099c_10* unknown_df4_; char unknown_df8_[R(0x1f10,0x1f98)]; Struct_0201730c_4 unknown_2d90_[24]; char unknown_3030_[0xddc]; Struct_0201099c_23 unknown_3e0c_[20]; };
struct Struct_ov005_0215acc0_2 { char unknown_0_[R(0x4f8,0x4fc)]; int unknown_4fc_; };
extern "C" void* func_020421a0();
extern "C" void* func_020dedd0(Struct_0201099c_10*, int);
extern "C" Struct_ov005_0215acc0_2* func_ov017_021a193c(int*);
extern "C" int func_020dd4c4(signed char, void*);
#if defined(jpn)
extern "C" void func_02045f3c(void*, Struct_0201099c_23*, int, int, int, int, int, int);
#else
extern "C" void func_02045f3c(void*, Struct_0201099c_23*, int, int, int, int, int, int, int, int);
#endif
#define REG_GEOMETRY ((volatile unsigned int*)0x04000444)

// USA: func_ov005_0215acc0
extern "C" ARM void func_ov005_0215acc0(Struct_ov005_0215acc0* arg0) {
    void* var0 = func_020421a0();
    int var1;
    int var2;
    for (int var3 = 8; var3 < 24; var3++) {
        Struct_0201730c_4* var4 = &arg0->unknown_2d90_[var3];
        int var5 = var4->unknown_0_;
        if (var5 >= 0) {
            int var6 = var4->unknown_2_;
            var2 = var4->unknown_c_ >> 12;
            var1 = var4->unknown_10_ >> 12;
            int var7 = var4->unknown_2_ / 10;
            int var8 = var6 % 10;
            int var9 = 0x7fff;
            if (var4->unknown_0_ > 0) {
                void* var10 = func_020dedd0(arg0->unknown_df4_, (short)var5);
                if (var10 && func_020dd4c4((signed char)func_ov017_021a193c((int*)GetGameResources()->unknown_ptr_array_36fc[3])->unknown_4fc_, var10)) var9 = 0x1ce7;
            }
            REG_GEOMETRY[0] = 0;
            REG_GEOMETRY[0x2f] = 1;
            REG_GEOMETRY[11] = 0;
            REG_GEOMETRY[11] = 0;
            REG_GEOMETRY[11] = 0xffc01000;
#if defined(jpn)
            if (var7) func_02045f3c(var0, &arg0->unknown_3e0c_[var7 + 10], var2 + 11, var1 + 16, var9, 8, 0, 0);
#else
            if (var7) func_02045f3c(var0, &arg0->unknown_3e0c_[var7 + 10], var2 + 11, var1 + 12, var9, 8, 0, 0, 0, 17);
#endif
#if defined(jpn)
            func_02045f3c(var0, &arg0->unknown_3e0c_[var8 + 10], var2 + 17, var1 + 16, var9, 8, 0, 0);
#else
            func_02045f3c(var0, &arg0->unknown_3e0c_[var8 + 10], var2 + 17, var1 + 12, var9, 8, 0, 0, 0, 17);
#endif
            REG_GEOMETRY[0x30] = 0;
            REG_GEOMETRY[1] = 1;
        }
    }
}

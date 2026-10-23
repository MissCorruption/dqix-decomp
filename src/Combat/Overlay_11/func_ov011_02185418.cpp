#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov011_02184c30 {
    int unknown_0_;
    union { int unknown_0_; float unknown1_0_; } unknown_4_;
};

struct Struct_ov011_02185418 {
    Struct_ov011_02184c30 unknown_0_;
    Struct_ov011_02184c30 unknown_8_;
    Struct_ov011_02184c30 unknown_10_;
    Struct_ov011_02184c30 unknown_18_;
    Struct_ov011_02184c30 unknown_20_;
    Struct_ov011_02184c30 unknown_28_;
    Struct_ov011_02184c30 unknown_30_;
    Struct_ov011_02184c30 unknown_38_;
    Struct_ov011_02184c30 unknown_40_;
};

extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);
extern "C" ARM void* func_ov017_021b2164(void);
extern "C" ARM void* func_ov011_021849c8(void* arg0);
extern "C" ARM void* func_ov023_021f6880(void* arg0, int arg1);
extern "C" ARM int func_ov023_021f6f10(void* arg0);
extern "C" ARM void func_ov023_021f7eb8(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9);

struct Struct_ov004_0216b7bc { char unknown_0_[0x1c8]; int unknown_1c8_; };
extern "C" ARM void func_ov011_02184ad8(struct Struct_ov004_0216b7bc* arg0);

// USA: func_ov011_02185418
extern "C" ARM int func_ov011_02185418(struct Struct_ov011_02185418* arg0) {
    int var0;
    int var1 = func_ov011_02184c30(&arg0->unknown_0_);
    var0 = func_ov011_02184c30(&arg0->unknown_8_);
    short var2 = (short)func_ov011_02184c30(&arg0->unknown_10_);
    short var3 = (short)func_ov011_02184c30(&arg0->unknown_18_);
    short var4 = (short)func_ov011_02184c30(&arg0->unknown_20_);
    short var5 = (short)func_ov011_02184c30(&arg0->unknown_28_);
    unsigned char var6 = (unsigned char)func_ov011_02184c30(&arg0->unknown_30_);
    unsigned char var7 = (unsigned char)func_ov011_02184c30(&arg0->unknown_38_);
    int var8 = func_ov011_02184c30(&arg0->unknown_40_) != 0;

    void* var9 = func_ov017_021b2164();
    void* var10 = func_ov011_021849c8(var9);
    void* var11 = func_ov023_021f6880(var10, var1);
    if (var11 == 0) return 0;

    if (func_ov023_021f6f10(var11) != 6) return 0;

    func_ov023_021f7eb8(var11, var9, var0, var2, var3, var4, var5, var6, var7, var8);
    func_ov011_02184ad8((struct Struct_ov004_0216b7bc*)var9);
    return 1;
}

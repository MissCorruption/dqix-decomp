#if defined(jpn)
#define func_0204f7e8 func_02050cc0
#endif
#include <globaldefs.h>
#include <NitroSDK/Cache.h>
#include <std_library_functions.h>

struct Struct_02050100 {
    char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
};
struct Struct_02050100_2 {
    int unknown_0_;
    Struct_02050100* unknown_4_;
    char* unknown_8_;
    char unknown_c_[0xa0 - 0xc];
    int unknown_a0_;
    int unknown_a4_;
    short unknown_a8_, unknown_aa_;
    char unknown_ac_[0xc5 - 0xac];
    unsigned char unknown_c5_;
    char unknown_c6_[0xd8 - 0xc6];
    unsigned char unknown_d8_0_ : 1;
    unsigned char unknown_d8_1_ : 1;
    unsigned char unknown_d8_2_ : 6;
    unsigned char unknown_d9_;
    unsigned char unknown_da_;
};
struct Struct_02050100_3 { int unknown_0_; signed char unknown_4_; };
extern "C" Struct_02050100_3* func_0204254c(int, int);
extern char data_020e7bda[];
extern "C" char* func_02050064(Struct_02050100_2*);
extern "C" void func_0204f41c(Struct_02050100_2*, short, short, char*, int, int, short*, short*, int);
extern "C" void func_0204f914(Struct_02050100_2*, int, short, short, short, short);
extern "C" void func_0204f7e8(Struct_02050100_2*, short, short, int, unsigned char, unsigned char, short*, short*, unsigned char, unsigned char, unsigned char, unsigned char);
typedef void (*Type_02050100)(void*, int, unsigned int);
extern "C" Type_02050100 func_0204a5e4(int, int);
#if defined(jpn)
extern char data_020f0336[];
extern "C" void func_02050678(Struct_02050100_2*, short, short, char*, int, int, short*, short*);
#endif

// USA: func_02050100
extern "C" ARM void func_02050100(Struct_02050100_2* arg0, int arg1) {
#if defined(jpn)
    unsigned char var0;
#endif
    if (!arg0->unknown_d8_0_) return;
    if (!arg0->unknown_d8_1_ && arg1) return;
    if (!arg0->unknown_4_ || !arg0->unknown_8_) return;
    int var1 = arg0->unknown_4_->unknown_1c_0_;
    int var2 = arg0->unknown_4_->unknown_1c_4_;
    if (arg1) {
        char* var3 = func_02050064(arg0);
        if (!var3) return;
        if (var3) memcpy(arg0->unknown_8_, var3 + arg0->unknown_a0_, arg0->unknown_a4_);
    }
#if defined(jpn)
    short var4 = (short)((short)(arg0->unknown_aa_ << 3) - 12);
    short var5 = (short)((short)(arg0->unknown_a8_ << 3) / 2);
    if (arg0->unknown_c5_ & 0x10) var4 -= 3;
    short var6 = 0, var7 = 0;
    short var8;
    signed char var9 = (signed char)arg0->unknown_da_;
    int var10 = 2;
    while (var9 != 0) { var9 = (signed char)(var9 + 1) / 10; }
    if (var9 > 2) var10 = var9;
    var0 = 1;
    if (arg0->unknown_c5_ & 4) var0 = 0;
    var8 = var5 - 8 - var10 * 8;
    int var11 = var4 + 8;
    func_0204f914(arg0, var0, var8, var4, var8 + var10 * 8 + 1, var11);
    unsigned char var12 = var10;
    func_0204f7e8(arg0, var8, var4, arg0->unknown_d9_ + 1, 8, 15, &var6, &var7, 1, var12, 0, 0);
    var8 = var5 + 8;
    func_0204f914(arg0, var0, var8, var4, var8 + var10 * 8 + 1, var11);
    func_0204f7e8(arg0, var8, var4, arg0->unknown_da_, 8, 15, &var6, &var7, 0, var12, 0, 0);
    func_02050678(arg0, var5 - 4, var4, data_020f0336, 8, 15, &var6, &var7);
#else
    short var13 = (short)((short)(arg0->unknown_aa_ << 3) - 13);
    short var14 = (short)((short)(arg0->unknown_a8_ << 3) / 2);
    if (arg0->unknown_c5_ & 0x10) var13 -= 3;
    short var15 = 0, var16 = 0;
    short var17;
    int var18;
    int var19;
    signed char var20 = (signed char)arg0->unknown_da_;
    int var21 = 2;
    while (var20 != 0) { var20 = (signed char)(var20 + 1) / 10; }
    if (var20 > 2) var21 = var20;
    var18 = 1;
    if (arg0->unknown_c5_ & 4) var18 = 0;
    var19 = 0;
    Struct_02050100_3* var22 = func_0204254c((int)data_020e7bda, var19);
    if (var22) var19 = var22->unknown_4_;
    short var23 = var14 - (var19 >> 1);
    func_0204f41c(arg0, var23, var13, data_020e7bda, 8, 15, &var15, &var16, 0);
    var17 = var14 - var19;
    int var24 = var13 + 9;
    func_0204f914(arg0, var18, var17 - 14, var13, var17, var24);
    unsigned char var25 = var21;
    func_0204f7e8(arg0, var17, var13, arg0->unknown_d9_ + 1, 8, 15, &var15, &var16, 1, var25, 0, 0);
    short var26 = var14 + var19;
    func_0204f914(arg0, var18, var26, var13, var26 + 14, var24);
    func_0204f7e8(arg0, var26 + 1, var13, arg0->unknown_da_, 8, 15, &var15, &var16, 0, var25, 0, 0);
#endif
    if (arg1) {
        Type_02050100 var27 = func_0204a5e4(var1, var2);
        CleanInvalidateCacheRange(arg0->unknown_8_, arg0->unknown_a4_);
        var27(arg0->unknown_8_, arg0->unknown_a0_, arg0->unknown_a4_);
    }
    arg0->unknown_d8_1_ = 0;
}

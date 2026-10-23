#include <globaldefs.h>

struct Struct_020beeac_2;
struct Struct_020beed8;
struct Struct_020bc180_2;
struct Struct_020bcc4c;
struct Struct_020bc9d0_2;

struct Struct_020beed8_2 {
    unsigned int unknown_0_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
};

struct Struct_020beed8_3;
typedef int (*Type_020bc180)(Struct_020beed8_3* player, unsigned int fileId);
typedef void (*Type_020bc180_2)(Struct_020beed8_3* player);

struct Struct_020beed8_3 {
    char unknown_0_[0xa8];
    char unknown_a8_[0x18];
    unsigned char unknown_c0_;
    unsigned char unknown_c1_;
    unsigned char unknown_c2_;
    unsigned char unknown_c3_;
    unsigned short unknown_c4_;
    unsigned short unknown_c6_;
    char unknown_c8_[0xe8 - 0xc8];
    char unknown_e8_[0x10];
    char unknown_f8_[0x18];
    int unknown_110_0_ : 1;
    int unknown_110_1_ : 1;
    int unknown_110_2_ : 1;
    int unknown_110_3_ : 1;
    int unknown_110_4_ : 1;
    int unknown_110_5_ : 1;
    int unknown_110_6_ : 1;
    int unknown_114_;
    int unknown_118_;
    int unknown_11c_;
    int unknown_120_;
    unsigned char unknown_124_;
    unsigned char unknown_125_;
    unsigned char unknown_126_[6];
    void* unknown_12c_;
    unsigned int unknown_130_;
    void* unknown_134_;
    void* unknown_138_;
    void* unknown_13c_;
    void* unknown_140_;
    int unknown_144_;
    int unknown_148_;
    void* unknown_14c_;
    int unknown_150_;
    int unknown_154_;
    int unknown_158_;
    int unknown_15c_;
    unsigned int unknown_160_;
    Type_020bc180 unknown_164_;
    Type_020bc180_2 unknown_168_;
    void* unknown_16c_;
    void* unknown_170_;
};

extern "C" void* func_020bee20(void** arg0, int arg1, int arg2);
extern "C" void func_020bffc4(void* arg0, unsigned int arg1);
extern "C" void func_020beeac(struct Struct_020beeac_2* arg0);
extern "C" void func_020c01ec(struct Struct_020beed8* arg0);
extern "C" void func_020c0204(struct Struct_020bc180_2* arg0, int arg1, int arg2);
extern "C" int func_020bf29c(void* arg0, int arg1, int arg2);
extern "C" void func_020bf2d4(void* arg0);
extern "C" void func_020bcc4c(struct Struct_020bcc4c* arg0, int arg1, int arg2);
extern "C" int func_020bc9d0(Struct_020bc9d0_2* arg0, int arg1, void* arg2, unsigned long arg3,
                             int arg4, int arg5, void* arg6, void* arg7);
extern "C" void func_020bf520(int arg0, int arg1, void* arg2[], unsigned int arg3, int arg4, void* arg5);

// USA: func_020beed8
extern "C" ARM int func_020beed8(void** arg0, const Struct_020beed8_2* arg1, int arg2, int arg3,
                                 int arg4, unsigned int arg5, void* arg6, void* arg7,
                                 void* arg8, void* arg9) {
    Struct_020beed8_3* var0;
    int var1;
    int var2;
    unsigned long long var3;
    int var4;

    var0 = (Struct_020beed8_3*)func_020bee20(arg0, arg2, arg3);
    if (var0 == NULL)
        return 0;

    func_020bffc4(var0, arg1->unknown_0_);

    if (!var0->unknown_164_(var0, arg1->unknown_0_)) {
        func_020beeac((struct Struct_020beeac_2*)var0);
        return 0;
    }

    var3 = var0->unknown_c4_;
    var3 *= arg5;
    var3 /= 1000;
    var0->unknown_160_ = (unsigned int)var3;

    if (var0->unknown_160_ != 0 && var0->unknown_c0_ == 2) {
        var0->unknown_110_4_ = 1;
    } else {
        var0->unknown_110_4_ = 0;
    }

    var0->unknown_114_ = 4;
    var0->unknown_110_5_ = 0;
    var0->unknown_110_1_ = 0;
    var0->unknown_118_ = 0;
    var0->unknown_110_2_ = 0;
    var0->unknown_110_3_ = 0;
    var0->unknown_11c_ = 0;

    var0->unknown_134_ = arg6;
    var0->unknown_138_ = arg7;
    var0->unknown_13c_ = arg8;
    var0->unknown_140_ = arg9;

    var0->unknown_144_ = arg4;

    var0->unknown_15c_ = 0;
    var0->unknown_154_ = arg1->unknown_4_;
    var0->unknown_158_ = 127;

    func_020c01ec((struct Struct_020beed8*)var0->unknown_e8_);
    func_020c0204((struct Struct_020bc180_2*)var0->unknown_e8_, 127 << 8, 1);

    switch (var0->unknown_c0_) {
    case 0:
        var1 = 0;
        break;
    case 1:
    case 2:
        var1 = 1;
        break;
    }

    var2 = var0->unknown_c2_;
    if (arg1->unknown_7_ & 1) {
        var2 = 2;
    }
    if (var2 > var0->unknown_124_) {
        var2 = var0->unknown_124_;
    }
    var0->unknown_110_6_ = (var2 == 1) ? 1 : 0;

    var4 = func_020bf29c(var0, var2, (int)var0->unknown_126_);
    if (!var4) {
        var0->unknown_168_(var0);
        func_020beeac((struct Struct_020beeac_2*)var0);
        return 0;
    }

    var4 = func_020bc9d0((Struct_020bc9d0_2*)var0->unknown_0_, var1, var0->unknown_12c_,
                        var0->unknown_130_ * var2 / var0->unknown_124_, var0->unknown_c6_, 4,
                        (void*)func_020bf520, var0);
    if (!var4) {
        func_020bf2d4(var0);
        var0->unknown_168_(var0);
        func_020beeac((struct Struct_020beeac_2*)var0);
        return 0;
    }

    if (var2 == 2) {
        struct Struct_020bcc4c* var5 = (struct Struct_020bcc4c*)var0->unknown_0_;
        func_020bcc4c(var5, 0, 0);
        func_020bcc4c(var5, 1, 127);
    }

    return 1;
}

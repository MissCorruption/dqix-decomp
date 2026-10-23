#include <globaldefs.h>
#include <NitroSDK/Memory.h>
#include <NitroSDK/Mutex.h>
#include <NitroSDK/Cache.h>

struct Struct_020bf658_2;
extern "C" void func_020bf658(struct Struct_020bf658_2* arg0);

struct Struct_020bf79c {
    struct {
        short unknown_0_;
        unsigned char unknown_2_;
        unsigned char unknown_3_;
    };
};

struct Struct_020bf79c_3;
typedef int (*Type_01ff8b48_2)(Struct_020bf79c_3* player, void* dest, unsigned int size, unsigned int offset);
enum Enum_020bf79c { Enum_020bf79c_0, Enum_020bf79c_1 };
typedef void (*Type_01ff8b48_3)(int status, int numChannels, void* buffer[], unsigned int len,
                                     Enum_020bf79c format, void* arg);

struct Struct_020bf79c_3 {
    char unknown_0_[0xa8];
    char unknown_a8_[0x18];
    unsigned char unknown_c0_;
    unsigned char unknown_c1_;
    unsigned char unknown_c2_;
    unsigned char unknown_c3_;
    unsigned short unknown_c4_;
    unsigned short unknown_c6_;
    unsigned int unknown_c8_;
    unsigned int unknown_cc_;
    unsigned int unknown_d0_;
    unsigned int unknown_d4_;
    unsigned int unknown_d8_;
    unsigned int unknown_dc_;
    unsigned int unknown_e0_;
    unsigned int unknown_e4_;
    char unknown_e8_[0x10];
    Struct_020bf79c unknown_f8_[6];
    int unknown_110_0_ : 1;
    int unknown_110_1_ : 1;
    int unknown_110_2_ : 1;
    int unknown_110_3_ : 1;
    int unknown_110_4_ : 1;
    int unknown_110_5_ : 1;
    int unknown_110_6_ : 1;
    volatile int unknown_114_;
    volatile int unknown_118_;
    volatile int unknown_11c_;
    int unknown_120_;
    unsigned char unknown_124_;
    unsigned char unknown_125_;
    unsigned char unknown_126_[6];
    void* unknown_12c_;
    unsigned int unknown_130_;
    Type_01ff8b48_3 unknown_134_;
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
    void* unknown_164_;
    void* unknown_168_;
    Type_01ff8b48_2 unknown_16c_;
    void* unknown_170_;
};

struct Struct_020bf79c_2 {
    void* unknown_0_[2];
    Struct_020bf79c_3* unknown_8_;
    int unknown_c_;
    int unknown_10_;
    void* unknown_14_[6];
    unsigned int unknown_2c_;
};

struct Struct_021103b0_6 {
    int unknown_0_;
    unsigned char* unknown_4_;
    unsigned char* unknown_8_;
};

extern const signed char data_020e9338[16];
extern const short data_020e9348[89];
extern struct Struct_021103b0_6 data_021103b0;
extern Mutex data_021103c8;

static inline short inline_020bf79c(int arg0, Struct_020bf79c* arg1) {
    int var0;
    int var1;
    int var2;
    int var3;

    var1 = arg1->unknown_0_;
    var2 = arg1->unknown_2_;

    var0 = data_020e9348[var2];

    var3 = var0 >> 3;
    if (arg0 & 4) var3 += var0;
    if (arg0 & 2) var3 += var0 >> 1;
    if (arg0 & 1) var3 += var0 >> 2;

    if (arg0 & 8) {
        var1 -= var3;
        if (var1 < -32768) var1 = -32768;
    } else {
        var1 += var3;
        if (var1 > 32767) var1 = 32767;
    }

    var2 += data_020e9338[arg0];

    if (var2 < 0) var2 = 0;
    else if (var2 > 89 - 1) var2 = 89 - 1;

    arg1->unknown_0_ = (short)var1;
    arg1->unknown_2_ = (unsigned char)var2;

    return (short)var1;
}

// USA: func_020bf79c
extern "C" ARM void func_020bf79c(Struct_020bf79c_2* arg0) {
    Struct_020bf79c_3* var0 = arg0->unknown_8_;
    int var1;
    long var2;
    unsigned int var3;
    unsigned int var4;
    unsigned int var5;
    unsigned int var6;
    unsigned int var7;
    unsigned int var8;
    unsigned int var9;
    unsigned int var10;
    unsigned int var11;
    unsigned int var12;
    int var13;

    if (var0->unknown_110_5_ && var0->unknown_114_ > 0) {
        var0->unknown_114_--;
    }

    var2 = 0;

    var3 = arg0->unknown_2c_;
    while (var3 > 0) {
        if (var0->unknown_110_5_) {
            for (var13 = 0; var13 < arg0->unknown_10_; var13++) {
                VectorizedMemset((unsigned char*)(arg0->unknown_14_[var13]) + var2, 0, var3);
            }
            break;
        }

        var4 = var0->unknown_160_ / var0->unknown_dc_;

        if (var4 < var0->unknown_d4_ - 1) {
            var5 = var0->unknown_d8_;
            var6 = var0->unknown_dc_;
        } else {
            var5 = var0->unknown_e0_;
            var6 = var0->unknown_e4_;
        }

        var7 = var0->unknown_160_;
        var7 -= var4 * var0->unknown_dc_;

        var10 = var3;
        if (var0->unknown_c0_ != 0) {
            var10 >>= 1;
        }

        if (var0->unknown_110_4_) {
            if (var7 == 0) {
                var0->unknown_110_4_ = 0;
            } else {
                var10 = var7;
                var7 = 0;
            }
        }

        var1 = 0;
        if (var7 + var10 >= var6) {
            var10 = var6 - var7;

            if (var4 >= var0->unknown_d4_ - 1) {
                if (var0->unknown_c1_) {
                    var1 = 1;
                } else {
                    var0->unknown_110_5_ = 1;
                }
            }
        }

        var8 = var7;
        var11 = var10;
        switch (var0->unknown_c0_) {
        case 0:
            var12 = var11;
            break;
        case 1:
            var8 <<= 1;
            var11 <<= 1;
            var12 = var11;
            break;
        case 2: {
            unsigned int var14 = var7 + var10;
            var8 >>= 1;
            var14++;
            var14 >>= 1;
            var12 = var14 - var8;
            if (var7 == 0) {
                var12 += sizeof(Struct_020bf79c);
            } else {
                var8 += sizeof(Struct_020bf79c);
            }
            var11 <<= 1;
            break;
        }
        }

        var9 = var8;
        var9 += var4 * var0->unknown_d8_ * var0->unknown_c2_;
        var9 += var0->unknown_d0_;

        for (var13 = 0; var13 < arg0->unknown_10_; var13++) {
            void* var15;
            void* var16;

            var15 = var16 = (unsigned char*)(arg0->unknown_14_[var13]) + var2;

            if (var13 < var0->unknown_c2_) {
                int var17;

                if (var0->unknown_c0_ == 2) {
                    LockMutex(&data_021103c8);
                    var16 = data_021103b0.unknown_8_;
                }

                var17 = var0->unknown_16c_(var0, var16, var12, var9 + var13 * var5);

                if (var17 != var12) {
                    var11 = 0;
                    var10 = 0;
                    var1 = 0;
                    var0->unknown_110_5_ = 1;
                    if (var0->unknown_c0_ == 2) {
                        UnlockMutex(&data_021103c8);
                    }
                    break;
                }

                if (var0->unknown_c0_ == 2) {
                    Struct_020bf79c* var18 = &var0->unknown_f8_[var13];
                    unsigned char* var19 = data_021103b0.unknown_8_;
                    short* var20 = (short*)var15;
                    unsigned int var21;
                    unsigned int var22;

                    if (var7 == 0) {
                        *var18 = *((Struct_020bf79c*)var19)++;
                    }

                    var22 = var7 + var10;

                    var21 = var7;
                    if (var21 & 0x01) {
                        *var20++ = inline_020bf79c((*var19 >> 4) & 0x0f, var18);
                        var21++;
                        var19++;
                    }
                    while (var21 < (var22 & ~0x01)) {
                        *var20++ = inline_020bf79c(*var19 & 0x0f, var18);
                        var21++;
                        *var20++ = inline_020bf79c((*var19 >> 4) & 0x0f, var18);
                        var21++;
                        var19++;
                    }
                    if (var21 < var22) {
                        *var20++ = inline_020bf79c(*var19 & 0x0f, var18);
                        var21++;
                    }
                    UnlockMutex(&data_021103c8);
                }
            } else {
                if (var0->unknown_110_6_) {
                    VectorizedMemset(var15, 0, var11);
                } else {
                    VectorizedInvertedMemcpy((unsigned char*)(arg0->unknown_14_[0]) + var2, var15, var11);
                }
            }
        }

        if (var0->unknown_110_4_) {
            var0->unknown_110_4_ = 0;
            continue;
        }

        if (var1) {
            var0->unknown_160_ = var0->unknown_c8_;
        } else {
            var0->unknown_160_ += var10;
        }

        var2 += var11;

        var3 -= var11;

        if (var0->unknown_110_5_ && var0->unknown_13c_) {
            func_020bf658((struct Struct_020bf658_2*)var0);
        }
    }

    if (var0->unknown_134_ != NULL) {
        var0->unknown_134_(arg0->unknown_c_, arg0->unknown_10_, arg0->unknown_14_, arg0->unknown_2c_,
                             var0->unknown_c0_ == 0 ? Enum_020bf79c_0 : Enum_020bf79c_1,
                             var0->unknown_138_);
    }

    for (var13 = 0; var13 < arg0->unknown_10_; var13++) {
        CleanInvalidateCacheRange(arg0->unknown_14_[var13], arg0->unknown_2c_);
    }

    if (arg0->unknown_c_ == 0) {
        var0->unknown_118_ = 1;
    }
}

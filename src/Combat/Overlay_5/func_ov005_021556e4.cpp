#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include <Filesystem/FileIO.h>
#include <std_library_functions.h>

struct Struct_0201099c_10;
struct Struct_02015ef4_4;
struct Struct_0201099c_3;
struct Struct_0203a46c;
struct Struct_ov005_021556e4_2;

struct Struct_ov005_021556e4 {
    void* unknown_0_;
    int unknown_4_;
    unsigned int unknown_8_;
    unsigned int unknown_c_;
    unsigned int unknown_10_0_ : 20;
    unsigned int unknown_12_4_ : 8;
    unsigned int unknown_13_4_ : 4;
};

extern "C" void __clear(void* arg0, unsigned long arg1);
extern "C" Struct_ov005_021556e4* func_020dedd0(Struct_0201099c_10* arg0, int arg1);
extern "C" int func_020de234(Struct_02015ef4_4* arg0, int arg1);
extern "C" const char* func_020e0434(Struct_0201099c_3* arg0, int arg1);
extern "C" void func_0203a46c(Struct_0203a46c* arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov005_02155d38(Struct_ov005_021556e4_2* arg0);

struct Struct_ov005_02153ba4 {
    short unknown_0_;
    signed char unknown_2_;
    unsigned char unknown_3_;
    void* unknown_4_;
    void* unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    short unknown_18_;
};

struct Struct_ov005_02153954 {
    char unknown_0_[0xdf4];
    Struct_0201099c_10* unknown_df4_;
    char unknown_df8_[R(0x2d08, 0x2d90) - 0xdf8];
    Struct_ov005_02153ba4 unknown_2d90_[24];
    char unknown_3030_[0x3cf0 - 0x3030];
    char unknown_3cf0_[0x88];
    short unknown_3d78_;
    char unknown_3d7a_[0x3d88 - 0x3d7a];
    char* unknown_3d88_;
    char* unknown_3d8c_;
    char* unknown_3d90_;
    char* unknown_3d94_;
    short unknown_3d98_[8];
    unsigned char unknown_3da8_;
    unsigned char unknown_3da9_;
    unsigned char unknown_3daa_;
    unsigned char unknown_3dab_;
    unsigned short unknown_3dac_;
    unsigned short unknown_3dae_;
    unsigned short unknown_3db0_;
    unsigned short unknown_3db2_;
    unsigned short unknown_3db4_;
    char unknown_3db6_;
    unsigned char unknown_3db7_;
    char unknown_3db8_[0x3dcc - 0x3db8];
    unsigned int unknown_3dcc_;
};

extern "C" void func_ov005_021553b4(Struct_ov005_02153954* arg0, int arg1, int* arg2, int* arg3);

// USA: func_ov005_021556e4
extern "C" ARM void func_ov005_021556e4(Struct_ov005_02153954* arg0) {
    if (arg0->unknown_3dcc_ & 0x80) {
        if (arg0->unknown_3dab_ == 0) {
            memset(arg0->unknown_3d8c_, 0, 0x200);
            Struct_ov005_02153ba4* var0 = &arg0->unknown_2d90_[arg0->unknown_3d78_];
            var0->unknown_14_ = -1;
            Struct_ov005_021556e4* var1 = func_020dedd0(arg0->unknown_df4_, var0->unknown_0_);
            if (var1 != NULL) {
                char var2[0x80];
                __clear(var2, sizeof(var2));
                int var3 = func_020de234((Struct_02015ef4_4*)var1, 0);
                sprintf(var2, func_020e0434((Struct_0201099c_3*)arg0->unknown_df8_, 0x7d1), (char)var1->unknown_12_4_, var3);
                if (LoadFileIntoMemory(var2, arg0->unknown_3d8c_, NULL))
                    var0->unknown_14_ = 0;
                int var4;
                int var5;
                func_ov005_021553b4(arg0, arg0->unknown_3d78_, &var4, &var5);
                func_0203a46c((Struct_0203a46c*)arg0->unknown_3cf0_, var4 << 12, var5 << 12, 0x2000);
                arg0->unknown_3dab_++;
                arg0->unknown_3db7_++;
            }
            arg0->unknown_3dcc_ &= ~0x80;
        }
    } else if (arg0->unknown_3dcc_ & 0x10) {
        if (arg0->unknown_3da8_ == 0) {
            memset(arg0->unknown_3d94_, 0, 0x200);
            Struct_ov005_02153ba4* var6 = &arg0->unknown_2d90_[arg0->unknown_3dac_];
            var6->unknown_14_ = -1;
            Struct_ov005_021556e4* var7 = func_020dedd0(arg0->unknown_df4_, var6->unknown_0_);
            if (var7 != NULL) {
                char var8[0x80];
                __clear(var8, sizeof(var8));
                int var9 = func_020de234((Struct_02015ef4_4*)var7, 0);
                sprintf(var8, func_020e0434((Struct_0201099c_3*)arg0->unknown_df8_, 0x7d1), (char)var7->unknown_12_4_, var9);
                if (LoadFileIntoMemory(var8, arg0->unknown_3d94_, NULL))
                    var6->unknown_14_ = 0;
                arg0->unknown_3da8_++;
                arg0->unknown_3db7_++;
            }
            arg0->unknown_3dcc_ &= ~0x10;
        }
    } else if (arg0->unknown_3dcc_ & 0x20) {
        if (arg0->unknown_3da9_ == 0) {
            for (int var10 = 0; var10 < 8; var10++) {
                func_ov005_02155d38((Struct_ov005_021556e4_2*)&arg0->unknown_2d90_[var10]);
                arg0->unknown_2d90_[var10].unknown_14_ = -1;
            }
            arg0->unknown_3dae_ = 0;
            arg0->unknown_3db0_ = 8;
            arg0->unknown_3da9_++;
            arg0->unknown_3db7_++;
        } else if (arg0->unknown_3da9_ == 2) {
            memset(arg0->unknown_3d90_, 0, 0x800);
            int var11 = 0;
            signed char var12 = 0;
            for (int var13 = arg0->unknown_3dae_; var13 < arg0->unknown_3db0_; var13++) {
                Struct_ov005_02153ba4* var14 = &arg0->unknown_2d90_[var13];
                var14->unknown_14_ = -1;
                Struct_ov005_021556e4* var15 = func_020dedd0(arg0->unknown_df4_, var14->unknown_0_);
                if (var15 != NULL) {
                    unsigned int var16 = 0;
                    char var17[0x80];
                    __clear(var17, sizeof(var17));
                    int var18 = func_020de234((Struct_02015ef4_4*)var15, 0);
                    sprintf(var17, func_020e0434((Struct_0201099c_3*)arg0->unknown_df8_, 0x7d1), (char)var15->unknown_12_4_, var18);
                    if (LoadFileIntoMemory(var17, arg0->unknown_3d90_ + var11, &var16)) {
                        var14->unknown_14_ = var11;
                        var16 = (var16 + 3) & ~3;
                        var11 += var16;
                    }
                }
                if (++var12 == 4)
                    break;
            }
            if (arg0->unknown_3dae_ == arg0->unknown_3db0_) {
                arg0->unknown_3da9_++;
                arg0->unknown_3dcc_ &= ~0x20;
            }
        }
    } else if (arg0->unknown_3dcc_ & 0x40) {
        if (arg0->unknown_3daa_ == 0) {
            for (int var19 = 8; var19 < 24; var19++) {
                Struct_ov005_02153ba4* var20 = &arg0->unknown_2d90_[var19];
                if (var20->unknown_3_ == 0) {
                    func_ov005_02155d38((Struct_ov005_021556e4_2*)var20);
                    var20->unknown_14_ = -1;
                }
            }
            arg0->unknown_3db2_ = 8;
            arg0->unknown_3db4_ = 24;
            arg0->unknown_3daa_++;
            arg0->unknown_3db7_++;
        } else if (arg0->unknown_3daa_ == 2) {
            memset(arg0->unknown_3d88_, 0, 0x800);
            int var21 = 0;
            signed char var22 = 0;
            for (int var23 = arg0->unknown_3db2_; var23 < arg0->unknown_3db4_; var23++) {
                Struct_ov005_02153ba4* var24 = &arg0->unknown_2d90_[var23];
                var24->unknown_14_ = -1;
                if (var24->unknown_3_ != 0)
                    continue;
                Struct_ov005_021556e4* var25 = func_020dedd0(arg0->unknown_df4_, var24->unknown_0_);
                if (var25 != NULL) {
                    unsigned int var26 = 0;
                    char var27[0x80];
                    __clear(var27, sizeof(var27));
                    int var28 = func_020de234((Struct_02015ef4_4*)var25, 0);
                    sprintf(var27, func_020e0434((Struct_0201099c_3*)arg0->unknown_df8_, 0x7d1), (char)var25->unknown_12_4_, var28);
                    if (LoadFileIntoMemory(var27, arg0->unknown_3d88_ + var21, &var26)) {
                        var24->unknown_14_ = var21;
                        var26 = (var26 + 3) & ~3;
                        var21 += var26;
                    }
                }
                if (++var22 == 4)
                    break;
            }
            arg0->unknown_3daa_++;
            if (arg0->unknown_3db2_ == arg0->unknown_3db4_) {
                for (int var29 = 8; var29 < 24; var29++)
                    arg0->unknown_2d90_[var29].unknown_3_ = 0;
                arg0->unknown_3daa_ = 4;
                arg0->unknown_3dcc_ &= ~0x40;
            }
        }
    }
}

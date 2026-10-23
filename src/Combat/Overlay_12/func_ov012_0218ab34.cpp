#include <globaldefs.h>
#include <std_library_functions.h>

struct Struct_ov003_0215f4e4_2 {
    short unknown_0_;
    short unknown_2_;
    const char* unknown_4_;
    const char* unknown_8_;
    unsigned char unknown_c_;
    unsigned char unknown_d_;
    unsigned char unknown_e_;
    unsigned char unknown_f_;
    char unknown_10_[4];
};

struct Struct_ov012_0218ab34 {
    Struct_ov003_0215f4e4_2* unknown_0_;
    short unknown_4_;
    short unknown_6_;
};

struct Struct_ov003_0215f4e4 {
    Struct_ov003_0215f4e4_2* unknown_0_;
    Struct_ov012_0218ab34* unknown_4_;
    char* unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    int unknown_18_;
    short unknown_1c_;
    unsigned char unknown_1e_;
    unsigned char unknown_1f_;
    unsigned char unknown_20_;
};

struct Struct_ov012_0218ab34_2 {
    char unknown_0_[8];
    void* unknown_8_;
    char unknown_c_[0xa0 - 0xc];
    int unknown_a0_;
    char unknown_a4_[0xac - 0xa4];
    short unknown_ac_;
    short unknown_ae_;
};

struct Struct_0205d81c;
struct Struct_02072a68_2;

struct Struct_ov012_0218ab34_3 {
    Struct_ov003_0215f4e4* unknown_0_;
    Struct_ov012_0218ab34* unknown_4_;
    char unknown_8_[0xac - 0x8];
    char unknown_ac_[0x133c - 0xac];
    char unknown_133c_[4];
};

extern "C" Struct_ov012_0218ab34_2* func_0205d81c(struct Struct_0205d81c* arg0, int arg1);
extern "C" const char* func_02072a68(struct Struct_02072a68_2* arg0, int arg1);
extern "C" int func_020420e8(const char* arg0, int arg1);
extern "C" void func_0204f160(unsigned char* arg0, int arg1, int arg2);
extern "C" void func_0204ecb4(Struct_ov012_0218ab34_2* arg0, int arg1, int arg2, int arg3, int arg4, signed char* arg5);
extern "C" void func_0204f41c(Struct_ov012_0218ab34_2* arg0, short arg1, short arg2, const char* arg3, int arg4,
                              unsigned char arg5, short* arg6, short* arg7, int arg8);
extern "C" void func_0204f3bc(Struct_ov012_0218ab34_2* arg0, int arg1);
extern "C" void func_ov003_0215ec68(int arg0, short* arg1, short* arg2);
extern "C" void func_0204f914(Struct_ov012_0218ab34_2* arg0, int arg1, short arg2, short arg3, short arg4, short arg5);
struct Struct_0204fbf8_2;
extern "C" void func_0204fbf8(struct Struct_0204fbf8_2* arg0);

// USA: func_ov012_0218ab34
extern "C" ARM void func_ov012_0218ab34(Struct_ov012_0218ab34_3* arg0, int arg1)
{
    if (arg1 != 0)
        return;

    Struct_ov012_0218ab34_2* var0 = func_0205d81c((struct Struct_0205d81c*)arg0->unknown_ac_, 0xe);
    if (var0 == NULL)
        return;

    short var1 = var0->unknown_ac_ * 8;
    short var2 = var0->unknown_ae_ * 8;
    const char* var3 = func_02072a68((struct Struct_02072a68_2*)arg0->unknown_133c_, 0xe);
    int var4 = (0xf0 - func_020420e8(var3, 1)) >> 1;

    Struct_ov003_0215f4e4* var5 = arg0->unknown_0_;
    Struct_ov012_0218ab34* var6 = arg0->unknown_4_;
    unsigned char var7;
    unsigned char var8;
    int var9;
    Struct_ov003_0215f4e4_2* var10;
    int var11;
    int var12;
    var12 = var5->unknown_1f_;
    var7 = var5->unknown_1e_;
    var8 = var5->unknown_20_;
    var9 = var6->unknown_6_;
    var10 = var6->unknown_0_;

    short var13;
    short var14;
    short var15;
    short var16;

    if (var0->unknown_8_ != NULL)
        memset(var0->unknown_8_, 0, 0x7800);
    func_0204f160((unsigned char*)var0, var0->unknown_a0_, 0xe);
    func_0204ecb4(var0, 0, 0, 0x1e, 0x12, 0);
    func_0204f41c(var0, var4, 6, var3, 0xc, 0xf, &var13, &var14, var12);
    func_0204f3bc(var0, 0x18);

    for (var11 = 0; var11 < var9; var11++, var10++) {
        if ((var10->unknown_c_ & var7) == 0)
            continue;

        const char* var17 = var10->unknown_4_;
        const char* var18 = var17;
        if (var8 != 0 || (var7 & 2) != 0)
            var18 = var10->unknown_8_;
        if (var10->unknown_d_ != 0)
            var18 = var17;

        int var19 = func_020420e8(var18, 1);
        func_ov003_0215ec68(var10->unknown_e_, &var15, &var16);
        short var20 = var10->unknown_0_ - var1;
        short var21 = var10->unknown_2_ - var2;
        func_0204f914(var0, 4, var20 + 1, var21 + 1, var15 + var20 - 1, var16 + var21 - 1);
        var15 = (var15 - var19) >> 1;
        func_0204f41c(var0, var15 + var20, var21 + 2, var18, 0xc, 0xf, &var13, &var14, var12);
    }

    func_0204fbf8((struct Struct_0204fbf8_2*)var0);
}

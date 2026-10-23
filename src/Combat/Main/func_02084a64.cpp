#include <globaldefs.h>

extern "C" int func_02085fb4(unsigned char* arg0);
extern "C" int func_02086020(unsigned char* arg0);
extern "C" int func_0208608c(unsigned char* arg0);
extern "C" int func_020860f8(unsigned char* arg0);
extern "C" int func_02086164(unsigned char* arg0);
extern "C" int func_020861d0(unsigned char* arg0);
extern "C" int func_0208623c(unsigned char* arg0);
extern "C" int func_020862a8(unsigned char* arg0);
extern "C" int func_02086314(unsigned char* arg0);
extern "C" unsigned int func_02084e4c(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3);

struct Struct_02084a64 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int : 2;
};

struct Struct_02084a64_2 {
    struct Struct_02084a64 unknown_0_;
    struct Struct_02084a64 unknown_4_;
    struct Struct_02084a64 unknown_8_;
};

#if defined(jpn)
enum { Enum_02084a64_0 = 0x98 };
#else
enum { Enum_02084a64_0 = 0 };
#endif

// USA: func_02084a64
extern "C" ARM int func_02084a64(unsigned char* arg0, int arg1) {
    int var0 = *(int*)(arg0 + 0x950 - Enum_02084a64_0);
    struct Struct_02084a64_2* var1 = (struct Struct_02084a64_2*)(arg0 + 0x850 - Enum_02084a64_0) + var0;
    unsigned int var2 = 0;
    int var3 = 0;

    switch (arg1) {
    case 421: {
        int var4 = func_02085fb4(arg0);
        int var5 = var4 + ((struct Struct_02084a64*)(arg0 + 0x91c - Enum_02084a64_0))->unknown_0_0_ + var1->unknown_0_.unknown_0_0_;
        unsigned int var6 = func_02084e4c((unsigned int)arg0, var5, 2, 999);
        var1->unknown_0_.unknown_0_0_ += var6;
        var2 = var6;
        break;
    }
    case 423: {
        int var7 = func_02086020(arg0);
        int var8 = var7 + ((struct Struct_02084a64*)(arg0 + 0x91c - Enum_02084a64_0))->unknown_1_2_ + var1->unknown_0_.unknown_1_2_;
        unsigned int var9 = func_02084e4c((unsigned int)arg0, var8, 2, 999);
        var1->unknown_0_.unknown_1_2_ += var9;
        var2 = var9;
        break;
    }
    case 424: {
        int var10 = func_0208608c(arg0);
        int var11 = var10 + ((struct Struct_02084a64*)(arg0 + 0x91c - Enum_02084a64_0))->unknown_2_4_ + var1->unknown_0_.unknown_2_4_;
        unsigned int var12 = func_02084e4c((unsigned int)arg0, var11, 2, 999);
        var1->unknown_0_.unknown_2_4_ += var12;
        var2 = var12;
        break;
    }
    case 422: {
        int var13 = func_020860f8(arg0);
        int var14 = var13 + ((struct Struct_02084a64*)(arg0 + 0x920 - Enum_02084a64_0))->unknown_0_0_ + var1->unknown_4_.unknown_0_0_;
        unsigned int var15 = func_02084e4c((unsigned int)arg0, var14, 2, 999);
        var1->unknown_4_.unknown_0_0_ += var15;
        var2 = var15;
        break;
    }
    case 428: {
        int var16 = func_02086164(arg0);
        int var17 = var16 + ((struct Struct_02084a64*)(arg0 + 0x920 - Enum_02084a64_0))->unknown_1_2_ + var1->unknown_4_.unknown_1_2_;
        unsigned int var18 = func_02084e4c((unsigned int)arg0, var17, 2, 999);
        var1->unknown_4_.unknown_1_2_ += var18;
        var2 = var18;
        break;
    }
    case 426: {
        int var19 = func_020861d0(arg0);
        int var20 = var19 + ((struct Struct_02084a64*)(arg0 + 0x920 - Enum_02084a64_0))->unknown_2_4_ + var1->unknown_4_.unknown_2_4_;
        unsigned int var21 = func_02084e4c((unsigned int)arg0, var20, 2, 999);
        var1->unknown_4_.unknown_2_4_ += var21;
        var2 = var21;
        break;
    }
    case 425: {
        int var22 = func_0208623c(arg0);
        int var23 = var22 + ((struct Struct_02084a64*)(arg0 + 0x924 - Enum_02084a64_0))->unknown_0_0_ + var1->unknown_8_.unknown_0_0_;
        unsigned int var24 = func_02084e4c((unsigned int)arg0, var23, 2, 999);
        var1->unknown_8_.unknown_0_0_ += var24;
        var2 = var24;
        break;
    }
    case 262: {
        int var25 = func_020862a8(arg0);
        int var26 = var25 + ((struct Struct_02084a64*)(arg0 + 0x924 - Enum_02084a64_0))->unknown_1_2_ + var1->unknown_8_.unknown_1_2_;
        unsigned int var27 = func_02084e4c((unsigned int)arg0, var26, 3, 999);
        var1->unknown_8_.unknown_1_2_ += var27;
        var2 = var27;
        break;
    }
    case 263: {
        int var28 = func_02086314(arg0);
        int var29 = var28 + ((struct Struct_02084a64*)(arg0 + 0x924 - Enum_02084a64_0))->unknown_2_4_ + var1->unknown_8_.unknown_2_4_;
        unsigned int var30 = func_02084e4c((unsigned int)arg0, var29, 3, 999);
        var1->unknown_8_.unknown_2_4_ += var30;
        var2 = var30;
        break;
    }
    case 427: {
        unsigned short var31 = *(unsigned short*)(arg0 + 0x564);
        unsigned int var32 = func_02084e4c((unsigned int)arg0, var31, 2, 2600);
        unsigned short var33 = (unsigned short)var32;
        *(unsigned short*)(arg0 + 0x564) = *(unsigned short*)(arg0 + 0x564) + var33;
        var2 = var32;
        break;
    }
    default:
        var3 = 1;
        break;
    }

    return var3 ? -1 : (int)var2;
}

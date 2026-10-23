#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_021769ec_2204 = 0x818 };
enum { Enum_ov003_021769ec_2164 = 0x7f0 };
enum { Enum_ov003_021769ec_4096 = 0xf7c };
#else
enum { Enum_ov003_021769ec_2204 = 0x89c };
enum { Enum_ov003_021769ec_2164 = 0x874 };
enum { Enum_ov003_021769ec_4096 = 0x1000 };
#endif
#include "GameState/GameState.h"

extern "C" void* func_02010828(GameState* arg0);
struct Struct_0207fdcc_2;
extern "C" void func_02080c20(Struct_0207fdcc_2*, int);
extern "C" void func_02080c04(struct Struct_0207fdcc_2* arg0, short arg1);
extern "C" void func_02080c68(void*, int, int);
extern "C" void func_02080b54(void*, int);
struct Struct_0201099c_10 {
    char unknown_0_;
};
struct Struct_ov003_021769ec;
extern "C" struct Struct_ov003_021769ec* func_020dedd0(struct Struct_0201099c_10* arg0, int arg1);
struct Struct_02080f8c;
extern "C" void func_02080f8c(struct Struct_02080f8c* arg0, int arg1, int arg2);
struct Struct_02080cc0;
extern "C" void func_02080cc0(struct Struct_02080cc0* arg0, int arg1, int arg2);
extern "C" int func_02080b40(void* arg0, int arg1);
extern "C" void func_0208103c(void* arg0, int arg1, int arg2);
struct Struct_02052df8;
extern "C" short func_02052df8(Struct_02052df8* arg0, int arg1);
struct Struct_02080fa8;
extern "C" void func_02080fa8(struct Struct_02080fa8* arg0, int arg1, int arg2);
struct Struct_02080fc4;
extern "C" void func_02080fc4(struct Struct_02080fc4* arg0, int arg1, int arg2);
extern "C" int func_020dd4c4(int arg0, void* arg1);
extern "C" int func_020dcc98(int arg0);
extern "C" int func_ov003_021753a0(void* arg0, int arg1, void* arg2, void* arg3);
extern "C" int func_020813ec(void* arg0, short arg1);

extern int data_ov003_0217fb18[];

struct Struct_ov003_021769ec {
    char unknown_0_[8];
    unsigned int unknown_8_0_ : 4;
    unsigned int unknown_8_4_ : 28;
    unsigned int unknown_c_0_ : 7;
    unsigned int unknown_c_7_ : 4;
    unsigned int unknown_d_3_ : 21;
    char unknown_10_[0x18 - 0x10];
    short unknown_18_;
};

struct Struct_ov003_021769ec_2 {
    char unknown_0_[0x1c];
    int unknown_1c_[5];
    unsigned int unknown_30_;
    char unknown_34_[0x3a - 0x34];
    short unknown_3a_;
};

struct Struct_ov003_021769ec_3 {
    char unknown_0_[Enum_ov003_021769ec_2164];
    struct Struct_0201099c_10 unknown_874_;
    char unknown_875_[Enum_ov003_021769ec_2204 - Enum_ov003_021769ec_2164 - 1];
    struct Struct_0207fdcc_2* unknown_89c_;
    char unknown_8a0_[Enum_ov003_021769ec_4096 - Enum_ov003_021769ec_2204 - 4];
    Struct_ov003_021769ec_2 unknown_1000_;
};

static inline int inline_ov003_021769ec(Struct_ov003_021769ec* arg0) { return arg0->unknown_8_0_ <= 7; }

// USA: func_ov003_021769ec
extern "C" ARM void func_ov003_021769ec(Struct_ov003_021769ec_3* arg0) {
    short var0;
    short var1 = 0x1c;
    var0 = 4;
    short var2 = 0x1d;
    short var3 = 0x1e;
    short var4 = 0x1f;
    short var5 = 0x20;
    short var6 = 0x21;
    short var7 = 0x145;
    short var8 = 0x146;
    struct Struct_0207fdcc_2* var9 = arg0->unknown_89c_;
    GameState* var10 = GameState::GetInstance();
    func_02010828(var10);
    unsigned char var11 = arg0->unknown_1000_.unknown_30_;

    switch (var11) {
    case 2:
        var0 = 5;
        var1 = 0x22;
        var2 = 0x24;
        var3 = 0x26;
        var4 = 0x28;
        var5 = 0x2a;
        var6 = 0x2c;
        var7 = 0x147;
        var8 = 0x149;
        break;
    case 3:
        var0 = 6;
        var1 = 0x2d;
        var2 = 0x30;
        var3 = 0x33;
        var4 = 0x36;
        var5 = 0x39;
        var6 = 0x3c;
        var7 = 0x14b;
        var8 = 0x14e;
        break;
    case 4:
        var0 = 7;
        var1 = 0x3d;
        var2 = 0x41;
        var3 = 0x45;
        var4 = 0x49;
        var5 = 0x4d;
        var6 = 0x51;
        var7 = 0x151;
        var8 = 0x155;
        break;
    }

    func_02080c20(var9, var0);
    func_02080c68(var9, var0, 0);
    func_02080b54(var9, var0);

    Struct_ov003_021769ec* var12 = func_020dedd0(&arg0->unknown_874_, arg0->unknown_1000_.unknown_3a_);
    bool var13 = false;
    if (var12 != NULL) {
        var13 = inline_ov003_021769ec(var12);
    }
    if (var13) {
        for (unsigned char var14 = 0; var14 < var11; var14++) {
            int var15 = func_020dd4c4((signed char)arg0->unknown_1000_.unknown_1c_[var14], var12);
            int var16 = (signed char)arg0->unknown_1000_.unknown_1c_[var14];
            int var17 = 0;
            GameObject* var18 = var10->GetPartyMemberByIndex(var16);
            if (var18 != NULL) {
                var17 = *(int*)((char*)var18 + 0x134);
            }
            func_02080f8c((struct Struct_02080f8c*)var9, var1, var17);
            func_02080cc0((struct Struct_02080cc0*)var9, var1, func_020dcc98(var16));
            func_02080b40(var9, var1);

            if (var15 != 0) {
                func_02080cc0((struct Struct_02080cc0*)var9, var5, 3);
                func_0208103c(var9, var5, 0xb);
                func_02080b40(var9, var5);
            } else {
                func_02080cc0((struct Struct_02080cc0*)var9, var5, 0xf);
                int var19 = data_ov003_0217fb18[var12->unknown_8_0_];
                if (var19 < 0) {
                    return;
                }
                short var20 = func_02052df8((Struct_02052df8*)var18, var19);
                if (var20 == var12->unknown_18_) {
                    func_0208103c(var9, var5, 0x22);
                    func_02080b40(var9, var5);
                } else {
                    unsigned short var21;
                    unsigned short var22;
                    if (func_ov003_021753a0(arg0, var16, &var21, &var22) != 0) {
                        int var23 = 0xf;
                        if (var21 < var22) {
                            var23 = 5;
                        }
                        if (var21 > var22) {
                            var23 = 9;
                        }
                        func_02080cc0((struct Struct_02080cc0*)var9, var3, var23);
                        func_02080fa8((struct Struct_02080fa8*)var9, var2, var21);
                        func_02080fa8((struct Struct_02080fa8*)var9, var3, var22);
                        func_02080b40(var9, var2);
                        func_02080b40(var9, var3);
                        func_02080b40(var9, var4);
                    } else {
                        float var24;
                        float var25;
                        func_ov003_021753a0(arg0, var16, &var24, &var25);
                        int var26 = 0xf;
                        if (var24 < var25) {
                            var26 = 5;
                        }
                        if (var24 > var25) {
                            var26 = 9;
                        }
                        func_02080cc0((struct Struct_02080cc0*)var9, var8, var26);
                        func_02080fc4((struct Struct_02080fc4*)var9, var7, *(int*)&var24);
                        func_02080fc4((struct Struct_02080fc4*)var9, var8, *(int*)&var25);
                        func_02080b40(var9, var7);
                        func_02080b40(var9, var8);
                        func_02080b40(var9, var4);
                    }
                }
            }
            var1++;
            var2++;
            var3++;
            var4++;
            var5++;
            var7++;
            var8++;
        }

        if (var12->unknown_c_7_ != 0) {
            func_02080b40(var9, var6);
            func_0208103c(var9, var6, (short)(var12->unknown_c_7_ + 0x2f));
        }
    } else {
        func_02080c04(var9, var0);
    }

    func_020813ec(var9, var0);
}

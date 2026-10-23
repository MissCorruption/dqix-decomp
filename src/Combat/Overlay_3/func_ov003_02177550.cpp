#include <globaldefs.h>
#if defined(jpn)
enum {
    Enum_ov003_02177550_2204 = 0x818
};
enum {
    Enum_ov003_02177550_4163 = 0xfbf
};
#else
enum {
    Enum_ov003_02177550_2204 = 0x89c
};
enum {
    Enum_ov003_02177550_4163 = 0x1043
};
#endif
#include "GameState/GameState.h"

struct Struct_0207fdcc_2;
extern "C" void func_02080c20(struct Struct_0207fdcc_2 *arg0, int arg1);
extern "C" void func_02080c68(void *arg0, int arg1, int arg2);
extern "C" void func_02080bac(void *arg0, int arg1);
struct Struct_02080f8c;
extern "C" void func_02080f8c(struct Struct_02080f8c *arg0, int arg1, int arg2);
extern "C" void func_020805f4(void *arg0, int arg1);
extern "C" void func_0208103c(void *arg0, int arg1, int arg2);
struct Struct_02080cc0;
extern "C" void func_02080cc0(struct Struct_02080cc0 *arg0, int arg1, int arg2);
extern "C" int func_02080b2c(void *arg0, int arg1);
struct Struct_02052df8;
extern "C" int func_02052df8(Struct_02052df8 *arg0, int arg1);
struct Struct_02080fa8;
extern "C" void func_02080fa8(struct Struct_02080fa8 *arg0, int arg1, int arg2);
struct Struct_02080fc4;
extern "C" void func_02080fc4(struct Struct_02080fc4 *arg0, int arg1, int arg2);
extern "C" int func_020dd4c4(int arg0, void *arg1);
extern "C" int func_ov003_021753a0(void *arg0, int arg1, void *arg2, void *arg3);
extern "C" void func_020813ec(void *arg0, int arg1);

#if defined(jpn)
extern int data_ov003_0217e3ac[];
#else
extern int data_ov003_0217fb3c[];
#endif

struct Struct_ov003_02177550 {
    char unknown_0_[4];
    int unknown_4_;
    unsigned int unknown_8_0_ : 4;
    unsigned int unknown_8_4_ : 28;
    unsigned int unknown_c_0_ : 7;
    unsigned int unknown_c_7_ : 4;
    unsigned int unknown_d_3_ : 21;
    char unknown_10_[0x18 - 0x10];
    short unknown_18_;
};

struct Struct_ov003_02177550_2 {
    char unknown_0_[8];
    Struct_ov003_02177550 *unknown_8_;
    char unknown_c_[Enum_ov003_02177550_2204 - 0xc];
    struct Struct_0207fdcc_2 *unknown_89c_;
    char unknown_8a0_[Enum_ov003_02177550_4163 - Enum_ov003_02177550_2204 - 4];
    signed char unknown_1043_;
};

// JPN: func_ov003_02177550 (0217650c)
// USA: func_ov003_02177550
extern "C" ARM void func_ov003_02177550(Struct_ov003_02177550_2 *arg0) {
    GameState *var0     = GameState::GetInstance();
    GameObject *var1 = func_0200ff1c(var0, arg0->unknown_1043_);
    if (var1 == NULL) {
        return;
    }
    struct Struct_0207fdcc_2 *var2;
    Struct_ov003_02177550 *var3 = arg0->unknown_8_;
    var2            = arg0->unknown_89c_;
    if (var3 == NULL) {
        return;
    }

    func_02080c20(var2, 0xf);
    func_02080c68(var2, 0xf, 0);
    func_02080bac(var2, 0xf);
    func_02080f8c((struct Struct_02080f8c *) var2, 0x70, var3->unknown_4_);
#if !defined(jpn)
    func_020805f4(var2, 0x70);
#endif
    int var4         = func_020dd4c4(arg0->unknown_1043_, var3);
    unsigned int var5 = var3->unknown_c_7_;
    if (var5 != 0) {
        func_0208103c(var2, 0x71, (short) (var5 + 0x2f));
    }

    if (var4 != 0) {
        func_0208103c(var2, 0x75, 0xb);
        func_02080cc0((struct Struct_02080cc0 *) var2, 0x75, 3);
        func_02080b2c(var2, 0x72);
        func_02080b2c(var2, 0x73);
        func_02080b2c(var2, 0x74);
        func_02080b2c(var2, 0x159);
        func_02080b2c(var2, 0x15a);
    } else {
        func_02080cc0((struct Struct_02080cc0 *) var2, 0x75, 0xf);
#if defined(jpn)
        int var6 = data_ov003_0217e3ac[var3->unknown_8_0_];
#else
        int var6 = data_ov003_0217fb3c[var3->unknown_8_0_];
#endif
        if (var6 < 0) {
            return;
        }
        int var7 = func_02052df8((Struct_02052df8 *) var1, var6);
        if (var7 == var3->unknown_18_) {
            func_0208103c(var2, 0x75, 0x22);
            func_02080b2c(var2, 0x72);
            func_02080b2c(var2, 0x73);
            func_02080b2c(var2, 0x74);
            func_02080b2c(var2, 0x159);
            func_02080b2c(var2, 0x15a);
        } else {
            func_02080b2c(var2, 0x75);
            unsigned short var8;
            unsigned short var9;
            if (func_ov003_021753a0(arg0, arg0->unknown_1043_, &var8, &var9) != 0) {
                func_02080fa8((struct Struct_02080fa8 *) var2, 0x72, var8);
                int var10 = 0xf;
                if (var8 > var9) {
                    var10 = 9;
                } else if (var8 < var9) {
                    var10 = 5;
                }
                func_02080cc0((struct Struct_02080cc0 *) var2, 0x73, var10);
                func_02080fa8((struct Struct_02080fa8 *) var2, 0x73, var9);
                func_02080b2c(var2, 0x159);
                func_02080b2c(var2, 0x15a);
            } else {
                float var11;
                float var12;
                func_ov003_021753a0(arg0, arg0->unknown_1043_, &var11, &var12);
                func_02080fc4((struct Struct_02080fc4 *) var2, 0x159, *(int *) &var11);
                int var13 = 0xf;
                if (var11 > var12) {
                    var13 = 3;
                } else if (var11 < var12) {
                    var13 = 5;
                }
                func_02080cc0((struct Struct_02080cc0 *) var2, 0x15a, var13);
                func_02080fc4((struct Struct_02080fc4 *) var2, 0x15a, *(int *) &var12);
                func_02080b2c(var2, 0x72);
                func_02080b2c(var2, 0x73);
            }
        }
    }

    func_020813ec(var2, 0xf);
}

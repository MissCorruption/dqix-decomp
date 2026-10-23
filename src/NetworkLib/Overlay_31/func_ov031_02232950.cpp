#include <globaldefs.h>

extern "C" ARM int func_ov031_02222e0c(void);
extern "C" ARM unsigned int func_ov031_02227558(void);
extern "C" int func_ov031_02236878(int arg0);
extern "C" ARM void func_ov031_02222e98(void);
extern "C" void func_ov031_022274c0(int);
extern "C" void func_ov031_02227ce4(void);
extern "C" ARM void func_ov031_02222e40(int arg0);
extern "C" ARM unsigned char func_ov031_0223607c(int arg0);
extern "C" ARM unsigned char func_ov031_02227548(void);
extern "C" void func_ov031_02237b2c(int, int, int, int, int);
extern "C" void func_ov031_02232f58(void);
extern "C" void func_ov031_02232fe8(void);
extern "C" void func_ov031_02236094(void);
extern "C" void func_ov031_02233178(void);
extern "C" void func_ov031_02232a84(void);
extern signed char data_ov031_0224910c[];

struct Struct_ov031_02232950 { unsigned char unknown_0_[0x1d]; unsigned char unknown_1d_; };
struct Struct_ov031_02290cc0_3 { unsigned char unknown_0_; unsigned char unknown_1_[3]; Struct_ov031_02232950 *unknown_4_; };
extern Struct_ov031_02290cc0_3 data_ov031_02290cc0;

// USA: func_ov031_02232950
extern "C" ARM void func_ov031_02232950(void) {
    int var0 = func_ov031_02222e0c();
    if (var0 == 0) goto handleZero;
    if (var0 == 1) goto handleOne;
    return;

handleZero:
    {
        unsigned int var1 = func_ov031_02227558();
        switch (var1) {
        case 0: goto setField1dAndFinal;
        case 1: goto handleF8One;
        default: goto final;
        }
    }

setField1dAndFinal:
    func_ov031_02236878(7);
    data_ov031_02290cc0.unknown_4_->unknown_1d_ = 2;
    goto final;

handleF8One:
    func_ov031_02222e98();
    func_ov031_022274c0((int)func_ov031_02227ce4);
    return;

handleOne:
    {
        data_ov031_02290cc0.unknown_4_->unknown_1d_ = 1;
        unsigned char var2 = data_ov031_02290cc0.unknown_0_;
        if (var2 < 4) goto lowField0;

        int var3 = var2 - 4;
        unsigned char var4 = func_ov031_0223607c(var3);
        if (var4 == 0xff) {
            func_ov031_02236878(9);
            func_ov031_02222e40(-1);
            return;
        }
        func_ov031_02236878(6);
        signed char var5 = data_ov031_0224910c[func_ov031_02227548()];
        int var6 = var3 + 1;
        func_ov031_02237b2c(0x46, 0, 1, var5, var6);
        func_ov031_02232f58();
        func_ov031_02222e98();
        func_ov031_022274c0((int)func_ov031_02232fe8);
        return;
    }

lowField0:
    {
        unsigned char var7 = data_ov031_02290cc0.unknown_0_;
        if (var7 <= 2) {
            func_ov031_02236094();
        }
        func_ov031_02236878(6);
        func_ov031_02233178();
        goto final;
    }

final:
    func_ov031_022274c0((int)func_ov031_02232a84);
}

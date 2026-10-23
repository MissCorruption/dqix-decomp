#include <globaldefs.h>
#include "Resource/CharacterCreationUI.h"

struct Struct_0205bef8;
extern "C" void func_0205bef8(struct Struct_0205bef8* arg0);
struct Struct_0205ba68;
extern "C" void func_0205ba68(struct Struct_0205ba68* arg0, int arg1, int arg2, int arg3);
struct Struct_0205bacc;
extern "C" void func_0205bacc(struct Struct_0205bacc* arg0, int arg1);
struct Struct_0205bb04;
extern "C" void func_0205bb04(struct Struct_0205bb04* arg0, int arg1);

// USA: func_ov009_02188c2c
extern "C" ARM void func_ov009_02188c2c(Struct_ov009_021842a0* arg0) {
    int var0, var1, var2, var3, var4;
    signed char var5 = arg0->unknown_c58_;

    switch (var5) {
    case 1:
        var0 = 1;
        var1 = 2;
        var2 = var1;
        var3 = var0;
        var4 = arg0->unknown_da3_;
        break;
    case 2: {
        unsigned char var6 = arg0->unknown_da3_;
        var0 = 5;
        var1 = 1;
        var2 = var0;
        var3 = var1;
        var4 = arg0->unknown_da4_[var6];
        break;
    }
    case 3: {
        unsigned char var7 = arg0->unknown_da3_;
        var0 = 5;
        var1 = 2;
        var4 = arg0->unknown_dac_[var7];
        var2 = 0xa;
        var3 = 1;
        break;
    }
    case 4: {
        unsigned char var8 = arg0->unknown_da3_;
        var0 = 5;
        var1 = 2;
        var4 = arg0->unknown_dae_[var8];
        var2 = 0xa;
        var3 = 1;
        break;
    }
    case 5: {
        unsigned char var9 = arg0->unknown_da3_;
        var0 = 5;
        var1 = 2;
        var4 = arg0->unknown_da6_[var9];
        var2 = 0xa;
        var3 = 1;
        break;
    }
    case 6: {
        unsigned char var10 = arg0->unknown_da3_;
        var0 = 4;
        var1 = 2;
        var4 = arg0->unknown_daa_[var10];
        var2 = 8;
        var3 = 1;
        break;
    }
    case 7: {
        unsigned char var11 = arg0->unknown_da3_;
        var0 = 4;
        var1 = 2;
        var4 = arg0->unknown_da8_[var11];
        var2 = 8;
        var3 = 1;
        break;
    }
    case 8:
        var0 = 0xb;
        var1 = 6;
        var2 = 0x42;
        var3 = 1;
#if defined(jpn)
        var4 = arg0->unknown1_d8c_;
#else
        var4 = 0;
#endif
        break;
    default:
        break;
    }

    Struct_ov009_02188c2c* var12 = &arg0->unknown_bec_;
    func_0205bef8((struct Struct_0205bef8*)var12);
    func_0205ba68((struct Struct_0205ba68*)var12, var0, var1, 1);
    func_0205bacc((struct Struct_0205bacc*)var12, var2);
    var12->unknown_4_ = var3;
    func_0205bb04((struct Struct_0205bb04*)var12, var4);
    var12->unknown_3d_ = 0;
}

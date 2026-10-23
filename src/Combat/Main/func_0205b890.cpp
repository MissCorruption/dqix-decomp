#include <globaldefs.h>

struct Struct_0205b1ac { int unknown_0_; short unknown_4_, unknown_6_, unknown_8_, unknown_a_; };
struct Struct_0205b890_2 { unsigned short unknown_0_, unknown_2_, unknown_4_; };
struct Struct_0205b890 {
    unsigned short unknown_0_, unknown_2_;
    Struct_0205b890_2* unknown_4_;
    Struct_0205b890_2* unknown_8_;
};

// USA: func_0205b890
extern "C" ARM void func_0205b890(Struct_0205b1ac* arg0, int arg1, Struct_0205b890* arg2) {
    unsigned short var0;
    int var1;
    Struct_0205b890_2* var2;
    int var3;
    int var4;
    int var5;
    unsigned short var6;
    short var7;
    short var8;
    short var9;
    short var10;
    if (!arg0 || !arg2) return;
    var0 = arg2->unknown_0_;
    if (arg1 < var0) return;
    var2 = arg2->unknown_8_;
    if (!var2) return;
    for (var6 = 0; var6 < var0; var2++, var6++) {
        var7 = var2->unknown_2_ & 0x1f;
        var8 = var2->unknown_0_ & 0xf;
        unsigned short var11 = (var2->unknown_0_ & 0xc000) >> 14;
        unsigned short var12 = (var2->unknown_2_ & 0xc000) >> 14;
        switch (var11) {
        case 0:
            if (var12 == 0) { var9 = 8; var10 = 8; }
            else if (var12 == 1) { var9 = 16; var10 = 16; }
            else if (var12 == 2) { var9 = 32; var10 = 32; }
            else if (var12 == 3) { var9 = 64; var10 = 64; }
            break;
        case 1:
            if (var12 == 0) { var9 = 16; var10 = 8; }
            else if (var12 == 1) { var9 = 32; var10 = 8; }
            else if (var12 == 2) { var9 = 32; var10 = 16; }
            else if (var12 == 3) { var9 = 64; var10 = 32; }
            break;
        case 2:
            if (var12 == 0) { var9 = 8; var10 = 16; }
            else if (var12 == 1) { var9 = 8; var10 = 32; }
            else if (var12 == 2) { var9 = 16; var10 = 32; }
            else if (var12 == 3) { var9 = 32; var10 = 64; }
            break;
        }
        var1 = var2->unknown_4_ & 0x3ff;
        if (var6 == 0) {
            var4 = var7;
            var5 = var8;
            var3 = var1;
        }
        arg0[var6].unknown_0_ = (var1 - var3) << 5;
        var7 -= var4;
        var8 -= var5;
        arg0[var6].unknown_4_ = var7;
        arg0[var6].unknown_6_ = var8;
        arg0[var6].unknown_8_ = var9;
        arg0[var6].unknown_a_ = var10;
    }
}

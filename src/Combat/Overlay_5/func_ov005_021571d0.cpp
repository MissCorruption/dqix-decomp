#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_0205bef8;
struct Struct_0205ba68;
struct Struct_0205bacc;

struct Struct_ov005_021571d0 {
    int unknown_0_;
    int unknown_4_;
    char unknown_8_[0x3c - 0x8];
    unsigned char unknown_3c_;
    unsigned char unknown_3d_;
};

struct Struct_ov005_02153954 {
    char unknown_0_[R(0x196c, 0x19f4)];
    Struct_ov005_021571d0 unknown_19f4_;
    char unknown_1a34_[0x3db8 - 0x19f4 - sizeof(Struct_ov005_021571d0)];
    unsigned char unknown_3db8_;
    char unknown_3db9_[0x3dbb - 0x3db9];
    signed char unknown_3dbb_;
    unsigned char unknown_3dbc_;
};

extern "C" void func_0205bef8(Struct_0205bef8* arg0);
extern "C" void func_0205ba68(Struct_0205ba68* arg0, int arg1, int arg2, int arg3);
extern "C" void func_0205bacc(Struct_0205bacc* arg0, int arg1);
extern "C" void func_0205bb04(void* arg0, int arg1);

// USA: func_ov005_021571d0
extern "C" ARM void func_ov005_021571d0(Struct_ov005_02153954* arg0) {
    int var0;
    short var1;
    int var2;
    int var3;
    int var4;
    short var5;
    unsigned char var6;
    unsigned char var7;
    switch (arg0->unknown_3db8_) {
    case 0:
        var1 = 8;
        var0 = 1;
        var2 = 0;
        var3 = 8;
        var4 = 1;
        var6 = 0;
        var7 = 1;
        var5 = arg0->unknown_3dbc_;
        break;
    case 2:
        var1 = 1;
        var0 = 8;
        var2 = 0;
        var4 = 1;
        var3 = 8;
        var6 = 1;
        var7 = 0;
        var5 = arg0->unknown_3dbc_;
        break;
    case 3:
        var1 = 1;
        var0 = 8;
        var2 = 0;
        var4 = 1;
        var3 = 8;
        var6 = 1;
        var7 = 0;
        var5 = arg0->unknown_3dbc_;
        break;
    case 4:
    case 6:
        var2 = 1;
        var0 = 4;
        var1 = 4;
        var4 = 1;
        var6 = 1;
        var5 = arg0->unknown_3dbb_ - 8;
        var3 = 0x10;
        var7 = 0;
        break;
    }
    func_0205bef8((Struct_0205bef8*)&arg0->unknown_19f4_);
    func_0205ba68((Struct_0205ba68*)&arg0->unknown_19f4_, var0, var1, var2);
    func_0205bacc((Struct_0205bacc*)&arg0->unknown_19f4_, var3);
    arg0->unknown_19f4_.unknown_4_ = var4;
    func_0205bb04(&arg0->unknown_19f4_, var5);
    arg0->unknown_19f4_.unknown_3c_ = var6;
    arg0->unknown_19f4_.unknown_3d_ = var7;
}

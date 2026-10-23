#include <globaldefs.h>

#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif

struct Struct_ov005_02153954 {
    char unknown_0_[LOW_REGION(0x3d22, 0x3daa)];
    unsigned char unknown_3daa_;
    char unknown_3dab_[0x3dbc - 0x3dab];
    unsigned char unknown_3dbc_;
    signed char unknown_3dbd_;
    unsigned char unknown_3dbe_;
    signed char unknown_3dbf_;
    char unknown_3dc0_[0x3dcc - 0x3dc0];
    unsigned int unknown_3dcc_;
    char unknown_3dd0_[0x3df4 - 0x3dd0];
    unsigned char unknown_3df4_[8];
};

struct Struct_02108760;

extern "C" char data_02108760[];

extern "C" void func_0205eaa0(Struct_02108760* arg0, int arg1, int arg2);

// USA: func_ov005_021585fc
extern "C" ARM int func_ov005_021585fc(Struct_ov005_02153954* arg0, int arg1) {
    unsigned char var0 = arg0->unknown_3df4_[arg0->unknown_3dbc_] - 1;
    signed char var1 = arg0->unknown_3dbd_;
    signed char var2 = var1 + arg1;
    if (var2 < 0)
        var2 = var0;
    if (var2 > var0)
        var2 = 0;
    int var3 = 1;
    if (var2 == var1)
        var3 = 0;
    if (var3) {
        func_0205eaa0((Struct_02108760*)data_02108760, 1, 0);
        if (arg1 < 0)
            arg0->unknown_3dcc_ |= 0x20000;
        else
            arg0->unknown_3dcc_ |= 0x40000;
        arg0->unknown_3dbe_ = arg0->unknown_3dbc_;
        arg0->unknown_3dbf_ = arg0->unknown_3dbd_;
        arg0->unknown_3dbd_ = var2;
        arg0->unknown_3dcc_ |= 0x40;
        arg0->unknown_3daa_ = 0;
    }
    return var3;
}

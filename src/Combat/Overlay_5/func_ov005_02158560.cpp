#include <globaldefs.h>

#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif

struct Struct_02108760;

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
    char unknown_3dd0_[0x3dfc - 0x3dd0];
    unsigned char unknown_3dfc_[8];
};

extern int data_02108760;

extern "C" void func_0205eaa0(Struct_02108760* arg0, int arg1, int arg2);

// USA: func_ov005_02158560
extern "C" ARM int func_ov005_02158560(Struct_ov005_02153954* arg0, unsigned char arg1, int arg2) {
    if (arg1 == arg0->unknown_3dbc_)
        return 0;
    if (arg2 == 0)
        func_0205eaa0((Struct_02108760*)&data_02108760, 1, 0);
    arg0->unknown_3dbe_ = arg0->unknown_3dbc_;
    arg0->unknown_3dbf_ = arg0->unknown_3dbd_;
    arg0->unknown_3dfc_[arg0->unknown_3dbc_] = arg0->unknown_3dbd_;
    arg0->unknown_3dbc_ = arg1;
    arg0->unknown_3dbd_ = arg0->unknown_3dfc_[arg0->unknown_3dbc_];
    arg0->unknown_3dcc_ |= 0x800 | 0x40;
    arg0->unknown_3daa_ = 0;
    return 1;
}

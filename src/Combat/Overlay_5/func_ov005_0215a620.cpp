#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov005_0215a620_3716 = 0xe80, Enum_ov005_0215a620_15768 = 0x3d10, Enum_ov005_0215a620_22 = 24, Enum_ov005_0215a620_10 = 8 };
#else
enum { Enum_ov005_0215a620_3716 = 0xe84, Enum_ov005_0215a620_15768 = 0x3d98, Enum_ov005_0215a620_22 = 22, Enum_ov005_0215a620_10 = 10 };
#endif

struct Struct_02000c9c_91;
struct Struct_0204b8d0 {
    char unknown_0_[0x10];
    Struct_02000c9c_91* unknown_10_;
    unsigned short* unknown_14_;
    char unknown_18_[5];
    unsigned char unknown_1d_;
};
extern "C" void func_0204b8d0(struct Struct_0204b8d0*, unsigned int, int, int, short, short, short, short, unsigned short);

struct Struct_02020cb8_2;
extern "C" void func_0204b0e8(struct Struct_02020cb8_2*, void*);

struct Struct_ov005_0215c530
{
    Struct_ov005_0215c530* unknown_0_;
    char unknown_4_[4];
    short unknown_8_;
};

struct Struct_ov005_0215c530_2
{
    short unknown_0_;
    char unknown_2_[0x1c - 2];
};

struct Struct_02020cb8_8
{
    int unknown_0_[2];
};

struct Struct_ov005_0215a620_2
{
    char unknown_0_[Enum_ov005_0215a620_3716 - 0x244];
    Struct_0204b8d0 unknown_c40_[3];
    char unknown_ca0_[0x1000 - (Enum_ov005_0215a620_3716 - 0x244) - sizeof(Struct_0204b8d0) * 3];
    Struct_02020cb8_8 unknown_1000_;
    char unknown_1008_[0x179c - 0x1000 - sizeof(Struct_02020cb8_8)];
};

struct Struct_ov005_0215a620
{
    char unknown_0_[0x244];
    Struct_ov005_0215a620_2 unknown_244_;
    Struct_ov005_0215c530* unknown_19e0_;
    char unknown_19e4_[0x2d90 - 0x19e4];
    Struct_ov005_0215c530_2 unknown_2d90_[24];
    char unknown_3030_[Enum_ov005_0215a620_15768 - 0x3030];
    short unknown_3d98_[8];
    char unknown_3da8_[0x3db8 - 0x3da8];
    unsigned char unknown_3db8_;
    unsigned char unknown_3db9_;
    char unknown_3dba_[0x3dbb - 0x3dba];
    signed char unknown_3dbb_;
    unsigned char unknown_3dbc_;
    signed char unknown_3dbd_;
    char unknown_3dbe_;
    signed char unknown_3dbf_;
    char unknown_3dc0_[0x3dcc - 0x3dc0];
    unsigned int unknown_3dcc_;
    char unknown_3dd0_[0x3dd4 - 0x3dd0];
    unsigned char unknown_3dd4_[8];
    typedef unsigned char Type_02020cb8_2[8];
    Type_02020cb8_2& inline_ov005_0215a620() { return unknown_3dd4_; }
};

// USA: func_ov005_0215a620
extern "C" ARM void func_ov005_0215a620(Struct_ov005_0215a620* arg0) {
    if ((arg0->unknown_3dcc_ & 0x800) == 0) return;

    unsigned char var0 = arg0->unknown_3db8_;
    if (!(var0 != 0 && var0 != 1)) {
        func_0204b8d0(&arg0->unknown_244_.unknown_c40_[0], 0, Enum_ov005_0215a620_22, 22, Enum_ov005_0215a620_22, 22, Enum_ov005_0215a620_10, 2, 0xffff);
    } else {
        unsigned char var1 = arg0->unknown_3dbc_;
        unsigned char* var2 = arg0->inline_ov005_0215a620();
        unsigned char var3 = var2[var1];
        unsigned int var4 = 5;
        if (var3 == 1) var4 = 4;
        else if (var3 == 2) var4 = 2;
        else if (var3 == 3) var4 = 3;
        func_0204b8d0(&arg0->unknown_244_.unknown_c40_[0], var4, 0, 0, Enum_ov005_0215a620_22, 22, Enum_ov005_0215a620_10, 2, 0xffff);
    }
    func_0204b0e8((Struct_02020cb8_2*)&arg0->unknown_244_.unknown_c40_[0], 0);
    arg0->unknown_3dcc_ &= ~0x800;
}

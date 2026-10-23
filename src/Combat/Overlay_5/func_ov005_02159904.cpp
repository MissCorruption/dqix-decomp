#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif
#include <globaldefs.h>

struct Struct_0205c53c;
struct Struct_0205ba68;
struct Struct_0205bacc;
struct Struct_0205bcdc;

struct Struct_ov005_021571d0 {
    int unknown_0_;
    int unknown_4_;
    char unknown_8_[0x30 - 0x8];
};

struct Struct_02001aac : Struct_ov005_021571d0 {
    char unknown_30_[0x50 - 0x30];
};

struct Struct_02001aac_2 : Struct_ov005_021571d0 {
    char unknown_30_[0x40 - 0x30];
};

struct Struct_ov005_02158ed0 {
    int unknown_0_;
    Struct_02001aac unknown_4_;
    Struct_02001aac_2 unknown_54_;
    char unknown_94_[0xa0 - 0x94];
    short unknown_a0_;
    short unknown_a2_;
    short unknown_a4_;
    short unknown_a6_;
    short unknown_a8_;
    short unknown_aa_;
    short unknown_ac_;
    short unknown_ae_;
    char unknown_b0_;
    unsigned char unknown_b1_;
    char unknown_b2_[0xb5 - 0xb2];
    unsigned char unknown_b5_;
    unsigned char unknown_b6_;
    unsigned char unknown_b7_;
};

struct Struct_ov005_02153954 {
    char unknown_0_[0xe10];
    char* unknown_e10_;
    char unknown_e14_[LOW_REGION(0xee0, 0xee4) - 0xe14];
    Struct_ov005_02158ed0 unknown_ee4_;
    char unknown_f9c_[LOW_REGION(0x3d33, 0x3dbb) - LOW_REGION(0xee0, 0xee4) - sizeof(Struct_ov005_02158ed0)];
    signed char unknown_3dbb_;
    char unknown_3dbc_[LOW_REGION(0x3d54, 0x3ddc) - LOW_REGION(0x3d34, 0x3dbc)];
    unsigned char unknown_3ddc_;
    unsigned char unknown_3ddd_;
    signed char unknown_3dde_;
    unsigned char unknown_3ddf_;

    Struct_ov005_02158ed0* inline_ov005_02158e04() { return &unknown_ee4_; }
};

extern "C" void func_0205c53c(Struct_0205c53c* arg0);
extern "C" void func_0205ba68(Struct_0205ba68* arg0, int arg1, int arg2, int arg3);
extern "C" void func_0205bacc(Struct_0205bacc* arg0, int arg1);
extern "C" void func_0205bcdc(Struct_0205bcdc* arg0, int arg1);
extern "C" void func_0205bb04(void* arg0, int arg1);
extern "C" void* memset(void* arg0, int arg1, unsigned int arg2);
extern "C" void func_ov005_02159a30(Struct_ov005_02153954* arg0, char* arg1, int arg2);
#if defined(jpn)
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
#else
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif

// USA: func_ov005_02159904
extern "C" ARM void func_ov005_02159904(Struct_ov005_02153954* arg0) {
    Struct_ov005_02158ed0* var0 = arg0->inline_ov005_02158e04();
    func_0205c53c((Struct_0205c53c*)var0);
#if defined(jpn)
    if (arg0->unknown_3dbb_ >= 0 && arg0->unknown_3dbb_ < 8) {
    func_0205ba68((Struct_0205ba68*)&var0->unknown_4_, 1, 3, 0);
    func_0205ba68((Struct_0205ba68*)&var0->unknown_54_, 1, 3, 0);
    func_0205bacc((Struct_0205bacc*)&var0->unknown_4_, 3);
    func_0205bacc((Struct_0205bacc*)&var0->unknown_54_, 3);
    var0->unknown_4_.unknown_4_ = 1;
    var0->unknown_54_.unknown_4_ = 1;
    int var1 = arg0->unknown_3dde_;
    func_0205bcdc((Struct_0205bcdc*)&var0->unknown_4_, var1);
    func_0205bb04(&var0->unknown_54_, var1);
    } else {
    func_0205ba68((Struct_0205ba68*)&var0->unknown_4_, 1, 4, 0);
    func_0205ba68((Struct_0205ba68*)&var0->unknown_54_, 1, 4, 0);
    func_0205bacc((Struct_0205bacc*)&var0->unknown_4_, 4);
    func_0205bacc((Struct_0205bacc*)&var0->unknown_54_, 4);
    var0->unknown_4_.unknown_4_ = 1;
    var0->unknown_54_.unknown_4_ = 1;
    int var2 = arg0->unknown_3dde_;
    func_0205bcdc((Struct_0205bcdc*)&var0->unknown_4_, var2);
    func_0205bb04(&var0->unknown_54_, var2);
    }
#else
    int var3 = 4;
    if (arg0->unknown_3dbb_ >= 0 && arg0->unknown_3dbb_ < 8)
        var3 = 3;
    func_0205ba68((Struct_0205ba68*)&var0->unknown_4_, 1, var3, 0);
    func_0205ba68((Struct_0205ba68*)&var0->unknown_54_, 1, var3, 0);
    func_0205bacc((Struct_0205bacc*)&var0->unknown_4_, var3);
    func_0205bacc((Struct_0205bacc*)&var0->unknown_54_, var3);
    var0->unknown_4_.unknown_4_ = 1;
    var0->unknown_54_.unknown_4_ = 1;
    int var4 = arg0->unknown_3dde_;
    func_0205bcdc((Struct_0205bcdc*)&var0->unknown_4_, var4);
    func_0205bb04(&var0->unknown_54_, var4);
#endif
#if defined(jpn)
    arg0->unknown_ee4_.unknown_a0_ = 8;
    arg0->unknown_ee4_.unknown_a2_ = 7;
    arg0->unknown_ee4_.unknown_a4_ = 0xc;
    arg0->unknown_ee4_.unknown_a6_ = 9;
    arg0->unknown_ee4_.unknown_a8_ = 0xc;
    arg0->unknown_ee4_.unknown_aa_ = 8;
    arg0->unknown_ee4_.unknown_ac_ = 0xa;
    arg0->unknown_ee4_.unknown_ae_ = 0xe;
    arg0->inline_ov005_02158e04()->unknown_b7_ = 0xa;
    arg0->inline_ov005_02158e04()->unknown_b1_ = 1;
    arg0->inline_ov005_02158e04()->unknown_b5_ = 0;
    arg0->inline_ov005_02158e04()->unknown_b6_ = 0;
#else
    var0 = arg0->inline_ov005_02158e04();
    var0->unknown_a8_ = 0xc;
    var0->unknown_aa_ = 8;
    var0->unknown_ac_ = 0xa;
    var0->unknown_ae_ = 0xe;
    var0->unknown_b7_ = 0xa;
    var0->unknown_b1_ = 1;
    var0->unknown_b5_ = 0;
    var0->unknown_b6_ = 0;
#endif
    memset(arg0->unknown_e10_, 0, LOW_REGION(0x800, 0x960));
    func_ov005_02159a30(arg0, arg0->unknown_e10_, 0);
#if defined(jpn)
    func_0205d304(arg0->inline_ov005_02158e04(), arg0->unknown_e10_, 0, 1, 0, 0, 0);
#else
    func_0205d304(var0, arg0->unknown_e10_, 0, 1, 0, 0, 0, 0);
#endif
}

#include <globaldefs.h>
#if defined(jpn)
#define func_ov005_0215916c func_ov005_0215a688
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif

#if defined(jpn)
#define func_ov005_02158e04 func_ov005_0215a36c
#endif

struct Struct_ov005_02158e04 {
    char unknown_0_[0xc5];
    unsigned char unknown_c5_;
};

struct Struct_ov005_02153954 {
    char unknown_0_[LOW_REGION(0xee0, 0xee4)];
    char unknown_ee4_[LOW_REGION(0x3d33, 0x3dbb) - LOW_REGION(0xee0, 0xee4)];
    signed char unknown_3dbb_;
    char unknown_3dbc_[LOW_REGION(0x3d54, 0x3ddc) - LOW_REGION(0x3d34, 0x3dbc)];
    unsigned char unknown_3ddc_;
    unsigned char unknown_3ddd_;
    signed char unknown_3dde_;
    unsigned char unknown_3ddf_;

    char* inline_ov005_02158e04() { return unknown_ee4_; }
};

struct Struct_0205d81c;
extern "C" Struct_ov005_02158e04* func_0205d8c4(Struct_0205d81c*);
extern "C" int func_0204c7cc(unsigned char*);
extern "C" void func_0205bc24(void* arg0, int arg1);
extern "C" unsigned char func_0205d0e0(void* arg0, int arg1);
extern "C" void func_ov005_02158f80(Struct_ov005_02153954* arg0);
extern "C" void func_ov005_0215916c(Struct_ov005_02153954* arg0);
extern "C" void func_ov005_02159208(Struct_ov005_02153954* arg0);
extern "C" void func_ov005_02159274(Struct_ov005_02153954* arg0);
extern "C" void func_ov005_02159850(Struct_ov005_02153954* arg0);
extern "C" void func_ov005_02158ed0(Struct_ov005_02153954* arg0);

// USA: func_ov005_02158e04
extern "C" ARM void func_ov005_02158e04(Struct_ov005_02153954* arg0, int arg1) {
    Struct_ov005_02158e04* var0 = func_0205d8c4((Struct_0205d81c*)arg0->unknown_ee4_);
    if (var0 != NULL && func_0204c7cc((unsigned char*)var0) && !(var0->unknown_c5_ & 2))
        func_0205bc24(arg0->inline_ov005_02158e04() + 4, -1);
    arg0->unknown_3ddd_ = func_0205d0e0(arg0->unknown_ee4_, arg1);
    switch (arg0->unknown_3ddf_) {
    case 0:
        func_ov005_02158f80(arg0);
        break;
    case 1:
        func_ov005_0215916c(arg0);
        break;
    case 2:
        func_ov005_02159208(arg0);
        break;
    case 3:
        func_ov005_02159274(arg0);
        break;
    case 4:
        func_ov005_02159850(arg0);
        break;
    }
    func_ov005_02158ed0(arg0);
}

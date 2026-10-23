#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define RG(u, j) (j)
#else
#define RG(u, j) (u)
#endif

struct Struct_0207fdcc_2 {
    char unknown_0_[RG(0x36, 0x2a)];
    short unknown_36_;
};

struct Struct_0207fdf0_2;
struct Struct_02108760;
struct Struct_02081f20_2;

extern "C" void* func_02010828(GameState* arg0);
extern "C" void func_0207fdf0(struct Struct_0207fdf0_2* arg0, int arg1);
extern "C" void func_ov003_021749c0(char* arg0);
extern "C" short func_02080468(void* arg0, int arg1);
extern "C" void func_ov003_02177820(void* arg0);
extern "C" void func_ov003_02177938(void* arg0);
extern "C" void func_02081ea4(struct Struct_0207fdcc_2* arg0, int arg1, int arg2);
extern "C" void func_02080c68(void* arg0, int arg1, int arg2);
extern "C" void func_0208203c(struct Struct_02081f20_2* arg0);
extern "C" int func_ov003_021765b4(void* arg0);
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);
extern "C" int func_ov003_02179f34(void* arg0);
extern "C" int func_ov003_021766e8(void* arg0);
extern struct Struct_02108760 data_02108760;

struct Struct_ov003_0217a4ac {
    char unknown_0_[RG(0x88c, 0x808)];
    char unknown_88c_[0x89c - 0x88c];
    struct Struct_0207fdcc_2* unknown_89c_;
    char unknown_8a0_[0xff8 - 0x8a0];
    short* unknown_ff8_;
    short unknown_ffc_;
    short unknown_ffe_;
    char unknown_1000_[4];
    short unknown_1004_;
    char unknown_1006_[6];
    short unknown_100c_;
    short unknown_100e_;
    short unknown_1010_;
    short unknown_1012_;
    short unknown_1014_;
    short unknown_1016_;
    char unknown_1018_[0x1030 - 0x1018];
    int unknown_1030_;
    char unknown_1034_[2];
    short unknown_1036_;
    char unknown_1038_[4];
    unsigned char unknown_103c_;
    char unknown_103d_;
    unsigned char unknown_103e_;
    unsigned char unknown_103f_;
    char unknown_1040_[3];
    signed char unknown_1043_;
    char unknown_1044_[2];
    unsigned short unknown_1046_;
};

// USA: func_ov003_0217a4ac
extern "C" ARM void func_ov003_0217a4ac(struct Struct_ov003_0217a4ac* arg0) {
    func_02010828(GameState::GetInstance());
    struct Struct_0207fdcc_2* var0 = arg0->unknown_89c_;
    if (arg0->unknown_103f_ == 0) {
        arg0->unknown_1014_ = 0;
        arg0->unknown_1016_ = 0;
        func_0207fdf0((struct Struct_0207fdf0_2*)var0, 0);
        arg0->unknown_103f_++;
        return;
    }
    if (arg0->unknown_103f_ == 1) {
        func_ov003_021749c0((char*)arg0);
        switch (arg0->unknown_1030_) {
        case 1:
            arg0->unknown_ffe_ = 0x11;
            break;
        case 2:
            arg0->unknown_ffe_ = 0x12;
            break;
        case 3:
            arg0->unknown_ffe_ = 0x13;
            break;
        case 4:
            arg0->unknown_ffe_ = 0x14;
            break;
        }
        if (arg0->unknown_1010_ < 0) {
            arg0->unknown_1010_ = func_02080468(var0, arg0->unknown_ffe_);
        }
        var0->unknown_36_ = arg0->unknown_1010_;
        func_ov003_02177820(arg0);
        func_ov003_02177938(arg0);
        func_02081ea4(var0, arg0->unknown_ffe_, 0);
        func_02080c68(var0, arg0->unknown_ffe_, 0);
        func_0208203c((struct Struct_02081f20_2*)arg0->unknown_88c_);
        arg0->unknown_ff8_ = 0;
        arg0->unknown_103f_++;
        return;
    }
    if (arg0->unknown_103f_ == 2) {
        arg0->unknown_ff8_ = &arg0->unknown_1010_;
        func_ov003_02177938(arg0);
        func_02080c68(arg0->unknown_89c_, 0x15, 1);
        if (func_ov003_021765b4(arg0)) {
            func_0205eaa0(&data_02108760, 1, 0);
            func_0208203c((struct Struct_02081f20_2*)arg0->unknown_88c_);
            arg0->unknown_ff8_ = 0;
            if (func_ov003_02179f34(arg0) == 0) {
                short var1 = 0x13;
                if (arg0->unknown_1043_ < 0) {
                    var1 = 0x14;
                }
                arg0->unknown_1036_ = var1;
                func_0207fdf0((struct Struct_0207fdf0_2*)var0, 0);
                arg0->unknown_103f_ = 0;
                arg0->unknown_1046_ |= 0x20;
                return;
            }
            int var2 = 5;
            int var3 = 0;
            if (arg0->unknown_1043_ >= 0 && arg0->unknown_1043_ <= 3) {
                var3 = 1;
            }
            if (var3 == 0) {
                var2 = 6;
                func_0207fdf0((struct Struct_0207fdf0_2*)var0, 0);
            }
            arg0->unknown_103e_ = var2;
            arg0->unknown_103f_ = 0;
            func_02080c68(var0, arg0->unknown_ffe_, 1);
            arg0->unknown_ffc_ = arg0->unknown_ffe_;
            arg0->unknown_100e_ = -1;
            arg0->unknown_103c_ = 1;
            return;
        }
        if (!func_ov003_021766e8(arg0)) {
            return;
        }
#if !defined(jpn)
        arg0->unknown_ff8_ = 0;
#endif
        func_0207fdf0((struct Struct_0207fdf0_2*)var0, 0);
        arg0->unknown_103e_ = 3;
        arg0->unknown_103f_ = 0;
    }
}

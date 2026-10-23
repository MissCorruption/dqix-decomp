#include <globaldefs.h>

struct Struct_ov031_02233524_2 { unsigned short unknown_0_; unsigned short unknown_2_; unsigned short unknown_4_; unsigned short unknown_6_; };
struct Struct_ov031_02249158 { union { Struct_ov031_02233524_2 unknown_0_[4]; unsigned char unknown1_0_[32]; }; };
struct Struct_ov031_02233524 { unsigned short unknown_0_; unsigned short unknown_2_[3]; };
struct Struct_ov031_02249198_2 { Struct_ov031_02233524 unknown_0_[4]; };
struct Struct_ov031_02290cc8_3 { unsigned char unknown_0_; signed char unknown_1_; unsigned char unknown_2_; unsigned char unknown_3_; int unknown_4_; };
extern Struct_ov031_02249158 data_ov031_02249158[];
extern Struct_ov031_02249198_2 data_ov031_02249198[];
extern Struct_ov031_02249198_2 data_ov031_0224919a[];
extern Struct_ov031_02249198_2 data_ov031_0224919c[];
extern Struct_ov031_02249198_2 data_ov031_0224919e[];
extern Struct_ov031_02290cc8_3 data_ov031_02290cc8;
extern "C" int func_ov031_02227570(unsigned int);
extern "C" void func_ov031_02222e20(int);
extern "C" int func_ov031_0223d354(int);
extern "C" int func_ov031_0223d49c(Struct_ov031_02233524_2*);
extern "C" void func_ov031_022237dc(unsigned short, unsigned short, unsigned short, unsigned short);
extern "C" int func_ov031_0223d394(int);
extern "C" void func_ov031_022338b4(int);

// USA: func_ov031_02233524
extern "C" ARM void func_ov031_02233524(void) {
    unsigned int var0 = 0;
    unsigned int var1 = 0;
    do {
        Struct_ov031_02233524_2* var2 = (Struct_ov031_02233524_2*)&data_ov031_02249158[func_ov031_02227570(1)].unknown1_0_[var1];
        if (func_ov031_0223d49c(var2)) {
            func_ov031_02222e20(1);
            data_ov031_02290cc8.unknown_1_ = var0;
            func_ov031_022237dc(
                data_ov031_02249198[func_ov031_02227570(1)].unknown_0_[data_ov031_02290cc8.unknown_1_].unknown_0_,
                data_ov031_0224919c[func_ov031_02227570(1)].unknown_0_[data_ov031_02290cc8.unknown_1_].unknown_0_,
                data_ov031_0224919a[func_ov031_02227570(1)].unknown_0_[data_ov031_02290cc8.unknown_1_].unknown_0_,
                data_ov031_0224919e[func_ov031_02227570(1)].unknown_0_[data_ov031_02290cc8.unknown_1_].unknown_0_);
            return;
        }
        ++var0;
        var1 += sizeof(Struct_ov031_02233524_2);
    } while (var0 < 4);
    if (func_ov031_0223d354(1)) {
        func_ov031_02222e20(1);
        return;
    }
    if (func_ov031_0223d354(2)) {
        func_ov031_02222e20(0);
        return;
    }
    if (func_ov031_0223d394(0x40)) { func_ov031_022338b4(1); return; }
    if (func_ov031_0223d394(0x80)) { func_ov031_022338b4(3); return; }
    if (func_ov031_0223d394(0x20)) { func_ov031_022338b4(0); return; }
    if (func_ov031_0223d394(0x10)) func_ov031_022338b4(2);
}

#include <globaldefs.h>

struct Struct_ov031_02249198_3 { unsigned short unknown_0_, unknown_2_, unknown_4_, unknown_6_; };
struct Struct_ov031_02290cc8_6 { signed char unknown_0_; signed char unknown_1_; unsigned char unknown_2_; unsigned char unknown_3_; int unknown_4_; };
extern Struct_ov031_02249198_3 data_ov031_02249198[][4];
extern Struct_ov031_02290cc8_6 data_ov031_02290cc8;
extern signed char data_ov031_0224912e[][4][4];

extern "C" int func_ov031_02227570(unsigned int);
extern "C" void func_ov031_02236878(int);
extern "C" void func_ov031_022237dc(unsigned short, unsigned short, unsigned short, unsigned short);

// USA: func_ov031_022338b4
extern "C" ARM void func_ov031_022338b4(int arg0) {
    signed char var0 = data_ov031_02290cc8.unknown_1_;
    signed char var1 = data_ov031_0224912e[func_ov031_02227570(1)][var0][arg0];
    if (var1 == -1) return;
    if (var1 == 0) {
        data_ov031_02290cc8.unknown_0_ = var0;
    }
    if (var1 == -2) {
        data_ov031_02290cc8.unknown_1_ = data_ov031_02290cc8.unknown_0_;
    } else {
        data_ov031_02290cc8.unknown_1_ = var1;
    }
    func_ov031_02236878(8);
    func_ov031_022237dc(
        data_ov031_02249198[func_ov031_02227570(1)][data_ov031_02290cc8.unknown_1_].unknown_0_,
        data_ov031_02249198[func_ov031_02227570(1)][data_ov031_02290cc8.unknown_1_].unknown_4_,
        data_ov031_02249198[func_ov031_02227570(1)][data_ov031_02290cc8.unknown_1_].unknown_2_,
        data_ov031_02249198[func_ov031_02227570(1)][data_ov031_02290cc8.unknown_1_].unknown_6_);
}

#include <globaldefs.h>
typedef void (*Type_020439b0)(int, int, int, int);
extern Type_020439b0 data_020f2bf4[][2];
struct Struct_020e2bd8_2;
extern "C" void func_020e2c7c(struct Struct_020e2bd8_2* arg0);
struct Struct_020439b0_4 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    char unknown_4_[0x10];
    int unknown_14_;
    int unknown_18_;
    int unknown_1c_;
    int unknown_20_;
};
// USA: func_020e2c34
extern "C" ARM void func_020e2c34(struct Struct_020439b0_4* arg0) {
    if (arg0->unknown_0_ == 0) return;
    func_020e2c7c((struct Struct_020e2bd8_2*)arg0);
    data_020f2bf4[arg0->unknown_1_][arg0->unknown_2_](arg0->unknown_14_, arg0->unknown_18_, arg0->unknown_1c_, arg0->unknown_20_);
}

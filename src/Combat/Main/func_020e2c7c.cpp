#include <globaldefs.h>
typedef void (*Type_020e2bd8)(int, int);
extern Type_020e2bd8 data_020f2c04[][2];
extern Type_020e2bd8 data_020f2be4[];
struct Struct_020e2bd8_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
};
// USA: func_020e2c7c
extern "C" ARM void func_020e2c7c(struct Struct_020e2bd8_2* arg0) {
    data_020f2c04[arg0->unknown_1_][arg0->unknown_2_](arg0->unknown_4_, arg0->unknown_8_);
    data_020f2be4[arg0->unknown_1_](arg0->unknown_c_, arg0->unknown_10_);
}

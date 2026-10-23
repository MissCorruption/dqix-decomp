#include <globaldefs.h>
typedef int (*Type_020439b0_2)();
typedef void (*Type_020439b0_3)(int);
extern Type_020439b0_2 data_020f2bdc[];
extern Type_020439b0_3 data_020f2bec[];
struct Struct_020439b0 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
};
// USA: func_020e2cc4
extern "C" ARM void func_020e2cc4(struct Struct_020439b0* arg0, int arg1) {
    int var0;
    if (arg0->unknown_0_ == arg1) return;
    arg0->unknown_0_ = arg1;
    var0 = data_020f2bdc[arg0->unknown_1_]();
    if (arg1) var0 |= 1 << arg0->unknown_2_;
    else var0 &= ~(1 << arg0->unknown_2_);
    data_020f2bec[arg0->unknown_1_](var0);
}

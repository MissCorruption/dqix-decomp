#include <globaldefs.h>

struct Struct_ov031_02290c5c_6 { unsigned char unknown_0_; int unknown_4_; };
extern Struct_ov031_02290c5c_6 data_ov031_02290c5c;
extern unsigned char data_ov031_02248dc4[];

extern "C" int func_ov031_02234ff8(int, int, int);

// USA: func_ov031_02229748
extern "C" ARM int func_ov031_02229748(void) {
    unsigned char var0 = data_ov031_02290c5c.unknown_0_;
    int var1 = data_ov031_02290c5c.unknown_4_;
    unsigned char var2 = data_ov031_02248dc4[var0];
    return func_ov031_02234ff8(var1, var2, var2);
}

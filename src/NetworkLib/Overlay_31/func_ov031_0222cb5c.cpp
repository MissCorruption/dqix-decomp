#include <globaldefs.h>

struct Struct_ov031_02248e2c { unsigned char unknown_0_[1]; };
extern const Struct_ov031_02248e2c data_ov031_02248e2c;
struct Struct_ov031_02290c8c_20 { unsigned char unknown_0_[4]; char* unknown_4_; };
extern Struct_ov031_02290c8c_20 data_ov031_02290c8c;
extern "C" int func_ov031_02234ff8(int, int, int);

// USA: func_ov031_0222cb5c
extern "C" ARM void func_ov031_0222cb5c(void) {
    Struct_ov031_02248e2c var0 = data_ov031_02248e2c;
    unsigned char var1 = var0.unknown_0_[0];
    int var2 = *(int*)(data_ov031_02290c8c.unknown_4_ + 8);
    func_ov031_02234ff8(var2, var1, var1);
}

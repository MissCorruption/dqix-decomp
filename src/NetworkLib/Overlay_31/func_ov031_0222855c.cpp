#include <globaldefs.h>

struct Struct_ov031_02248d8c {
    unsigned char unknown_0_[2];
};

struct Struct_ov031_02290c50_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    int unknown_4_;
};

extern const Struct_ov031_02248d8c data_ov031_02248d8c;
extern Struct_ov031_02290c50_2 data_ov031_02290c50;
extern "C" void func_ov031_02234ff8(int, int, int);

// USA: func_ov031_0222855c
extern "C" ARM void func_ov031_0222855c() {
    Struct_ov031_02248d8c var0 = data_ov031_02248d8c;
    unsigned char var1 = var0.unknown_0_[data_ov031_02290c50.unknown_0_];
    func_ov031_02234ff8(data_ov031_02290c50.unknown_4_, var1, var1);
}

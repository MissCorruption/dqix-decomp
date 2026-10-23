#include <globaldefs.h>

struct Struct_ov031_02290cc8_7 {
    unsigned char unknown_0_;
    signed char unknown_1_;
    short unknown_2_;
    void* unknown_4_;
};
extern Struct_ov031_02290cc8_7 data_ov031_02290cc8;
extern unsigned char data_ov031_02249114[4] __attribute__((aligned(4)));
extern "C" void func_ov031_02234ff8(void*, int, int);

// USA: func_ov031_022339a8
extern "C" ARM void func_ov031_022339a8() {
    unsigned char var0[4];
    unsigned char* var1 = var0;
    var0[0] = data_ov031_02249114[0];
    var0[1] = data_ov031_02249114[1];
    var0[2] = data_ov031_02249114[2];
    var0[3] = data_ov031_02249114[3];
    int var2 = var1[data_ov031_02290cc8.unknown_1_];
    func_ov031_02234ff8(data_ov031_02290cc8.unknown_4_, var2, var2);
}

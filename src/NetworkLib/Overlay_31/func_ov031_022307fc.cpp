#include <globaldefs.h>

struct Struct_ov031_02248f78 {
    unsigned char unknown_0_[14];
};
struct Struct_ov031_02249002 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};
struct Struct_ov031_02290ca0_20 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    unsigned short unknown_4_;
    unsigned char unknown_6_[2];
    void* unknown_8_;
};
extern const Struct_ov031_02248f78 data_ov031_02248f78;
extern const Struct_ov031_02249002 data_ov031_02249002[];
extern Struct_ov031_02290ca0_20 data_ov031_02290ca0;
extern "C" void func_ov031_02223720(int, int, int, int);

// USA: func_ov031_022307fc
extern "C" ARM void func_ov031_022307fc(void) {
    Struct_ov031_02248f78 var0 = data_ov031_02248f78;
    int var1 = var0.unknown_0_[data_ov031_02290ca0.unknown_0_];
    if (var1 >= 3) {
        func_ov031_02223720(3, data_ov031_02249002[var1].unknown_0_,
            data_ov031_02249002[var1].unknown_4_, data_ov031_02249002[var1].unknown_2_);
        return;
    }
    Struct_ov031_02249002 var2 = data_ov031_02249002[var1];
    var2.unknown_2_ += data_ov031_02290ca0.unknown_2_ * 29;
    func_ov031_02223720(1, var2.unknown_0_, var2.unknown_4_, var2.unknown_2_);
}

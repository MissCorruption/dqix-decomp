#include <globaldefs.h>

extern "C" int func_ov031_02236878(int arg0);
extern "C" void* func_ov031_0223e218(void* arg0, void* arg1, void* arg2, int arg3);
extern "C" void func_ov031_0222c71c(void);

struct Struct_ov031_0222ca64 {
    unsigned char unknown_0_[0x38];
    void* unknown_38_;
    unsigned char unknown_3c_[0x1d];
    unsigned char unknown_59_;
};
struct Struct_ov031_02290c8c_18 {
    unsigned char unknown_0_[2];
    unsigned short unknown_2_;
    Struct_ov031_0222ca64* unknown_4_;
};
extern Struct_ov031_02290c8c_18 data_ov031_02290c8c;

// USA: func_ov031_0222ca64
extern "C" ARM void func_ov031_0222ca64(void) {
    if (data_ov031_02290c8c.unknown_2_ == 0) {
        if (data_ov031_02290c8c.unknown_4_->unknown_59_ != 0) return;
        func_ov031_02236878(9);
        data_ov031_02290c8c.unknown_4_->unknown_59_ = 1;
    } else {
        func_ov031_02236878(0x13);
        void* var0 = func_ov031_0223e218(NULL, (void*)func_ov031_0222c71c, NULL, 0x78);
        data_ov031_02290c8c.unknown_4_->unknown_38_ = var0;
    }
}

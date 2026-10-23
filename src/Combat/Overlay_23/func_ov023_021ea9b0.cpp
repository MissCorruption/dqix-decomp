#include <globaldefs.h>

struct Struct_ov023_021ea9b0_2 {
    char unknown_0_[0xc];
    unsigned char unknown_c_0_ : 4;
    unsigned char unknown_c_4_ : 1;
};

struct Struct_ov023_021ea9b0 {
    char unknown_0_[0x8];
    Struct_ov023_021ea9b0_2* unknown_8_;
};

extern "C" Struct_ov023_021ea9b0* func_02012fe4(void);
extern "C" void func_ov017_021d6134(void* arg0, int arg1);

// USA: func_ov023_021ea9b0
extern "C" ARM int func_ov023_021ea9b0(void* arg0) {
    func_ov017_021d6134(arg0, func_02012fe4()->unknown_8_->unknown_c_4_);
    return 1;
}

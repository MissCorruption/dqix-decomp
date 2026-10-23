#include <globaldefs.h>

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

struct Struct_ov027_021dcc8c {
    char unknown_0_[0x1320];
    void *unknown_1320_;
};

struct Struct_ov027_021e33e0_12 {
    char unknown_0_[0xc];
    Struct_ov027_021dcc8c *unknown_c_;
};

extern Struct_ov027_021e33e0_12 data_ov027_021e33e0;
unsigned int DisableIRQInterrupts();
unsigned int SetIRQInterruptState(int);
extern "C" void func_020c9be0(void);
extern "C" void func_ov027_021dcc8c(void);

// USA: func_ov027_021dcd20
extern "C" ARM void func_ov027_021dcd20(void) {
    unsigned int var0 = DisableIRQInterrupts();
    if (data_ov027_021e33e0.unknown_c_->unknown_1320_ == 0) {
        func_020c9be0();
    }
    func_ov027_021dcc8c();
    SetIRQInterruptState(var0);
}

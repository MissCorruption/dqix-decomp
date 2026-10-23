#include <globaldefs.h>

unsigned int DisableIRQInterrupts();
unsigned int SetIRQInterruptState(int mask);
extern "C" int func_020d1ee4(int arg0, int arg1, int arg2, int arg3);
extern "C" void func_020bcd30(void* arg0, int arg1);

struct Struct_020bce2c {
    char unknown_0_[0x24];
    int unknown_24_;
    char unknown_28_[0x10];
    int unknown_38_;
    char unknown_3c_[4];
    int unknown_40_;
    int unknown_44_;
};

// USA: func_020bce2c
extern "C" ARM void func_020bce2c(struct Struct_020bce2c* arg0) {
    if (!((arg0->unknown_24_ << 30) >> 31)) {
        return;
    }
    if (arg0->unknown_38_ != 0) {
        int var0 = 1;
        do {
            unsigned int var1 = DisableIRQInterrupts();
            func_020bcd30(arg0, var0);
            SetIRQInterruptState(var1);
        } while (arg0->unknown_38_ != 0);
    }
    func_020d1ee4(arg0->unknown_44_, 0, 1 << arg0->unknown_40_, 0);
}

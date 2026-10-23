#include <globaldefs.h>

unsigned int DisableIRQInterrupts(void);
unsigned int SetIRQInterruptState(int mask);
extern "C" int func_020ce128(void);
extern "C" void func_020ce870(int arg0);

struct Struct_021117ec_6 {
    char unknown_0_[0x20];
    int unknown_20_;
    int unknown_24_;
    int unknown_28_;
};
extern struct Struct_021117ec_6 data_021117ec;

// USA: func_020ce4e8
extern "C" ARM int func_020ce4e8(int arg0, int arg1, int arg2, int arg3, int arg4) {
    int var0 = DisableIRQInterrupts();
    if (func_020ce128() == 0) {
        SetIRQInterruptState(var0);
        return 1;
    }
    int var1 = (arg0 & 0xff) | 0x2006100;
    data_021117ec.unknown_20_ = arg3;
    data_021117ec.unknown_24_ = arg4;
    data_021117ec.unknown_28_ = arg2;
    func_020ce870(var1);
    func_020ce870(0x1010000 | (arg1 & 0xffff));
    SetIRQInterruptState(var0);
    return 0;
}

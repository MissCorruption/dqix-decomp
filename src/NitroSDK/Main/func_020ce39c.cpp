#include <globaldefs.h>

unsigned int DisableIRQInterrupts(void);
unsigned int SetIRQInterruptState(int mask);
extern "C" int func_020ce128(void);
extern "C" void func_020ce870(int arg0);
extern "C" void func_020c976c(int);
extern "C" void func_020ce234(int arg0, int* arg1);

typedef void (*Type_01ff8300_3)(int result, int* arg);

struct Struct_020ce308 {
    int unknown_0_;
    Type_01ff8300_3 unknown_4_;
    void* unknown_8_;
    void* unknown_c_;
};

struct Struct_021117ec_5 {
    char unknown_0_[0x1c];
    Struct_020ce308 unknown_1c_;
};

extern Struct_021117ec_5 data_021117ec;

// USA: func_020ce39c
extern "C" ARM void func_020ce39c(int* arg0, int arg1) {
    volatile int var0;
    int var1;
    for (;;) {
        unsigned var2 = DisableIRQInterrupts();
        if (!func_020ce128()) {
            SetIRQInterruptState(var2);
            continue;
        }
        var0 = -0x10000;
        data_021117ec.unknown_1c_.unknown_4_ = func_020ce234;
        data_021117ec.unknown_1c_.unknown_8_ = (void*)&var0;
        for (var1 = 0; var1 < arg1; var1++) {
            func_020ce870(arg0[var1]);
        }
        SetIRQInterruptState(var2);
        while (var0 == -0x10000) {
            func_020c976c(0xa3a47);
        }
        if (var0 == 0) {
            return;
        }
        func_020c976c(0xa3a47);
    }
}

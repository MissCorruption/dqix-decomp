#include <globaldefs.h>

unsigned int DisableIRQInterrupts(void);
unsigned int SetIRQInterruptState(int mask);

struct Struct_020ceeb4 {
    int unknown_0_;
    int unknown_4_;
    struct Struct_020ceeb4* unknown_8_;
};

// USA: func_020ceeb4
extern "C" ARM void func_020ceeb4(struct Struct_020ceeb4** arg0, struct Struct_020ceeb4* arg1) {
    unsigned int var0;
    struct Struct_020ceeb4* var1;
    struct Struct_020ceeb4* var2;
    if (arg0 == NULL) {
        return;
    }
    var0 = DisableIRQInterrupts();
    var1 = *arg0;
    var2 = var1;
    if (var1 != NULL) {
        do {
            if (var1 == arg1) {
                if (var1 == var2) {
                    *arg0 = var1->unknown_8_;
                } else {
                    var2->unknown_8_ = var1->unknown_8_;
                }
                break;
            }
            var2 = var1;
            var1 = var1->unknown_8_;
        } while (var1 != NULL);
    }
    SetIRQInterruptState(var0);
}

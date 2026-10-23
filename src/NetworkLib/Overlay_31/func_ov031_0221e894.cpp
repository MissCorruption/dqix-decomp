#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"

struct Struct_ov031_0224f4c0_2 {
    void (*unknown_0_)(int);
    char unknown_4_[4];
    void* unknown_8_;
    void (*unknown_c_)(void* context);
};

extern Struct_ov031_0224f4c0_2 data_ov031_0224f4c0;
extern int data_ov031_0224f4e0;
extern "C" int func_ov031_0221f190();
extern "C" int func_020c7ea0(void* arg0, int* arg1, int arg2);

// USA: func_ov031_0221e894
extern "C" THUMB int func_ov031_0221e894() {
    int var0 = 1;
    int var1 = -1;
    if (data_ov031_0224f4c0.unknown_c_ == NULL) return var1;
    if (func_ov031_0221f190() == 0) return -1;
    int var2;
    do {
        func_020c7ea0(&data_ov031_0224f4e0, &var2, 1);
        switch (var2) {
        case 4:
        case 5:
            break;
        case 20:
            var0 = 0;
            var1 = 0;
            data_ov031_0224f4c0.unknown_c_(data_ov031_0224f4c0.unknown_8_);
            break;
        case 0:
        case 1:
        case 2:
        case 3:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        default:
            var0 = 0;
            break;
        }
    } while (var0 != 0);
    int var3 = DisableIRQInterrupts();
    data_ov031_0224f4c0.unknown_0_ = NULL;
    data_ov031_0224f4c0.unknown_c_ = NULL;
    SetIRQInterruptState(var3);
    return var1;
}

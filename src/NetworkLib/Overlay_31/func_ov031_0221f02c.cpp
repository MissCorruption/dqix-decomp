#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"
#include "NitroSDK/Memory.h"

struct Struct_ov031_0224f620_3 {
    int unknown_0_, unknown_4_, unknown_8_, unknown_c_;
    unsigned char* unknown_10_;
    unsigned char* unknown_14_;
    int unknown_18_;
};

extern Struct_ov031_0224f620_3 data_ov031_0224f620;
extern unsigned char data_ov031_0224f648[6];
extern unsigned char data_ov031_0224f650[0x20];
extern unsigned char data_ov031_02245fb0[];
extern unsigned char data_ov031_02245fb8[];

extern "C" int func_ov031_0220cdd4(int, int, int);
extern "C" int func_ov031_0221ef80(void);

// USA: func_ov031_0221f02c
extern "C" THUMB int func_ov031_0221f02c(const unsigned char* arg0, const unsigned char* arg1, int arg2,
                                         int arg3) {
    int var0 = DisableIRQInterrupts();
    int var1;
    data_ov031_0224f620.unknown_4_ = arg3;
    if (arg0 != NULL) {
        for (var1 = 0; var1 < 6; var1++) {
            data_ov031_0224f648[var1] = *arg0++;
        }
        data_ov031_0224f620.unknown_10_ = data_ov031_0224f648;
    } else {
        VectorizedMemset(data_ov031_0224f648, 0xff, 6);
        data_ov031_0224f620.unknown_10_ = data_ov031_02245fb0;
    }
    if (arg1 != NULL && arg2 > 0 && arg2 <= 0x20) {
        for (var1 = 0; var1 < arg2; var1++) {
            data_ov031_0224f650[var1] = *arg1++;
        }
        for (; var1 < 0x20; var1++) {
            data_ov031_0224f650[var1] = 0;
        }
        data_ov031_0224f620.unknown_14_ = data_ov031_0224f650;
    } else {
        VectorizedMemset(data_ov031_0224f650, 0xff, 0x20);
        data_ov031_0224f620.unknown_14_ = data_ov031_02245fb8;
    }
    if (data_ov031_0224f620.unknown_18_ == 3) {
        if (func_ov031_0220cdd4((int)data_ov031_0224f620.unknown_10_, (int)data_ov031_0224f620.unknown_14_,
                                        data_ov031_0224f620.unknown_4_) == 3) {
            data_ov031_0224f620.unknown_18_ = 6;
            SetIRQInterruptState(var0);
            return 1;
        }
    } else if (func_ov031_0221ef80() == 1) {
        data_ov031_0224f620.unknown_18_ = 6;
        SetIRQInterruptState(var0);
        return 1;
    }
    SetIRQInterruptState(var0);
    return 0;
}

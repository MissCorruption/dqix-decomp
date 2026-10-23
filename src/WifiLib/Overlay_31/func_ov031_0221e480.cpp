#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

struct Struct_ov031_0224b070_2 {
    unsigned char unknown_0_[0x18];
    unsigned int unknown_18_;
    unsigned int unknown_1c_;
    unsigned int unknown_20_;
};

extern Struct_ov031_0224b070_2 data_ov031_0224b070;
extern unsigned char data_ov031_0224b078[0x58];
extern int data_ov031_0224c9d0;
extern "C" unsigned int func_ov031_0221e5d0(unsigned int);
extern "C" int func_ov031_0220764c(void*);

// USA: func_ov031_0221e480
extern "C" THUMB int func_ov031_0221e480(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
    data_ov031_0224b070.unknown_18_ = func_ov031_0221e5d0(arg0);
    data_ov031_0224b070.unknown_1c_ = func_ov031_0221e5d0(arg1);
    data_ov031_0224b070.unknown_20_ = func_ov031_0221e5d0(arg2);
    if (func_ov031_0220764c(data_ov031_0224b078) < 0) return -1;
    if (data_ov031_0224c9d0 == 0) do {
        SleepCurrentContext(100);
    } while (data_ov031_0224c9d0 == 0);
    return 0;
}

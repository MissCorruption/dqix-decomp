#include <globaldefs.h>
#include "NitroSDK/Timing.h"
#include "NitroSDK/ProcessorContext.h"

struct Struct_ov031_0221fb90 { unsigned char unknown_0_[0xc0]; };
struct Struct_ov031_0224f670_14 { unsigned char unknown_0_[0x10]; int unknown_10_; unsigned char unknown_14_[4]; int unknown_18_; unsigned char unknown_1c_[4]; int unknown_20_; int unknown_24_; unsigned char unknown_28_[0x34]; Struct_ov031_0221fb90* unknown_5c_; };
struct Struct_ov031_0224b114 { unsigned char unknown_0_[0xc]; unsigned int unknown_c_; };
extern Struct_ov031_0224f670_14 data_ov031_0224f670;
extern Struct_ov031_0224b114 data_ov031_0224b114;
extern unsigned char data_ov031_0224b128[];
extern "C" int func_ov031_0221f854(void*, void*, int);
extern "C" void func_ov031_0221fa88(int);
extern "C" unsigned int func_ov031_02222870();
extern "C" void* func_ov031_0221fa20();
extern "C" int func_ov031_0220764c(void*);

// USA: func_ov031_0221fb90
extern "C" THUMB int func_ov031_0221fb90() {
    int var0 = 1;
    int var1 = -2;
    Struct_ov031_0221fb90* var2 = data_ov031_0224f670.unknown_5c_ + data_ov031_0224f670.unknown_18_;
    Alarm var3;
    if (var2 == NULL) return 0;
    if (func_ov031_0221f854(var2, 0, 0x30000) == 0) return -2;
    ZeroInitializeAlarm(&var3);
    SetTimeout(&var3, 0x3fec42ULL, (Alarm::PFNCompletion)func_ov031_0221fa88, (ProcessorContext**)18);
    do {
        if (func_ov031_02222870() >= data_ov031_0224b114.unknown_c_) { var1 = -3; break; }
        if (data_ov031_0224f670.unknown_10_ != 0) { var1 = -8; break; }
        SleepCurrentContext(10);
        int var4 = (int)func_ov031_0221fa20();
        if (var4 != 0) { do {
            switch (var4) {
            case 4: case 5: case 18: case 19: break;
            case 12: var0 = 0; var1 = 1; break;
            case 13:
                if (data_ov031_0224f670.unknown_10_ != 0) { var0 = 0; var1 = -8; }
                else if (func_ov031_0221f854(var2, 0, 0x30000) == 0) return var1;
                break;
            default: var0 = 0; break;
            }
            var4 = (int)func_ov031_0221fa20();
        } while (var4 != 0); }
    } while (var0 != 0);
    CancelAlarm(&var3);
    while (func_ov031_0221fa20() != 0) {}
    if (var1 > 0) {
        data_ov031_0224f670.unknown_20_ = 1;
        if (func_ov031_0220764c(data_ov031_0224b128) < 0) var1 = -2;
        else data_ov031_0224f670.unknown_24_ = 1;
    }
    return var1;
}

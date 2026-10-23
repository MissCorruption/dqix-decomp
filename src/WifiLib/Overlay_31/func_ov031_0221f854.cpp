#include <globaldefs.h>
#include "NitroSDK/Memory.h"
#include "NitroSDK/Interrupts.h"

#if defined(jpn)
#define func_020ca408 func_020cbed4
#endif

struct Struct_ov031_0224f670_6 {
    char unknown_0_[0x28];
    void* unknown_28_;
    int unknown_2c_;
    char unknown_30_[0x1c];
    void* unknown_4c_;
    char unknown_50_[8];
    int unknown_58_;
};
extern Struct_ov031_0224f670_6 data_ov031_0224f670;
extern "C" void func_020ca408(void*, void*, int);
extern "C" THUMB int func_ov031_0221f630();
extern "C" int func_ov031_0220d010(void*, void*, int);

// USA: func_ov031_0221f854
extern "C" THUMB int func_ov031_0221f854(void* arg0, void* arg1, int arg2) {
    int var0 = DisableIRQInterrupts();
    data_ov031_0224f670.unknown_58_ = arg2;
    if (arg1) VectorizedInvertedMemcpy(arg1, data_ov031_0224f670.unknown_28_, 96);
    else VectorizedMemset(data_ov031_0224f670.unknown_28_, 0, 96);
    func_020ca408(arg0, data_ov031_0224f670.unknown_4c_, 192);
    if (func_ov031_0221f630() == 1) {
        data_ov031_0224f670.unknown_2c_ = 8;
        SetIRQInterruptState(var0);
        return 1;
    }
    if (data_ov031_0224f670.unknown_2c_ == 3 && func_ov031_0220d010(data_ov031_0224f670.unknown_4c_, data_ov031_0224f670.unknown_28_, data_ov031_0224f670.unknown_58_) == 3) {
        data_ov031_0224f670.unknown_2c_ = 8;
        SetIRQInterruptState(var0);
        return 1;
    }
    SetIRQInterruptState(var0);
    return 0;
}

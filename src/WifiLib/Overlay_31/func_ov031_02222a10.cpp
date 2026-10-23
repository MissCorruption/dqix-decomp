#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

struct Struct_ov031_0224f670_20 {
    unsigned char unknown_0_[0xc];
    void (*unknown_c_)(void*);
    int unknown_10_;
    unsigned char unknown_14_[0x1c];
    void* unknown_30_;
    int unknown_34_;
    int unknown_38_;
    unsigned char unknown_3c_[0x28];
    int unknown_64_;
    unsigned char unknown_68_[0xc];
    int unknown_74_;
};

extern Struct_ov031_0224f670_20 data_ov031_0224f670;
extern ProcessorContext data_ov031_0224f71c;
bool IsContextInactive(ProcessorContext* context);
extern "C" void func_ov031_02222af0();
extern "C" int func_ov031_0221fb38();

// USA: func_ov031_02222a10
extern "C" THUMB int func_ov031_02222a10() {
    int var0;
    if (data_ov031_0224f670.unknown_64_) {
        var0 = data_ov031_0224f670.unknown_38_;
        data_ov031_0224f670.unknown_10_ = 1;
        while (data_ov031_0224f670.unknown_38_ >= 1 && data_ov031_0224f670.unknown_38_ <= 5) {
            SleepCurrentContext(100);
        }
        SleepCurrentContext(500);
        if (!IsContextInactive(&data_ov031_0224f71c)) {
            do {
                MarkContextReadyAndSwitch(&data_ov031_0224f71c);
                AwaitContextCompletion(&data_ov031_0224f71c);
            } while (!IsContextInactive(&data_ov031_0224f71c));
        }
        if (data_ov031_0224f670.unknown_30_) {
            data_ov031_0224f670.unknown_c_(data_ov031_0224f670.unknown_30_);
            data_ov031_0224f670.unknown_30_ = 0;
        }
        data_ov031_0224f670.unknown_64_ = 0;
        if (var0 != data_ov031_0224f670.unknown_38_) func_ov031_02222af0();
    }
    if (data_ov031_0224f670.unknown_74_ > 0) {
        int var1 = func_ov031_0221fb38();
        data_ov031_0224f670.unknown_74_ = 0;
        return var1;
    }
    return -10;
}

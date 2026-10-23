#include <globaldefs.h>
#include "NitroSDK/Timing.h"

struct Struct_ov031_022037a8 {
    unsigned char unknown_0_[8];
    unsigned char unknown_8_;
    unsigned char unknown_9_[0x1f];
    unsigned int unknown_28_;
    unsigned short unknown_2c_;
    unsigned short unknown_2e_;
    unsigned int unknown_30_;
    int unknown_34_;
};

struct Struct_ov031_0224c980_10 {
    unsigned char unknown_0_[0x48];
    int (*unknown_48_)();
};

extern Struct_ov031_0224c980_10 data_ov031_0224c980;
extern "C" int func_ov031_0220376c(int, int, int, int, int, int);
extern "C" void func_ov031_02200264();

// USA: func_ov031_022037a8
extern "C" ARM unsigned int func_ov031_022037a8(unsigned char* arg0, unsigned int arg1, unsigned char* arg2, unsigned int arg3, Struct_ov031_022037a8* arg4) {
    unsigned int var0 = 0;
    unsigned int var1;
    int var2 = 0;
    arg4->unknown_34_ = 0;
    int var3 = GetCurrentTimestamp() >> 16;
    while (data_ov031_0224c980.unknown_48_() != 0 && arg1 != 0 && arg4->unknown_8_ == 4 && (int)(GetCurrentTimestamp() >> 16) - var3 < 159) {
        unsigned int var4 = arg4->unknown_28_;
        func_ov031_0220376c((int)arg0, arg1, (int)arg2, arg3, (int)arg4, var2);
        int var5 = GetCurrentTimestamp() >> 16;
        while (1) {
            func_ov031_02200264();
            if (data_ov031_0224c980.unknown_48_() == 0 || arg4->unknown_8_ != 4 || arg4->unknown_28_ == arg4->unknown_30_ || (int)(GetCurrentTimestamp() >> 16) - var5 >= 15) break;
            if (var2 != 0 && arg4->unknown_2c_ != 0) break;
        }
        var1 = arg4->unknown_30_ - var4;
        if (var1 > arg4->unknown_28_ - var4) var1 = 0;
        var0 += var1;
        if (var1 != 0) var3 = GetCurrentTimestamp() >> 16;
        arg4->unknown_28_ = arg4->unknown_30_;
        if (arg4->unknown_8_ == 4 && arg4->unknown_2c_ == 0 && var1 == 0) {
            if (var2 == 0) {
                int var6 = GetCurrentTimestamp() >> 16;
                while (data_ov031_0224c980.unknown_48_() != 0 && (int)(GetCurrentTimestamp() >> 16) - var6 < 15) {
                    func_ov031_02200264();
                    if (arg4->unknown_2c_ != 0) break;
                }
                if (arg4->unknown_2c_ == 0) var2 = 1;
            }
        } else {
            var2 = 0;
        }
        {
            if (var1 < arg1) {
                arg0 += var1;
                arg1 -= var1;
            } else {
                unsigned int var7 = var1 - arg1;
                arg0 = arg2 + var7;
                arg2 = NULL;
                arg1 = arg3 - var7;
                arg3 = 0;
            }
        }
    }
    return var0;
}

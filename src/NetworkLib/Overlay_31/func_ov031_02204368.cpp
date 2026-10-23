#include <globaldefs.h>
#include "NitroSDK/Timing.h"

struct Struct_ov031_02204368 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned char unknown_8_[8];
    unsigned char unknown_10_[4];
    unsigned char unknown_14_[8];
    unsigned short unknown_1c_[3];
    unsigned char unknown_22_[0xec - 0x22];
    unsigned char unknown_ec_[4];
    unsigned char unknown_f0_[1];
};
struct Struct_ov031_0224c980_15 {
    unsigned char unknown_0_[0x1c];
    unsigned int unknown_1c_;
    unsigned int unknown_20_;
    unsigned char unknown_24_[8];
    unsigned int unknown_2c_;
    unsigned char unknown_30_[4];
    unsigned int unknown_34_;
    unsigned char unknown_38_[0x10];
    int (*unknown_48_)();
    unsigned int unknown_4c_;
    unsigned int unknown_50_;
    unsigned char unknown_54_[0xc];
    unsigned int unknown_60_;
    unsigned int unknown_64_;
};
extern Struct_ov031_0224c980_15 data_ov031_0224c980;
extern unsigned short data_ov031_0224ce68[3];
extern "C" int func_ov031_02203b1c();
extern "C" void func_ov031_02200264();
extern "C" int func_ov031_0220357c(unsigned int *);
extern "C" int func_ov031_02200824(unsigned short *, unsigned short *);
extern "C" void func_ov031_02203670(int);
#define READ_NETWORK32_02204368(p) (((unsigned int)(unsigned short)(((p)[0] << 8) | (p)[1]) << 16) | (unsigned short)(((p)[2] << 8) | (p)[3]))
#define SWAP_NETWORK16_02204368(v) ((unsigned short)(((v) >> 8) | ((v) << 8)))

// USA: func_ov031_02204368
extern "C" ARM int func_ov031_02204368(int arg0, int arg1) {
    int var0 = (arg1 + 1) * 15;
    int var1 = (int)(GetCurrentTimestamp() >> 16);
    int var2 = 0;
    while (data_ov031_0224c980.unknown_48_() != 0 && var2 == 0 && (int)(GetCurrentTimestamp() >> 16) - var1 < var0) {
        if (!func_ov031_02203b1c()) {
            func_ov031_02200264();
            continue;
        }
        unsigned int var3;
        unsigned char* var4 = (unsigned char*)func_ov031_0220357c(&var3);
        Struct_ov031_02204368* var5 = (Struct_ov031_02204368*)var4;
        if (var3 > 0xf0 && var5->unknown_0_ == 2 &&
            arg0 == ((unsigned int)SWAP_NETWORK16_02204368(var5->unknown_4_) << 16 |
                             SWAP_NETWORK16_02204368(var5->unknown_6_)) &&
            !func_ov031_02200824(var5->unknown_1c_, data_ov031_0224ce68)) {
            unsigned char* var6;
            unsigned int var7 = READ_NETWORK32_02204368(var5->unknown_10_);
            var6 = var4 + var3;
            var2 = 3;
            unsigned char* var8 = var4 + 0xec;
            if (*var8++ == 0x63 && *var8++ == 0x82 && *var8++ == 0x53 && *var8++ == 0x63) {
                int var9;
                while (var8 < var6 && (var9 = *var8++) != 0xff) {
                    if (var9 == 0) continue;
                    switch (var9) {
                    case 1:
                        data_ov031_0224c980.unknown_1c_ = READ_NETWORK32_02204368(var8 + 1);
                        break;
                    case 3:
                        data_ov031_0224c980.unknown_2c_ = READ_NETWORK32_02204368(var8 + 1);
                        break;
                    case 6:
                        if (var8[0] < 8) data_ov031_0224c980.unknown_64_ = 0;
                        else data_ov031_0224c980.unknown_64_ = READ_NETWORK32_02204368(var8 + 5);
                        data_ov031_0224c980.unknown_60_ = READ_NETWORK32_02204368(var8 + 1);
                        break;
                    case 51:
                        data_ov031_0224c980.unknown_4c_ = READ_NETWORK32_02204368(var8 + 1);
                        break;
                    case 53:
                        switch (var8[1]) {
                        case 2:
                            var2 = 1;
                            data_ov031_0224c980.unknown_34_ = var7;
                            break;
                        case 5:
                            var2 = 2;
                            data_ov031_0224c980.unknown_50_ = var7;
                            break;
                        default:
                            break;
                        }
                        break;
                    case 54:
                        data_ov031_0224c980.unknown_20_ = READ_NETWORK32_02204368(var8 + 1);
                        break;
                    default:
                        break;
                    }
                    var8 += var8[0] + 1;
                }
            }
        }
        func_ov031_02203670(var3);
    }
    return var2;
}

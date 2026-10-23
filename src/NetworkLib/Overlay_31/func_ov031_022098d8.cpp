#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Struct_ov031_022098d8 {
    char unknown_0_[0x1d4];
    void* unknown_1d4_;
    char unknown_1d8_[0x10c];
    char unknown_2e4_[8];
    char unknown_2ec_[0x168];
    unsigned char unknown_454_;
    unsigned char unknown_455_;
    unsigned char unknown_456_;
    char unknown_457_[0x155];
    unsigned char unknown_5ac_;
    char unknown_5ad_[0x277];
    unsigned char* unknown_824_;
    unsigned int unknown_828_;
    unsigned int unknown_82c_;
};
extern "C" unsigned int func_ov031_0220940c(Struct_ov031_022098d8*, unsigned char*);
extern "C" void func_ov031_02208b78(Struct_ov031_022098d8*, unsigned char*);
extern "C" void func_ov031_0220911c(Struct_ov031_022098d8*, unsigned char*);
extern "C" void func_ov031_02208940(Struct_ov031_022098d8*, unsigned char*);
extern "C" void func_ov031_0220871c(Struct_ov031_022098d8*, unsigned char*);
extern "C" void func_ov031_02209310(Struct_ov031_022098d8*, unsigned char*);
extern "C" void func_ov031_022098ac(void*, int, int);
extern void (*data_ov031_0224c9c0)(unsigned char*);

// USA: func_ov031_022098d8
extern "C" ARM void func_ov031_022098d8(Struct_ov031_022098d8* arg0, unsigned char* arg1) {
    unsigned char var0 = arg0->unknown_455_;
    if (var0 == 9) {
        data_ov031_0224c9c0(arg1);
        return;
    }
    unsigned char* var1;
    unsigned int var2 = (arg1[3] << 8) + arg1[4] + 5;
    unsigned int var3 = arg1[0];
    if ((((unsigned char)(var0 + 0xf9) <= 1) && var3 != 21) || (var3 == 21 && var2 > 7)) {
        var2 = func_ov031_0220940c(arg0, arg1);
        var0 = arg0->unknown_455_;
        if (var0 == 9) {
            data_ov031_0224c9c0(arg1);
            return;
        }
    }
    var1 = arg1 + 5;
    var2 -= 5;
    switch (var3) {
    case 20:
        if (!arg0->unknown_1d4_) arg0->unknown_455_ = 9;
        else {
            VectorizedMemset(arg0->unknown_2e4_, 0, 8);
            arg0->unknown_455_ = 7;
        }
        break;
    case 21:
        if (var1[0] == 2) arg0->unknown_455_ = 9;
        break;
    case 22:
        do {
            int var4 = var1[0];
            unsigned int var5 = var1[2] << 8;
            unsigned int var6 = (var1[1] << 16) + var5 + var1[3];
            var1 += 4;
            switch (var4) {
            case 1:
                if (arg0->unknown_454_ && var0 == 0) func_ov031_02208b78(arg0, var1);
                break;
            case 16:
                func_ov031_0220911c(arg0, var1);
                break;
            case 2:
                func_ov031_02208940(arg0, var1);
                break;
            case 11:
                func_ov031_0220871c(arg0, var1);
                arg0->unknown_5ac_ = 0;
                break;
            case 13:
                arg0->unknown_5ac_ = 1;
                break;
            case 14:
                arg0->unknown_455_ = 4;
                break;
            case 20:
                func_ov031_02209310(arg0, var1);
                break;
            default:
                arg0->unknown_455_ = 9;
                break;
            }
            func_ov031_022098ac(arg0, (int)(var1 - 4), var6 + 4);
            var1 += var6;
            var2 -= var6 + 4;
            if (!var2) break;
            var0 = arg0->unknown_455_;
        } while (var0 != 9);
        break;
    case 23:
        arg0->unknown_824_ = arg1;
        arg0->unknown_82c_ = 5;
        arg0->unknown_828_ = var2 + 5;
        arg0->unknown_456_ = 1;
        return;
    default:
        arg0->unknown_455_ = 9;
        break;
    }
    data_ov031_0224c9c0(arg1);
}

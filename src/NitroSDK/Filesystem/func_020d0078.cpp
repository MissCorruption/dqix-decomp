#include <globaldefs.h>

#include "Filesystem/BackupDevice.h"
#include "NitroSDK/Filesystem/FSInnerDefs.h"
#include "NitroSDK/Memory.h"

// USA: func_020d0078
extern "C" ARM void func_020d0078(unsigned int arg0) {
    Arm7CardReadData *const var0 = data_021118e0.pSharedData;

    VectorizedMemset(&var0->unknown_4_.unknown_14_, 0, sizeof(var0->unknown_4_.unknown_14_));
    var0->unknown_4_.unknown_0_              = arg0;
    var0->unknown_4_.unknown_14_.unknown_40_ = 0x203f;
    if (arg0 != 0) {
        const unsigned int var1 = 1 << (((int) arg0 >> 8) & 0xff);
        const int var2        = arg0 & 0xff;
        const int var3        = ((int) arg0 >> 16) & 0xff;

        var0->unknown_4_.unknown_14_.unknown_0_     = var1;
        var0->unknown_4_.unknown_14_.unknown_3c_ = 0xff;
        if (var2 == 1) {
            switch (var1) {
                default: goto invalidType;
                case 0x200:
                    var0->unknown_4_.unknown_14_.unknown_c_        = 0x10;
                    var0->unknown_4_.unknown_14_.unknown_10_    = 1;
                    var0->unknown_4_.unknown_14_.unknown_14_ = 5;
                    var0->unknown_4_.unknown_14_.unknown_3c_   = 0xf0;
                    break;
                case 0x2000:
                    var0->unknown_4_.unknown_14_.unknown_c_        = 0x20;
                    var0->unknown_4_.unknown_14_.unknown_10_    = 2;
                    var0->unknown_4_.unknown_14_.unknown_14_ = 5;
                    var0->unknown_4_.unknown_14_.unknown_3c_   = 0;
                    break;
                case 0x10000:
                    var0->unknown_4_.unknown_14_.unknown_c_        = 0x80;
                    var0->unknown_4_.unknown_14_.unknown_10_    = 2;
                    var0->unknown_4_.unknown_14_.unknown_14_ = 10;
                    var0->unknown_4_.unknown_14_.unknown_3c_   = 0;
                    break;
                case 0x20000:
                    var0->unknown_4_.unknown_14_.unknown_c_        = 0x100;
                    var0->unknown_4_.unknown_14_.unknown_10_    = 3;
                    var0->unknown_4_.unknown_14_.unknown_14_ = 5;
                    var0->unknown_4_.unknown_14_.unknown_3c_   = 0;
                    break;
            }
            var0->unknown_4_.unknown_14_.unknown_4_ = var0->unknown_4_.unknown_14_.unknown_c_;
            var0->unknown_4_.unknown_14_.unknown_40_ |= 0x40;
            var0->unknown_4_.unknown_14_.unknown_40_ |= 0x4300;
        } else if (var2 == 2) {
            switch (var1) {
                default: goto invalidType;
                case 0x40000:
                case 0x80000:
                case 0x100000:
                    var0->unknown_4_.unknown_14_.unknown_18_    = 25;
                    var0->unknown_4_.unknown_14_.unknown_1c_ = 300;
                    var0->unknown_4_.unknown_14_.unknown_38_    = 300;
                    var0->unknown_4_.unknown_14_.unknown_28_  = 5000;
                    var0->unknown_4_.unknown_14_.unknown_40_ |= 0x480;
                    break;
                case 0x200000:
                    var0->unknown_4_.unknown_14_.unknown_18_      = 23;
                    var0->unknown_4_.unknown_14_.unknown_1c_   = 300;
                    var0->unknown_4_.unknown_14_.unknown_28_    = 500;
                    var0->unknown_4_.unknown_14_.unknown_2c_ = 5000;
                    var0->unknown_4_.unknown_14_.unknown_20_      = 10000;
                    var0->unknown_4_.unknown_14_.unknown_24_   = 60000;
                    var0->unknown_4_.unknown_14_.unknown_3c_      = 0;
                    var0->unknown_4_.unknown_14_.unknown_40_ |= 0x80;
                    var0->unknown_4_.unknown_14_.unknown_40_ |= 0x5400;
                    break;
                case 0x400000:
                    var0->unknown_4_.unknown_14_.unknown_28_       = 600;
                    var0->unknown_4_.unknown_14_.unknown_2c_    = 3000;
                    var0->unknown_4_.unknown_14_.unknown_30_    = 70;
                    var0->unknown_4_.unknown_14_.unknown_34_ = 150;
                    var0->unknown_4_.unknown_14_.unknown_20_         = 23000;
                    var0->unknown_4_.unknown_14_.unknown_24_      = 800000;
                    var0->unknown_4_.unknown_14_.unknown_3c_         = 0;
                    var0->unknown_4_.unknown_14_.unknown_8_         = 0x1000;
                    var0->unknown_4_.unknown_14_.unknown_40_ |= 0x1000;
                    var0->unknown_4_.unknown_14_.unknown_40_ |= 0xc000;
                    break;
                case 0x800000:
                    if (var3 == 0) {
                        var0->unknown_4_.unknown_14_.unknown_28_    = 1000;
                        var0->unknown_4_.unknown_14_.unknown_2c_ = 3000;
                        var0->unknown_4_.unknown_14_.unknown_20_      = 68000;
                        var0->unknown_4_.unknown_14_.unknown_24_   = 160000;
                        var0->unknown_4_.unknown_14_.unknown_3c_      = 0;
                        var0->unknown_4_.unknown_14_.unknown_40_ |= 0x1000;
                        var0->unknown_4_.unknown_14_.unknown_40_ |= 0x4000;
                    } else if (var3 == 1) {
                        var0->unknown_4_.unknown_14_.unknown_28_    = 1000;
                        var0->unknown_4_.unknown_14_.unknown_2c_ = 3000;
                        var0->unknown_4_.unknown_14_.unknown_20_      = 68000;
                        var0->unknown_4_.unknown_14_.unknown_24_   = 160000;
                        var0->unknown_4_.unknown_14_.unknown_3c_      = 0x84;
                        var0->unknown_4_.unknown_14_.unknown_40_ |= 0x1000;
                        var0->unknown_4_.unknown_14_.unknown_40_ |= 0x4000;
                    }
                    break;
            }
            var0->unknown_4_.unknown_14_.unknown_4_      = 0x10000;
            var0->unknown_4_.unknown_14_.unknown_c_        = 0x100;
            var0->unknown_4_.unknown_14_.unknown_10_    = 3;
            var0->unknown_4_.unknown_14_.unknown_14_ = 5;
            var0->unknown_4_.unknown_14_.unknown_40_ |= 0xb40;
        } else if (var2 == 3) {
            switch (var1) {
                default: goto invalidType;
                case 0x2000:
                case 0x8000: break;
            }
            var0->unknown_4_.unknown_14_.unknown_c_      = var1;
            var0->unknown_4_.unknown_14_.unknown_4_    = var1;
            var0->unknown_4_.unknown_14_.unknown_10_  = 2;
            var0->unknown_4_.unknown_14_.unknown_3c_ = 0;
            var0->unknown_4_.unknown_14_.unknown_40_ |= 0x40;
            var0->unknown_4_.unknown_14_.unknown_40_ |= 0x4300;
        } else {
        invalidType:
            var0->unknown_4_.unknown_0_                 = 0;
            var0->unknown_4_.unknown_14_.unknown_0_       = 0;
            data_021118e0.pSharedData->unknown_0 = 3;
            return;
        }
    }
}

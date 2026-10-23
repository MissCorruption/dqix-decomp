#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int func_ov003_02171df0(unsigned char* arg0);
extern "C" int func_02001aec(void* arg0, void* arg1, int arg2);

struct Struct_ov003_02171e1c {
    unsigned char unknown_0_[6];
    unsigned char unknown_6_;
    unsigned char unknown_7_;
};

struct Struct_ov003_02171e1c_2 {
    unsigned char unknown_0_[0x8];
    Struct_ov003_02171e1c unknown_8_[0x32];
    unsigned char unknown_198_[0x198 - (0x8 + 0x32 * 0x8)];
    unsigned char unknown1_198_;
};

// USA: func_ov003_02171e1c
extern "C" ARM void func_ov003_02171e1c(Struct_ov003_02171e1c_2* arg0, unsigned char* arg1) {
    if (arg1 == 0) return;
    if (func_ov003_02171df0(arg1) != 0) return;
    {
        Struct_ov003_02171e1c* var0 = 0;
        int var1 = 0;
        Struct_ov003_02171e1c* var2 = arg0->unknown_8_;
        for (int var3 = 0; var3 < 0x32; var3++, var2++) {
            int var4 = var2->unknown_6_;
            if (var4 != 0 && func_02001aec(var2, arg1, 6) == 0) {
                var0 = var2;
                var1 = var4;
                var2->unknown_6_ = 0x32;
                break;
            }
        }
        if (var1 == 0x32) return;
        if (var1 > 0) {
            Struct_ov003_02171e1c* var5 = arg0->unknown_8_;
            for (int var6 = 0; var6 < 0x32; var6++, var5++) {
                if (var5->unknown_6_ > var1 && var5 != var0) {
                    var5->unknown_6_--;
                }
            }
            return;
        }
    }
    {
        Struct_ov003_02171e1c* var7 = 0;
        Struct_ov003_02171e1c* var8 = arg0->unknown_8_;
        for (int var9 = 0; var9 < 0x32; var9++, var8++) {
            if (var8->unknown_6_ != 0) {
                if (--var8->unknown_6_ == 0) {
                    memset(var8, 0, 6);
                    arg0->unknown1_198_--;
                }
            }
            if (var8->unknown_6_ == 0 && var7 == 0) var7 = var8;
        }
        if (var7 == 0) return;
        var7->unknown_6_ = 0x32;
        memcpy(var7, arg1, 6);
        arg0->unknown1_198_++;
    }
}

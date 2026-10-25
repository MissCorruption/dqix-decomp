#include <globaldefs.h>
#include "NitroSDK/Memory.h"


#if defined(jpn)
#define func_020ca408 func_020cbed4
#endif

struct Struct_ov031_02213b20 { unsigned char unknown_0_; unsigned char unknown_1_; unsigned char unknown_2_; unsigned char unknown_3_; };
struct Struct_ov031_02213b20_2 { unsigned char unknown_0_[0xc0]; };
struct Struct_ov031_02213b20_3 { unsigned char unknown_0_[0x444]; Struct_ov031_02213b20 unknown_444_[11]; Struct_ov031_02213b20_2 unknown_470_[11]; };
extern "C" void func_020ca3ec(unsigned int, void*, unsigned int);
extern "C" void func_020ca408(const void*, void*, unsigned int);

// USA: func_ov031_02213b20
extern "C" ARM void func_ov031_02213b20(int arg0, Struct_ov031_02213b20_3* arg1) {
    int var0;
    Struct_ov031_02213b20* var1 = arg1->unknown_444_;
    Struct_ov031_02213b20_2* var2 = arg1->unknown_470_;
    Struct_ov031_02213b20_2 var3;
    Struct_ov031_02213b20 var4;
    var0 = arg0 - 1;
    if (var0 >= 0) {
        Struct_ov031_02213b20* var5 = &var1[var0];
        Struct_ov031_02213b20_2* var6 = &var2[var0];
        do {
            if (var1[arg0].unknown_2_ < var1[var0].unknown_2_) break;
            func_020ca408(var5, &var4, 4);
            func_020ca408(&var1[arg0], var5, 4);
            func_020ca408(&var4, &var1[arg0], 4);
            func_020ca408(var6, &var3, 0xc0);
            func_020ca408(&var2[arg0], var6, 0xc0);
            func_020ca408(&var3, &var2[arg0], 0xc0);
            arg0 = var0;
            --var5;
            --var6;
        } while (--var0 >= 0);
    }
    func_020ca3ec(0, &var1[10], 4);
    func_020ca3ec(0, &var2[10], 0xc0);
}

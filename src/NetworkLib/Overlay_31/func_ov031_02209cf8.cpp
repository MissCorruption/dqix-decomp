#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"

struct Struct_ov031_0224c9e8_2 { unsigned long long unknown_0_; unsigned long long unknown_8_; unsigned long long unknown_10_; };
extern Struct_ov031_0224c9e8_2 data_ov031_0224c9e8;
extern unsigned char data_ov031_0224e3b0;
extern unsigned char data_ov031_0224e528[20];
extern "C" void func_ov031_02209e28(void*, int);
extern "C" void func_ov031_0220b8a0(unsigned int*);
extern "C" void func_ov031_0220b8f4(void*, void*, int);
extern "C" void func_ov031_0220ba14(void*, void*);

// USA: func_ov031_02209cf8
extern "C" ARM void func_ov031_02209cf8(unsigned char* arg0, int arg1) {
    unsigned int var0;
    unsigned char var1[20];
    unsigned int var2[23];
    if (data_ov031_0224e3b0 == 0) {
        data_ov031_0224c9e8.unknown_0_ = data_ov031_0224c9e8.unknown_8_ * data_ov031_0224c9e8.unknown_0_ + data_ov031_0224c9e8.unknown_10_;
        var0 = data_ov031_0224c9e8.unknown_0_ >> 32;
        func_ov031_02209e28(&var0, 4);
    }
    int var3 = 0;
    int var4 = 20;
    if (arg1 <= 0) return;
    do {
            if (var4 == 20) {
                func_ov031_0220b8a0(var2);
                int var5 = DisableIRQInterrupts();
                func_ov031_0220b8f4(var2, data_ov031_0224e528, 20);
                func_ov031_0220ba14(var2, var1);
                unsigned char* var6 = data_ov031_0224e528 + sizeof(data_ov031_0224e528) - 1;
                unsigned char* var7;
                int var8;
                unsigned int var9;
                unsigned int var10 = 1;
                var8 = 19;
                var7 = var1 + 19;
                do {
                    var9 = *var6 + *var7-- + var10;
                    *var6-- = var9;
                    var10 = var9 >> 8;
                } while (--var8 >= 0);
                var0 = var9;
                SetIRQInterruptState(var5);
                var4 = 0;
            }
            unsigned char var11 = var1[var4++];
            if (var11 != 0) arg0[var3++] = var11;
    } while (var3 < arg1);
}

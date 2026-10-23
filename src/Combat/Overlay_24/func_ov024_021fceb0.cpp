#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int func_ov024_021fe698(void* arg0, int arg1);
extern "C" void func_ov024_021f9874(void* arg0, void* arg1, int arg2, int arg3);

struct Struct_ov024_021fceb0 { char unknown_0_[8]; int unknown_8_; };
struct Struct_ov024_021fceb0_2 { char unknown_0_[0x148]; Struct_ov024_021fceb0* unknown_148_; };

struct Struct_ov024_021fceb0_3 {
    void* unknown_0_;                     // 0x0
    char unknown_4_[2];                    // 0x4
    unsigned char unknown_6_;               // 0x6
    char unknown_7_[5];                      // 0x7
    int unknown_c_;                         // 0xc
    char unknown_10_[0x7c - 0x10];             // 0x10
    Struct_ov024_021fceb0_2* unknown_7c_[1];           // 0x7c
    char unknown_80_[0x9c - 0x80];               // 0x80
    int unknown_9c_;                              // 0x9c
};

// USA: func_ov024_021fceb0
extern "C" ARM void func_ov024_021fceb0(Struct_ov024_021fceb0_3* arg0) {
    float var0 = 1000.0f;
    int var1;
    if (arg0->unknown_6_ == 2) {
        var1 = 1;
    } else if (arg0->unknown_6_ == 0) {
        return;
    } else {
        var1 = 1;
        if (arg0->unknown_c_ >= 4) var0 = 50.0f;
    }
    if (!var1) return;
    if (!func_ov024_021fe698(arg0, 0x12)) return;

    float var2 = *(float*)((char*)arg0->unknown_0_ + 0x8e3c);
    if (var2 > 1.01f) return;

    int var3 = 0;
    for (int var4 = 0; var4 < arg0->unknown_9c_; var4++) {
        Struct_ov024_021fceb0* var5 = arg0->unknown_7c_[var4]->unknown_148_;
        if (var5 && var5->unknown_8_) {
            var3 = 1;
            break;
        }
    }
    if (!var3) return;

    char var6[0xc8];
    memset(var6, 0, 0xc8);
    *(float*)(var6 + 0xc4) = var0;
    return func_ov024_021f9874(arg0, var6, 0, 0);
}

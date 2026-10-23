#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Struct_ov031_0220a6bc_2 {
    unsigned char unknown_0_[0x455]; unsigned char unknown_455_, unknown_456_;
    unsigned char unknown_457_[0x824 - 0x457]; unsigned char* unknown_824_; unsigned int unknown_828_, unknown_82c_;
};
struct Struct_ov031_0220a6bc { unsigned char unknown_0_[0xc]; Struct_ov031_0220a6bc_2* unknown_c_; unsigned char unknown_10_[0x34]; unsigned int unknown_44_; };
extern "C" unsigned char* func_ov031_02203500(unsigned int*, void*);
extern unsigned char* (*data_ov031_0224c994)(unsigned int);
extern "C" void func_ov031_022035e0(unsigned int, void*);
extern "C" void func_ov031_022098d8(Struct_ov031_0220a6bc_2*, unsigned char*);

// USA: func_ov031_0220a6bc
extern "C" ARM void func_ov031_0220a6bc(Struct_ov031_0220a6bc* arg0) {
    Struct_ov031_0220a6bc_2* var0 = arg0->unknown_c_;
    unsigned int var1;
    if (var0->unknown_824_ == NULL) {
        if (arg0->unknown_44_ < 5) return;
        unsigned char* var2 = func_ov031_02203500(&var1, arg0);
        var1 = (var2[3] << 8) + var2[4] + 5;
        if (var1 > 0x4805) { var0->unknown_455_ = 9; return; }
        var0->unknown_824_ = data_ov031_0224c994(var1);
        if (var0->unknown_824_ == NULL) { var0->unknown_455_ = 9; return; }
        var0->unknown_828_ = var1;
        var0->unknown_82c_ = 0;
        var0->unknown_456_ = 0;
    } else if (arg0->unknown_44_ == 0) return;
    unsigned char* var3 = func_ov031_02203500(&var1, arg0);
    unsigned int var4 = var0->unknown_828_ - var0->unknown_82c_;
    int var5;
    if (var1 >= var4) { var1 = var4; var5 = 1; } else var5 = 0;
    VectorizedInvertedMemcpy(var3, var0->unknown_824_ + var0->unknown_82c_, var1);
    func_ov031_022035e0(var1, arg0);
    if (var5) {
        func_ov031_022098d8(var0, var0->unknown_824_);
        if (var0->unknown_456_ == 0) var0->unknown_824_ = NULL;
        return;
    }
    var0->unknown_82c_ += var1;
}

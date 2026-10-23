#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

struct Struct_020e7918 { unsigned char unknown_0_, unknown_1_; };
struct Struct_0203cbd8 {
    char unknown_0_[0x50]; int unknown_50_, unknown_54_, unknown_58_, unknown_5c_, unknown_60_;
    char unknown_64_[0x90 - 0x64]; int unknown_90_;
    unsigned char unknown_94_, unknown_95_;
};
struct Struct_0203ca24_2;
extern "C" int func_0202e7f0(void*);
extern "C" void func_0203f1e4(Struct_0203ca24_2*, const char*);
extern Struct_020e7918 data_020e7920[4], data_020e7918[4], data_020e7938[8], data_020e7928[8];
extern const char* data_020efd00[];
static inline Struct_020e7918* inline_0203cbd8(Struct_020e7918* arg0, int arg1) { return &arg0[arg1]; }
static inline Struct_020e7918* inline_0203cbd8_2(Struct_020e7918* arg0, int arg1, Struct_0203cbd8* arg2, int arg3) {
    arg2->unknown_54_ = arg3;
    return &arg0[arg1];
}

// USA: func_0203cbd8
extern "C" ARM void func_0203cbd8(Struct_0203cbd8* arg0, void* arg1) {
    int var0 = arg0->unknown_60_ - func_0202e7f0(arg1);
    int var1 = arg0->unknown_50_ & 8;
    if (var1) var0 += arg0->unknown_90_;
    while (var0 < 0) var0 += 0x6488;
    while (var0 >= 0x6488) var0 -= 0x6488;
    Struct_020e7918* var2;
    if (arg0->unknown_95_) {
        var2 = inline_0203cbd8(data_020e7920, (fix32_Divide((var0 + 0x6488) * 4 + 0x3244, 0x6488) >> 12) & 3);
    } else if (!var1) {
        if ((arg0->unknown_5c_ & 1) || (arg0->unknown_5c_ & 8)) {
            var2 = inline_0203cbd8(data_020e7918, (fix32_Divide((var0 + 0x6488) * 4 + 0x3244, 0x6488) >> 12) & 3);
        } else {
            var2 = inline_0203cbd8(data_020e7938, (fix32_Divide((var0 + 0x6488) * 8 + 0x3244, 0x6488) >> 12) & 7);
        }
    } else {
        var2 = inline_0203cbd8_2(data_020e7928, (fix32_Divide((var0 + 0x6488) * 8 + 0x3244, 0x6488) >> 12) & 7, arg0, -var0);
    }
    if (!var2) return;
    if (var2->unknown_1_) arg0->unknown_50_ |= 2;
    else arg0->unknown_50_ &= ~2;
    func_0203f1e4((Struct_0203ca24_2*)arg0, data_020efd00[var2->unknown_0_]);
}

#include <globaldefs.h>
#include "std_library_functions.h"

unsigned long long GetCurrentTimestamp(void);
extern "C" unsigned long long _ll_udiv(unsigned long long arg0, unsigned int arg1, unsigned int arg2);
extern "C" int _s32_div_f(int, int);
extern "C" int abs(int arg0);

struct Struct_ov023_021db110 {
    short unknown_0_;
    short unknown_2_;
    short unknown_4_;
    short unknown_6_;
};

struct Struct_ov023_021db110_2 {
    struct Struct_ov023_021db110 unknown_0_[3];
    unsigned long long unknown_18_;
    short unknown_20_;
    short unknown_22_;
    unsigned char unknown_24_;
};

// USA: func_ov023_021db110
extern "C" ARM void func_ov023_021db110(struct Struct_ov023_021db110_2* arg0) {
    if (arg0->unknown_24_ == 0) return;

    unsigned long long var0 = _ll_udiv(GetCurrentTimestamp() << 6, 0x82ea, 0);
    if (var0 - arg0->unknown_18_ > 30) {
        arg0->unknown_18_ = var0;
    } else {
        return;
    }

    int var1;
    for (var1 = 0; var1 < 3; var1++) {
        arg0->unknown_0_[var1].unknown_0_--;
        if (arg0->unknown_0_[var1].unknown_0_ <= 0) arg0->unknown_0_[var1].unknown_0_ = 0;
    }

    arg0->unknown_22_--;
    if (arg0->unknown_22_ <= 0) {
        arg0->unknown_22_ = 0;
        for (int var2 = 0; var2 < 3; var2++) {
            struct Struct_ov023_021db110* var3 = &arg0->unknown_0_[var2];
            if (var3->unknown_0_ > 0) continue;
            if (rand() % 5 != 0) continue;

            var3->unknown_0_ = var3->unknown_2_;
            var3->unknown_4_ = (short)(rand() % 50);
            var3->unknown_6_ = (short)(rand() % 15);

            for (int var4 = 0; var4 < 3; var4++) {
                if (var2 == var4) continue;
                if (arg0->unknown_0_[var4].unknown_0_ <= 0) continue;
                if (abs(var3->unknown_4_ - arg0->unknown_0_[var4].unknown_4_) > 12) continue;
                if (abs(var3->unknown_6_ - arg0->unknown_0_[var4].unknown_6_) <= 12) {
                    var3->unknown_0_ = 0;
                    break;
                }
            }
            arg0->unknown_22_ = 2;
            break;
        }
    }

    arg0->unknown_20_++;
    if (arg0->unknown_20_ >= 0x28) arg0->unknown_20_ = 0;
}

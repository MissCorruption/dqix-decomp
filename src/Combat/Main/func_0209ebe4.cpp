#include <globaldefs.h>
#include "std_library_functions.h"
struct Struct_0209ebe4_3 { char unknown_0_[0x40]; };
struct Struct_0209ebe4 { char unknown_0_[0x5c60]; Struct_0209ebe4_3 unknown_5c60_[16]; char unknown_6060_[0x8e07-0x6060]; unsigned char unknown_8e07_; };
struct Struct_0209ebe4_2 { int unknown_0_; Struct_0209ebe4* unknown_4_; char unknown_8_[0x90]; int unknown_98_; Struct_0209ebe4_3 unknown_9c_[16]; int unknown_49c_; Struct_0209ebe4_3 unknown_4a0_[16]; };
#if defined(jpn)
#include "Combat/Main/CandidateFilter.h"
#define func_0209dcdc func_0209e1cc
#define func_0209ebe4 func_020a0644
enum { Enum_0209ebe4_1 = 0 };
#else
extern "C" int func_0209dcdc(Struct_0209ebe4_2*, Struct_0209ebe4_3*, int, int);
enum { Enum_0209ebe4_1 = 1 };
#endif
// USA: func_0209ebe4
extern "C" ARM void func_0209ebe4(Struct_0209ebe4_2* arg0, int arg1, int arg2) {
    int var0;
    int var1;
    Struct_0209ebe4_3* var2;
    Struct_0209ebe4_3* var3;
    var1 = 0;
    if (!arg1) {
        arg0->unknown_98_ = 0;
        var0 = arg0->unknown_4_->unknown_8e07_;
        for (var1 = 0; var1 < var0; var1++) {
            var3 = &arg0->unknown_4_->unknown_5c60_[var1];
            if (var3 && func_0209dcdc(arg0, var3, Enum_0209ebe4_1, arg2)) {
                memcpy(&arg0->unknown_9c_[arg0->unknown_98_++], var3, 0x40);
            }
        }
    } else {
        arg0->unknown_49c_ = 0;
        memset(arg0->unknown_4a0_, 0, 0x400);
        var2 = arg0->unknown_9c_;
        for (var1 = 0; var1 < arg0->unknown_98_; var1++) {
            var3 = &var2[var1];
            if (func_0209dcdc(arg0, var3, Enum_0209ebe4_1, arg2)) {
                int var4 = arg0->unknown_49c_;
                arg0->unknown_49c_ = arg0->unknown_49c_ + 1;
                memcpy(&arg0->unknown_4a0_[var4], var3, 0x40);
            }
        }
        arg0->unknown_98_ = arg0->unknown_49c_;
        memcpy(arg0->unknown_9c_, arg0->unknown_4a0_, 0x400);
    }
}

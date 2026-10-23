#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int func_ov031_0221aae4(unsigned char* arg0, unsigned int arg1, char* arg2, unsigned int arg3);
extern "C" int func_ov031_0221883c(void* arg0, void* arg1, int arg2);
extern "C" int func_020c7170(char* arg0, unsigned long arg1, const char* arg2, ...);

extern const char data_ov031_02249edc[];
extern const char data_ov031_02249ee0[];

struct Struct_ov031_02218604 {
    char* unknown_0_;
    char* unknown_4_;
    char* unknown_8_;
    int unknown_c_;
};

struct Struct_ov031_02218604_2 {
    char unknown_0_[0x19f4];
    int unknown_19f4_;
    Struct_ov031_02218604 unknown_19f8_;
};

// USA: func_ov031_02218604
extern "C" ARM int func_ov031_02218604(Struct_ov031_02218604_2* arg0, const char* arg1, void* arg2, int arg3) {
    int var0;
    Struct_ov031_02218604* var1 = &arg0->unknown_19f8_;
    const char* var2 = arg0->unknown_19f4_ == 0 ? data_ov031_02249edc : data_ov031_02249ee0;
    int var3;
    int var4;
    int var5;
    int var6;
    char* var7;

    arg0->unknown_19f4_ = arg0->unknown_19f4_ + 1;
    var0 = func_ov031_0221aae4(static_cast<unsigned char*>(arg2), arg3, 0, 0);
    var3 = (int)strlen(var2);
    var4 = var0 + (var3 - 2 + (int)strlen(arg1));
    var7 = var1->unknown_4_;
    var5 = var1->unknown_8_ - var7;
    if (var4 > var5) {
        if (func_ov031_0221883c(arg0, var1, var4 - var5 + 1) == 0) {
            return 1;
        }
        var7 = var1->unknown_4_;
        var5 = var1->unknown_8_ - var7;
    }
    var6 = func_020c7170(var7, var5, var2, arg1);
    var1->unknown_4_ = var1->unknown_4_ + var6;
    if (func_ov031_0221aae4(static_cast<unsigned char*>(arg2), arg3, var1->unknown_4_, var1->unknown_8_ - var1->unknown_4_ - 1) >= 0) {
        var1->unknown_4_ = var1->unknown_4_ + var0;
        *var1->unknown_4_ = 0;
        return 0;
    }
    return 1;
}

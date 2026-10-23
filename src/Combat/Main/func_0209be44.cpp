#include <globaldefs.h>

struct Struct_02073ec4_2;
struct Struct_0209ba70 { unsigned short unknown_0_; short unknown_2_; };
struct Struct_0209be44 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    int unknown_4_;
    struct Struct_0209ba70 unknown_8_[6];
};
extern "C" struct Struct_0209be44* func_0209bd94(struct Struct_02073ec4_2*, int);

// USA: func_0209be44
extern "C" ARM void func_0209be44(struct Struct_02073ec4_2* arg0, int arg1, struct Struct_0209ba70* arg2) {
    struct Struct_0209be44* var0 = func_0209bd94(arg0, arg1);
    struct Struct_0209ba70* var1;
    struct Struct_0209ba70* var2;
    int var3;
    if (var0 == NULL) return;
    var3 = var0->unknown_2_;
    var1 = var0->unknown_8_;
    var0->unknown_2_ = var3 + 1;
    var2 = &var1[var3];
    var2->unknown_0_ = arg2->unknown_0_;
    var2->unknown_2_ = arg2->unknown_2_;
}

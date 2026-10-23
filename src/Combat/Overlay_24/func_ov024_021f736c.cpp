#include <globaldefs.h>

typedef int (*Type_ov024_021f736c)(void*);

struct Struct_ov024_021f736c_2 {
    char unknown_0_[0x18];
    unsigned int unknown_18_;
};

struct Struct_ov024_021f736c {
    char unknown_0_[0x10];
    struct Struct_ov024_021f736c_2* unknown_10_;
};

extern Type_ov024_021f736c data_ov024_021ffda4[];

// USA: func_ov024_021f736c
extern "C" ARM int func_ov024_021f736c(struct Struct_ov024_021f736c* arg0) {
    struct Struct_ov024_021f736c_2* var0 = arg0->unknown_10_;
    if (!var0) return 0;
    unsigned int var1 = (var0->unknown_18_ << 5) >> 23;
    if (var1 >= 0x42) return 0;
    Type_ov024_021f736c var2 = data_ov024_021ffda4[var1];
    if (!var2) return 0;
    return var2(arg0);
}

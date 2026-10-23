#include <globaldefs.h>

struct Struct_0201099c_9 {
    unsigned int unknown_0_[8];
};

struct Struct_020de5b0_2 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[10];
    struct Struct_0201099c_9* unknown_c_;
};

typedef int (*Type_020de5fc)(struct Struct_0201099c_9*);

// USA: func_020de650
extern "C" ARM struct Struct_0201099c_9* func_020de650(struct Struct_020de5b0_2* arg0, int arg1, Type_020de5fc arg2) {
    struct Struct_0201099c_9* var0;
    int var1;
    int var2;
    int var3;
    int var4;
    struct Struct_0201099c_9* var5;
    int var6;

    var0 = arg0->unknown_c_;
    if (var0 == NULL || arg2 == NULL) return NULL;
    var1 = arg0->unknown_0_;
    if (var1 == 0) return NULL;
    var3 = var1 - 1;
    var2 = 0;
    while (var2 <= var3) {
        var4 = var2 + ((var3 - var2 + 1) >> 1);
        var5 = var0 + var4;
        var6 = arg2(var5);
        if (var6 == arg1) return var5;
        if (var6 > arg1) var3 = var4 - 1;
        else var2 = var4 + 1;
    }
    return NULL;
}

#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_0202c1a4;

extern "C" void *func_0202ae18(int arg0);
extern "C" int func_0202b7d8(int *arg0);
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4 *arg0);
extern "C" void func_020962f4(void *arg0, struct Struct_020961b0 arg1);
extern "C" void func_0209609c(int arg0, unsigned char *arg1, int arg2);

struct Struct_020961b0 {
    unsigned int unknown_0_0_ : 9;
    unsigned int unknown_1_1_ : 1;
    unsigned int unknown_1_2_ : 1;
    unsigned int unknown_1_3_ : 3;
    unsigned int unknown_1_6_ : 2;
    unsigned int unknown_2_0_ : 1;
    unsigned int unknown_2_1_ : 15;
    unsigned int unknown_4_;
    unsigned int unknown_8_;
    unsigned int unknown_c_;
};

struct Struct_020961b0_2 {
    char unknown_0_[2];
    unsigned short unknown_2_0_ : 9;
    unsigned short unknown_3_1_ : 1;
    unsigned short unknown_3_2_ : 3;
    unsigned short unknown_3_5_ : 1;
    unsigned short unknown_3_6_ : 2;
    char unknown_4_[8];
    struct Struct_020961b0_2 *unknown_c_;
};

// USA: func_020961b0
extern "C" ARM int func_020961b0(void *arg0, int arg1) {
    int var0 = *(unsigned char *)arg0;
    if (var0 >= 8) {
        return 0;
    }
    void *var1 = func_0202ae18(var0);
    struct Struct_020961b0_2 *var2;
    for (var2 = (struct Struct_020961b0_2 *)*(void **)((char *)arg0 + 0xa0); var2 != 0; var2 = var2->unknown_c_) {
        if (var2->unknown_2_0_ != arg1) {
            continue;
        }
        struct Struct_020961b0 var3;
        memset(&var3, 0, sizeof(var3));
        var3.unknown_0_0_ = var2->unknown_2_0_;
        var3.unknown_1_2_ = var2->unknown_3_1_;
        var3.unknown_2_0_ = var2->unknown_3_5_;
        var3.unknown_1_3_ = 1;
        if (func_0202b7d8((int *)var1) && func_0202c1a4((struct Struct_0202c1a4 *)var1)) {
            var3.unknown_1_1_ = 1;
        } else {
            var3.unknown_1_1_ = 0;
        }
        func_020962f4(arg0, var3);
        func_0209609c((int)arg0, (unsigned char *)arg0 + 0xa8 + 0x400, arg1);
        break;
    }
    if (var2 == 0) {
        return 0;
    }
    return 1;
}

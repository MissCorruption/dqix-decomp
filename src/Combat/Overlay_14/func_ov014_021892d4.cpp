#include <globaldefs.h>

typedef int (*Type_ov014_021892d4)(void*);

struct Struct_ov014_021892d4 {
    unsigned short unknown_0_;
    char unknown_2_[0xc - 2];
    void** unknown_c_;
};

// USA: func_ov014_021892d4
extern "C" ARM void* func_ov014_021892d4(struct Struct_ov014_021892d4* arg0, int arg1, Type_ov014_021892d4 arg2) {
    void** var0 = arg0->unknown_c_;
    if (var0 == 0 || arg2 == 0) {
        return 0;
    }
    if (arg0->unknown_0_ == 0) {
        return 0;
    }
    int var1 = 0;
    int var2 = arg0->unknown_0_ - 1;
    while (var1 <= var2) {
        int var3 = var1 + ((var2 - var1 + 1) >> 1);
        void** var4 = var0 + var3;
        int var5 = arg2(var4);
        if (var5 == arg1) {
            return var4;
        }
        if (var5 > arg1) {
            var2 = var3 - 1;
        } else {
            var1 = var3 + 1;
        }
    }
    return 0;
}

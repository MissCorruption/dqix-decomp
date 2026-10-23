#include <globaldefs.h>

extern "C" int func_020bbe1c(int);

struct Struct_020bc948 {
    char unknown_0_[0x44];
    int unknown_44_;
    int unknown_48_;
    unsigned char unknown_4c_[1];
};

// USA: func_020bc948
extern "C" ARM int func_020bc948(struct Struct_020bc948* arg0, int arg1, unsigned char* arg2) {
    int var0 = 0;
    int var1 = 0;
    if (var1 < arg1) {
        do {
            arg0->unknown_4c_[var1] = arg2[var1];
            var0 |= 1 << arg2[var1];
            var1++;
        } while (var1 < arg1);
    }
    if (func_020bbe1c(var0) == 0) {
        return 0;
    }
    arg0->unknown_48_ = arg1;
    arg0->unknown_44_ = var0;
    return 1;
}

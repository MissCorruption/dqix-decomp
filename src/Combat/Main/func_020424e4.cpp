#include <globaldefs.h>

extern int data_0210782c[];
extern "C" int func_02001aec(int arg0, int arg1, int arg2);

struct Struct_020424e4_2 {
    int unknown_0_;
    char unknown_4_;
    signed char unknown_5_0_ : 6;
    signed char unknown_5_6_ : 2;
    char unknown_6_[2];
};

// USA: func_020424e4
extern "C" ARM int func_020424e4(int arg0, int arg1) {
    char* var0;
    unsigned int var1;
    if (arg0 == 0) {
        return -1;
    }
    var0 = (char*)data_0210782c[arg1];
    for (var1 = 0; var1 < *(unsigned int*)(var0 + 4); var1++) {
        struct Struct_020424e4_2* var2 = *(struct Struct_020424e4_2**)(var0 + 0x10) + var1;
        if (func_02001aec(var2->unknown_0_, arg0, var2->unknown_5_0_) == 0) {
            return var1;
        }
    }
    return -1;
}

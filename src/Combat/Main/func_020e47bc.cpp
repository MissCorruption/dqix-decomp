#include <globaldefs.h>

extern "C" int func_020e51e4(int arg0);
extern "C" void* func_020e462c(void* arg0, int arg1, int arg2, void* arg3);

struct Struct_020e47bc {
    int unknown_0_;
    int unknown_4_;
    unsigned int unknown_8_0_ : 6;
    unsigned int unknown_8_6_ : 6;
};

// USA: func_020e47bc
extern "C" ARM void* func_020e47bc(void* arg0, struct Struct_020e47bc* arg1) {
    void* var0 = arg0;
    if (arg1->unknown_4_ != 0) {
        int var1 = func_020e51e4((short)(arg1->unknown_8_6_ + 0x12c));
        var0 = func_020e462c(arg0, var1, arg1->unknown_4_, arg1);
    }
    return var0;
}

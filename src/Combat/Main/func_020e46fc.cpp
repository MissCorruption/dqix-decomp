#include <globaldefs.h>

extern "C" int func_020e51e4(int arg0);
extern "C" void* func_020e462c(void* arg0, int arg1, int arg2, void* arg3);

struct Struct_020e46fc {
    int unknown_0_;
    int unknown_4_;
    unsigned int unknown_8_0_ : 6;
};

// USA: func_020e46fc
extern "C" ARM void* func_020e46fc(void* arg0, struct Struct_020e46fc* arg1) {
    void* var0 = arg0;
    if (arg1->unknown_0_ != 0) {
        int var1 = func_020e51e4((short)(arg1->unknown_8_0_ + 0x64));
        var0 = func_020e462c(arg0, var1, arg1->unknown_0_, 0);
    }
    return var0;
}

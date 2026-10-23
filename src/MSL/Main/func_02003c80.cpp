#include <globaldefs.h>

extern "C" unsigned int func_02003418(void* arg0, void* arg1, const char* arg2, void* arg3);
extern "C" void func_02003c3c(void);

struct Struct_02003c80 {
    char* unknown_0_;
    unsigned int unknown_4_;
    int unknown_8_;
};

// USA: func_02003c80
extern "C" ARM unsigned int func_02003c80(char* arg0, unsigned int arg1, const char* arg2, void* arg3) {
    struct Struct_02003c80 var0;
    var0.unknown_0_ = arg0;
    var0.unknown_4_ = arg1;
    var0.unknown_8_ = 0;
    unsigned int var1 = func_02003418((void*)func_02003c3c, &var0, arg2, arg3);
    if (arg0 == 0) {
        return var1;
    }
    if (var1 < arg1) {
        arg0[var1] = 0;
        return var1;
    }
    if (arg1 != 0) {
        *(arg0 + arg1 - 1) = 0;
    }
    return var1;
}

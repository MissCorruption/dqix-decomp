#include <globaldefs.h>

struct Struct_020dfbdc {
    int unknown_0_;
    int unknown_4_;
};

extern "C" int func_020dfbdc(void* arg0, struct Struct_020dfbdc* arg1);
extern "C" int func_020e0280(void* arg0, void* arg1, void* arg2, void* arg3);

// USA: func_020e038c
extern "C" ARM int func_020e038c(void* arg0, void* arg1, int arg2) {
    int var0;
    if (arg1 == NULL || arg2 == 0) return 0;
    func_020e0280(arg0, arg1, &var0, (void*)func_020dfbdc);
    return 1;
}

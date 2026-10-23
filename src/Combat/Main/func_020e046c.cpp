#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_020dfbdc {
    int unknown_0_;
    int unknown_4_;
};
extern "C" int func_020dfbdc(void* arg0, struct Struct_020dfbdc* arg1);

extern "C" void* func_020e0280(void* arg0, void* arg1, void* arg2, void* arg3);

struct Struct_0201099c_3 {
    unsigned int unknown_0_[3];
};
extern "C" int func_020e0440(struct Struct_0201099c_3* arg0, int arg1);

// USA: func_020e046c
extern "C" ARM char* func_020e046c(char* arg0, void* arg1, void* arg2, int arg3) {
    struct Struct_0201099c_3 var0;
    int var1;
    char* var2;
    if (arg0 == NULL || arg1 == NULL || arg2 == NULL || arg3 < 0) return NULL;
    memset(&var0, 0, sizeof(var0));
    func_020e0280(&var0, arg1, &var1, (void*)func_020dfbdc);
    var2 = (char*)func_020e0440(&var0, arg3);
    if (var2 == NULL) {
        arg0[0] = 0;
        return NULL;
    }
    strcpy(arg0, var2);
    return arg0;
}

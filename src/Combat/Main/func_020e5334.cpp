#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_020e5204;
extern "C" int func_020e5204(void* arg0, struct Struct_020e5204* arg1);

extern "C" void* func_020e53bc(void* arg0, void* arg1, void* arg2, void* arg3);

struct Struct_0201099c_3 {
    unsigned int unknown_0_[3];
};
extern "C" void* func_020e52a0(struct Struct_0201099c_3* arg0, int arg1);

// USA: func_020e5334
extern "C" ARM void* func_020e5334(void* arg0, void* arg1, void* arg2, int arg3) {
    struct Struct_0201099c_3 var0;
    int var1;
    void* var2;
    if (arg0 == NULL || arg1 == NULL || arg2 == NULL || arg3 < 0) return NULL;
    memset(&var0, 0, sizeof(var0));
    func_020e53bc(&var0, arg1, &var1, (void*)func_020e5204);
    var2 = func_020e52a0(&var0, arg3);
    if (var2 == NULL) return NULL;
    memcpy(arg0, var2, sizeof(var0));
    return arg0;
}

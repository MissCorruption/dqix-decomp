#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_02020aec {
    char unknown_0_;
    char unknown_1_[0x3f];
    int unknown_40_;
    int unknown_44_;
    int unknown_48_;
};

extern "C" void* func_020467f0(struct Struct_02020aec* arg0, int arg1, void** arg2, int* arg3);

// USA: func_0204684c
extern "C" ARM int func_0204684c(struct Struct_02020aec* arg0, const char* arg1, void** arg2, int arg3, int* arg4, void** arg5) {
    int var0 = 0;
    int var1;
    for (var1 = 0; ; var1++) {
        int var2;
        void* var3;
        void* var4 = func_020467f0(arg0, var1, &var3, &var2);
        if (var4 == 0) break;
        {
            char* var5 = (char*)var3;
            char var6;
            while ((var6 = *var5) != 0) {
                if (var6 == '.') { var5++; break; }
                var5++;
            }
            if (strcmp(arg1, var5) == 0) {
                arg2[var0] = var4;
                if (arg5 != 0) arg5[var0] = var3;
                if (arg4 != 0) arg4[var0] = var2;
                var0++;
                if (var0 >= arg3) break;
            }
        }
    }
    return var0;
}

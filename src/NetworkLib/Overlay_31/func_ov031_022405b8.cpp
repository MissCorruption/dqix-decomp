#include <globaldefs.h>

struct Struct_ov031_02240410 { Struct_ov031_02240410* unknown_0_; };
extern "C" void func_ov031_02240410(char* arg0, int arg1, Struct_ov031_02240410** arg2, int* arg3);
extern "C" signed char func_ov031_0224046c(void* arg0, void** arg1, int* arg2);

// USA: func_ov031_022405b8
extern "C" ARM int func_ov031_022405b8(char* arg0, int arg1, int arg2) {
    if (arg1 >= arg2) {
        goto fail;
    }
    {
        Struct_ov031_02240410* var0;
        int var1;
        func_ov031_02240410(arg0, arg1, &var0, &var1);
        if (arg1 >= arg2) {
            goto fail;
        }
        int var2 = arg1;
        do {
            signed char var3 = func_ov031_0224046c(arg0, (void**)&var0, &var1);
            if (var3 != 0x20) {
                return var2;
            }
            var2++;
        } while (var2 < arg2);
    }
fail:
    return -1;
}

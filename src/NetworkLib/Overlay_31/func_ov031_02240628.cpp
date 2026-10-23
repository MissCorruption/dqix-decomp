#include <globaldefs.h>

struct Struct_ov031_02240628;
extern "C" void func_ov031_02240410(Struct_ov031_02240628*, int, void**, int*);
extern "C" signed char func_ov031_0224046c(Struct_ov031_02240628*, void**, int*);

// USA: func_ov031_02240628
extern "C" ARM int func_ov031_02240628(Struct_ov031_02240628* arg0, int arg1, int arg2, const signed char* arg3, int arg4) {
    void* var0;
    int var1;
    if (arg1 < arg2) {
        func_ov031_02240410(arg0, arg1, &var0, &var1);
        int var2 = func_ov031_0224046c(arg0, &var0, &var1);
        int var3;
        int var4;
        goto compare;
        do {
            if (*arg3 == 0 || *arg3 == ' ' || *arg3 == arg4 || arg1 == arg2 - 1) return 0;
            var2 = func_ov031_0224046c(arg0, &var0, &var1);
            ++arg1;
            ++arg3;
compare:
            var4 = 0;
            if (*arg3 >= 'A' && *arg3 <= 'Z') var4 = 1;
            var3 = var4 ? *arg3 + 32 : *arg3;
            if (var2 >= 'A' && var2 <= 'Z') var2 += 32;
        } while (var2 == var3);
    }
    return -1;
}

#include <globaldefs.h>

struct Struct_02020cb8_4;
extern "C" int func_02046900(struct Struct_02020cb8_4* arg0);
struct Struct_02020aec;
extern "C" void* func_020467f0(struct Struct_02020aec* arg0, int arg1, void** arg2, int* arg3);
extern "C" void func_0205a528(void* arg0, void* arg1, int arg2, void* arg3);

// USA: func_0205a498
extern "C" ARM int func_0205a498(void* arg0, struct Struct_02020aec* arg1, int arg2, void* arg3) {
    int var0;
    if (arg2) {
        int var1 = func_02046900((struct Struct_02020cb8_4*)arg1);
        for (int var2 = 0; var2 < var1; var2++) {
            void* var3 = 0;
            int var4 = 0;
            void* var5 = func_020467f0(arg1, var2, &var3, &var4);
            if (var5) {
                func_0205a528(arg0, var5, var4, arg3);
            }
        }
        var0 = 0;
    } else {
        var0 = 1;
    }
    return var0;
}

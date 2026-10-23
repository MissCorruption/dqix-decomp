#include <globaldefs.h>

struct Struct_0203a46c;
extern "C" void func_0203a46c(struct Struct_0203a46c* arg0, int arg1, int arg2, int arg3);

// USA: func_ov017_0219b578
extern "C" ARM void func_ov017_0219b578(char* arg0, int arg1, int arg2) {
#if defined(jpn)
    struct Struct_0203a46c* var0 = *(struct Struct_0203a46c**)(arg0 + 0x3000 + 0x420);
#else
    struct Struct_0203a46c* var0 = *(struct Struct_0203a46c**)(arg0 + 0x3000 + 0x630);
#endif
    if (var0 == 0) {
        return;
    }
    int var1 = *(int*)((char*)var0 + 0x1c);
    int var2 = (int)(((float)var1 / 4096.0f + (float)arg1) * 4096.0f);
    int var3 = *(int*)((char*)var0 + 0x20);
    int var4 = (int)(((float)var3 / 4096.0f + (float)arg2) * 4096.0f);
    func_0203a46c(var0, var2, var4, 0);
}

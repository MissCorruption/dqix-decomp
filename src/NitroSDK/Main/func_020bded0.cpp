#include <globaldefs.h>

struct Struct_020bded0_2 {
    unsigned long unknown_0_;
    unsigned short unknown_4_[4];
};

struct Struct_020bded0 {
    unsigned long unknown_0_0_ : 24;
    unsigned long unknown_3_0_ : 8;
};

extern "C" Struct_020bded0_2* func_020bd51c(int arg0);
extern "C" void* func_020be214(unsigned int arg0, int arg1, int arg2);
extern "C" void* func_020bd8ac(unsigned int arg0);
extern "C" Struct_020bded0* func_020bd580(int arg0);
extern "C" int func_020be010(int arg0, unsigned int arg1, int arg2, int arg3, int* arg4);
extern "C" int func_020be604(void* arg0, void* arg1, int arg2, int arg3, int arg4);
extern "C" void func_020d2b34(void* arg0, int arg1, void* arg2);

// USA: func_020bded0
extern "C" ARM int func_020bded0(int arg0, unsigned long arg1, int arg2, int arg3, void** arg4) {
    const Struct_020bded0_2* var0;
    const Struct_020bded0* var1;
    void* var2 = NULL;
    void* var3;
    int var4;
    int var5;

    var0 = func_020bd51c(arg0);
    if (var0 == NULL)
        return 4;

    if (arg1 & 2) {
        var2 = func_020be214(var0->unknown_0_, arg2, arg3);
        if (var2 == NULL)
            return 8;
    } else {
        var2 = func_020bd8ac(var0->unknown_0_);
    }

    for (var5 = 0; var5 < 4; var5++) {
        if (var0->unknown_4_[var5] == 0xffff)
            continue;

        var1 = func_020bd580(var0->unknown_4_[var5]);
        if (var1 == NULL)
            return 5;

        var4 = func_020be010(var0->unknown_4_[var5], arg1, arg2, arg3, (int*)&var3);
        if (var4 != 0)
            return var4;

        if (var1->unknown_3_0_ & 1) {
            if (arg1 & 4) {
                if (!func_020be604(var3, var2, var5, var1->unknown_0_0_, arg2))
                    return 9;
            }
        }

        if (var2 != NULL && var3 != NULL)
            func_020d2b34(var2, var5, var3);
    }

    if (arg4 != NULL)
        *arg4 = var2;
    return 0;
}

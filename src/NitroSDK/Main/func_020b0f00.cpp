#include <globaldefs.h>

struct Struct_020b0e6c;
extern "C" int func_020b0e6c(Struct_020b0e6c* arg0, unsigned int arg1);

struct Struct_020b0eb4;
extern "C" void* func_020b0eb4(Struct_020b0eb4** arg0, unsigned int arg1);

typedef int (*Type_020b0f00)(int*, int);

struct Struct_020b0f00 {
    void* unknown_0_;
    Type_020b0f00 unknown_4_;
};

// USA: func_020b0f00
extern "C" ARM int func_020b0f00(Struct_020b0f00* arg0, int arg1, int arg2, int* arg3) {
    int var0 = arg2;
    int var1 = 0;
    Type_020b0f00 var2 = arg0->unknown_4_;
    int var3 = var2(&var0, arg1);
    if (var3 != 0) {
        do {
            if (var3 == 0xa) break;

            int var4 = func_020b0e6c((Struct_020b0e6c*)arg0, var3);
            if (var4 == 0xffff) {
                var4 = *(unsigned short*)((char*)arg0->unknown_0_ + 2);
            }
            void* var5 = func_020b0eb4((Struct_020b0eb4**)arg0, var4);
            int var6 = *(signed char*)((char*)var5 + 2);
            int var7 = arg1 + var6;
            var1 = var1 + var7;
            var3 = var2(&var0, var7);
        } while (var3 != 0);
    }

    if (arg3 != 0) {
        arg3[0] = (var3 == 0xa) ? var0 : 0;
    }
    if (var1 > 0) {
        var1 = var1 - arg1;
    }
    return var1;
}

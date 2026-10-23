#include <globaldefs.h>

struct Struct_ov003_0217fa14 {
    signed char unknown_0_[4];
    int unknown_4_[2];
};

extern struct Struct_ov003_0217fa14 data_ov003_0217fa14;

extern "C" int func_020420e8(char* arg0, int arg1);
extern "C" void func_0204f41c(void* arg0, short arg1, short arg2, void* arg3, int arg4, int arg5, short* arg6, short* arg7, int arg8);

// USA: func_ov003_02172618
extern "C" ARM void func_ov003_02172618(void* arg0, int arg1, char** arg2) {
    short var0;
    short var1;
    int var2[2] = {data_ov003_0217fa14.unknown_4_[0], arg1 + 0x16};
    for (int var3 = 0; var3 < 2; var3++) {
        char* var4 = arg2[var3];
        if (var4 == NULL) {
            continue;
        }
        int var5 = (0x100 - func_020420e8(var4, 1)) >> 1;
        int var6 = var2[var3];
        func_0204f41c(arg0, var5 + 1, var6, var4, 0xc, 0xe, &var0, &var1, 0);
        func_0204f41c(arg0, var5, var6, var4, 0xc, 0xf, &var0, &var1, 0);
    }
}

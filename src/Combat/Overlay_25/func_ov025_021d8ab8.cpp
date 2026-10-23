#include <globaldefs.h>

extern "C" ARM void* __clear(void* arg0, int arg1);

struct Struct_ov000_0215440c_2;
struct Struct_ov000_02160094;
extern "C" Struct_ov000_02160094* func_ov000_02160094(Struct_ov000_0215440c_2* arg0, int arg1);

struct Struct_ov000_0215440c;
struct Struct_ov000_021600f8;
extern "C" Struct_ov000_021600f8* func_ov000_021600f8(Struct_ov000_0215440c* arg0, int arg1);

extern "C" void func_ov025_021d8c30(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6);

// USA: func_ov025_021d8ab8
extern "C" ARM void func_ov025_021d8ab8(void* arg0, void* arg1, int arg2, int arg3, int arg4) {
    int var0[6];
    __clear(var0, 0x18);
    int* var1 = var0;

    if (arg2 == 0) {
        Struct_ov000_02160094* var2 = func_ov000_02160094((Struct_ov000_0215440c_2*)arg1, arg4);
        if (var2) {
            unsigned char* var3 = (unsigned char*)var2;
            var1[0] = var3[0x26];
            var1[1] = var3[0x28];
            var1[2] = var3[0x29];
            var1[3] = var3[0x2b];
            var1[4] = var3[0x2a];
            var1[5] = var3[0x27];
        }
    } else if ((unsigned int)(arg2 - 1) <= 2) {
        Struct_ov000_021600f8* var4 = func_ov000_021600f8((Struct_ov000_0215440c*)arg1, arg4);
        if (var4) {
            unsigned char* var5 = (unsigned char*)var4;
            var1[0] = var5[0x18];
            var1[1] = var5[0x19];
            var1[2] = var5[0x1a];
        }
    }

    int var6;
    if (arg3 == 6) {
        for (var6 = 0; var6 < 6; var6++) {
            for (int var7 = 0; var7 < var1[var6]; var7++) {
                func_ov025_021d8c30(arg0, arg1, arg2, var6, arg4, var7, 0);
            }
        }
    } else {
        for (int var8 = 0; var8 < var1[arg3]; var8++) {
            func_ov025_021d8c30(arg0, arg1, arg2, arg3, arg4, var8, 0);
        }
    }
}

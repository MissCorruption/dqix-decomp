#include <globaldefs.h>

extern "C" int _s32_div_f(int a, int b);
extern int data_ov027_021e3424;

// USA: func_ov027_021dd5a4
extern "C" ARM void func_ov027_021dd5a4(int arg0) {
    int var0 = arg0 - 2;
    *(int*)((char*)&data_ov027_021e3424 + 0x8) = var0;
    int var1 = _s32_div_f(30, var0);
    *(int*)((char*)&data_ov027_021e3424 + 0xc) = var1;
    *(int*)((char*)&data_ov027_021e3424 + 0x10) = 30;
}

#if defined(jpn)
#define R(j,u) (j)
#define func_ov023_021f64a8 func_ov023_021f5a1c
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

extern "C" int _s32_div_f(int a, int b);
extern char* data_ov004_021707c4;
extern "C" void func_ov023_021f64a8(void* arg0, int arg1, int arg2, int arg3);
extern "C" int func_ov023_021f6680(void* arg0, int arg1);

// USA: func_ov004_0215571c
extern "C" ARM int func_ov004_0215571c(void* arg0) {
    short var0 = *(short*)(data_ov004_021707c4 + 0xe);
    short var1 = *(short*)(data_ov004_021707c4 + 0xc);
    int var2 = _s32_div_f(var0 * 100, var1);
    var2 = (short)var2;
    if (var2 == 0 && var0 == 0) var2 = 0;
    if (var2 == 0 && var0 != 0) var2 = 1;
    if (var2 > 100) var2 = 100;
    if (var2 < 0) var2 = 0;

    func_ov023_021f64a8(arg0, 0x13, var2, 0xf);
    func_ov023_021f64a8(arg0, 0x14, var0, 0xf);
    func_ov023_021f6680(arg0, 0x10);
    return 0;
}

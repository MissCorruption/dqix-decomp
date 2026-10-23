#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" unsigned char* func_0205ec34(void* arg0, int arg1);
extern "C" int func_02012f68(int arg0);
extern "C" int func_0206dfb0(int arg0, unsigned char* arg1, int arg2);
extern "C" int func_02012f24(int arg0);
extern "C" int _s32_div_f(int a, int b);

struct Struct_0201bb78 { unsigned short unknown_0_; };

// USA: func_0201bb78
extern "C" ARM int func_0201bb78(struct Struct_0201bb78* arg0, unsigned int arg1) {
    unsigned char* var0 = func_0205ec34(arg0, arg1);
    int var1 = 0;
    if (arg1 >= 20000 && arg1 <= 0x752f) {
        int var2 = func_02012f68(arg1);
        if (var2 >= 0) {
            var1 = func_0206dfb0((int)var0, var0 + 0x8c, var2 + 0x5a + 0xa00);
        }
    } else if (arg1 >= 100 && arg1 <= 0x270f) {
        int var3 = _s32_div_f(arg1, 100);
        if (var3 < 100) {
            var1 = func_0206dfb0((int)var0, var0 + 0x8c, var3 + 0x96 + 0xa00);
        }
    } else if (arg1 == 10000) {
        var1 = func_0206dfb0((int)var0, var0 + 0x8c, 0x2b);
    } else {
        int var4 = func_02012f24(arg0->unknown_0_);
        if (var4 >= 0) {
            var1 = func_0206dfb0((int)var0, var0 + 0x8c, var4 + 0x5a + 0xa00);
        }
    }
    return var1;
}

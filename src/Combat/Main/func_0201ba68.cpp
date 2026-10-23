#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
#define func_0206df6c func_0206f0c0
#endif

extern "C" void* func_0202ae18(void);
extern "C" int func_0202c540(void* arg0);
extern "C" void* func_0205ec34(void);
extern "C" int func_02012f68(int arg0);
extern "C" void func_0206df6c(void* arg0, unsigned char* arg1, int arg2, int arg3);
extern "C" int func_0201b588(int arg0);
extern "C" int func_02012f24(int arg0);
extern "C" int _s32_div_f(int a, int b);

#if defined(jpn)
enum { Enum_0201ba68_10272 = 0x2860 };
#else
enum { Enum_0201ba68_10272 = 0x2820 };
#endif

// USA: func_0201ba68
extern "C" ARM void func_0201ba68(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    if (func_0202c540(func_0202ae18()) != 0 || var0[Enum_0201ba68_10272] != 0) return;

    void* var1 = func_0205ec34();
    if (*(unsigned short*)var0 >= 20000 && *(unsigned short*)var0 <= 0x752f) {
        int var2 = func_02012f68(*(unsigned short*)var0);
        if (var2 < 0) return;
        func_0206df6c(var1, (unsigned char*)var1 + 0x8c, var2 + 0x5a + 0xa00, 1);
        return;
    }
    if (*(unsigned short*)var0 >= 100 && *(unsigned short*)var0 <= 0x270f) {
        int var3 = _s32_div_f(*(unsigned short*)var0, 100);
        if (var3 >= 100) return;
        func_0206df6c(var1, (unsigned char*)var1 + 0x8c, var3 + 0x96 + 0xa00, 1);
        return;
    }
    if (func_0201b588(*(unsigned short*)var0)) {
        func_0206df6c(var1, (unsigned char*)var1 + 0x8c, 0x79d, 1);
        return;
    }
    int var4 = func_02012f24(*(unsigned short*)var0);
    if (var4 < 0) return;
    func_0206df6c(var1, (unsigned char*)var1 + 0x8c, var4 + 0x5a + 0xa00, 1);
}

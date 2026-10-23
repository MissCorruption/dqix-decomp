#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
#if defined(jpn)
#define func_ov024_021f6f10 func_ov023_021f6f10
extern "C" int func_ov023_021f6f10(void* arg0);
#else
extern "C" int func_ov024_021f6f10(void* arg0);
#endif
extern "C" void* func_ov004_02153c74(void*);
extern "C" int func_0206dfb0(int arg0, unsigned char* arg1, int arg2);
extern "C" void* func_0205ec34(void);
extern "C" void func_ov023_021fbdcc(void*, int);

// USA: func_ov004_02153d8c
extern "C" ARM int func_ov004_02153d8c(void* arg0) {
    void* var0 = func_ov023_021f6880(func_ov011_021849c8(arg0), 0x2e);
    if (!var0) return 0;
    if (func_ov024_021f6f10(var0) != 0x10) return 0;

    void* var1 = func_ov004_02153c74(arg0);
    short var2 = -1;
    if (var1) {
        int var3 = *(int*)((char*)var1 + 0xc);
        var2 = *(short*)((char*)var1 + 0x18);
        unsigned int var4 = ((unsigned int)var3 << 9) >> 0x15;
        unsigned short var5 = (unsigned short)var4;
        int var6 = var5;
        if (var6 > 0) {
            unsigned char* var7 = (unsigned char*)func_0205ec34();
            if (!func_0206dfb0((int)var7, var7 + 0x8c, var6 + 0x76 + 0xc00)) {
                var2 = -1;
            }
        }
    }
    func_ov023_021fbdcc(var0, var2);
    return 0;
}

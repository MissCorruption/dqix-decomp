#include <globaldefs.h>

#if defined(jpn)
#define RG(u, j) (j)
#define func_0205ec34 func_0205ff20
#else
#define RG(u, j) (u)
#endif

extern "C" void* func_0205ec34(void*);
extern "C" int func_02064a40(void* arg0, void* arg1);
extern "C" void func_0206f81c(void* arg0);

// USA: func_ov002_021575d4
extern "C" ARM int func_ov002_021575d4(char* arg0) {
    int var0 = 0;
    void* var1 = func_0205ec34(arg0);
    short var2 = *(short*)(arg0 + RG(0x1c00, 0x1a00) + RG(0x22, 0xea));
    char var3[0x34];
    *(int*)(var3 + 0x10) = var2;
    if (func_02064a40(var1, var3) != 0) {
        var0 = 1;
        func_0206f81c(var3);
        *(short*)(arg0 + RG(0x1c00, 0x1a00) + RG(0x28, 0xf0)) = 0x232a;
        *(short*)(arg0 + RG(0x1c00, 0x1a00) + RG(0x2a, 0xf2)) = -1;
    }
    return var0;
}

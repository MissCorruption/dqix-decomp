#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
#define func_0206df6c func_0206f0c0
#endif

extern "C" int func_0205ec34(int arg0);
extern "C" void func_0206df6c(void* arg0, unsigned char* arg1, int arg2, int arg3);
extern "C" void* func_0202ae18(void);
extern "C" int func_0202c508(void* arg0);
extern "C" void func_ov017_021d0924(int, int, unsigned short, int);
extern unsigned short data_ov017_021d6638[18];

// USA: func_ov017_0219e290
extern "C" ARM void func_ov017_0219e290(void* arg0, unsigned short arg1) {
    int var0 = func_0205ec34((int)arg0);
    int var1 = -1;
    for (unsigned int var2 = 0; var2 < 0x12; var2++) {
        if (arg1 == data_ov017_021d6638[var2]) var1 = var2;
    }
    if (var1 < 0) return;
    func_0206df6c((void*)var0, (unsigned char*)var0 + 0x8c, var1 + 0x200, 1);
    if (func_0202c508(func_0202ae18()) == 0) return;
    func_ov017_021d0924(1, 0, (unsigned short)var1, 1);
}

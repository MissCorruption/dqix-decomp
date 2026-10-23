#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void* func_0205ec34(void);
extern "C" int func_0206dfb0(int arg0, unsigned char* arg1, int arg2);
struct Struct_02095ff0;
extern "C" void func_020a0364(struct Struct_02095ff0* arg0, unsigned int arg1);
extern "C" ARM int func_020ac4c0(void* arg0);
extern "C" ARM int func_020ac494(void* arg0);
extern "C" ARM void func_0209609c(int arg0, unsigned char* arg1, int arg2);
extern "C" ARM int func_02096100(int arg0, unsigned char* arg1, int arg2);

// USA: func_02095ff0
extern "C" ARM void func_02095ff0(void* arg0, int arg1) {
    unsigned char var0[0xb0];
    if (arg1 > 0xcc || arg1 < 0) return;

    void* var1 = func_0205ec34();
    if (func_0206dfb0((int)var1, (unsigned char*)var1 + 0x8c, 0x1138)) {
        short* var2 = (short*)((char*)var1 + 0x2ca);
        *var2 = *var2 + 1;
    }

    if (!func_02096100((int)arg0, (unsigned char*)arg0 + 0x84, arg1)) {
        func_020ac4c0(var0);
        func_020a0364((struct Struct_02095ff0*)var0, 1);
        func_020ac494(var0);
    }

    func_0209609c((int)arg0, (unsigned char*)arg0 + 0x84, arg1);
}

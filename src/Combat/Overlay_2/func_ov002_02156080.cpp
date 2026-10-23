#include <globaldefs.h>
#include <std_library_functions.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" char *func_0205ec34(void);
extern "C" int func_ov002_02161920(void *arg0);
extern "C" int func_0206dfb0(int, unsigned char*, int);

struct Struct_ov002_0216c9ae {
    short unknown_0_[9];
};
extern "C" const struct Struct_ov002_0216c9ae data_ov002_0216c9ae;

// USA: func_ov002_02156080
extern "C" ARM void func_ov002_02156080(void *arg0, short *arg1, short *arg2) {
    char *var0               = func_0205ec34();
    int var1                 = func_ov002_02161920(arg0);
    struct Struct_ov002_0216c9ae var2 = data_ov002_0216c9ae;
    short var3                  = 0;
    for (short var4 = 0; var4 < 9; var4++) {
        int var5 = 1;
        switch (var4) {
            case 2: var5 = func_0206dfb0((int)var0, (unsigned char*)(var0 + 0x8c), 0x119c) != 0 ? 1 : 0; break;
            case 6: var5 = 0; break;
            case 8:
                if (var1 != 2) var5 = 0;
                break;
        }
        if (var5) {
            var2.unknown_0_[var3] = var4;
            var3++;
        }
    }
    memcpy(arg1, &var2, 0x12);
    *arg2 = var3;
}

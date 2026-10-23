#if defined(jpn)
enum { Enum_020120f0_29950 = 0x72be };
#else
enum { Enum_020120f0_29950 = 0x74fe };
#endif

#include <globaldefs.h>
#include "Util/Random.h"

extern "C" int func_020cf1a8(int arg0);
extern "C" void func_020c99ac(void* arg0);
unsigned long long GetCurrentTimestamp(void);
extern "C" unsigned long long _u32_div_f(unsigned int arg0, unsigned int arg1);
extern char data_020ef0ca;

// USA: func_020120f0
extern "C" ARM void func_020120f0(unsigned char* arg0) {
    struct Random var0;
    CreateRandom(&var0, &data_020ef0ca, 0);

    int var1[3];
    func_020cf1a8((int)var1);

    unsigned char var2[6];
    func_020c99ac(var2);

    unsigned long long var3[6];
    var3[0] = (unsigned int)var1[0];
    var3[1] = (unsigned int)var1[1];
    var3[2] = (unsigned int)var1[2];

    var3[3] = (unsigned int)_u32_div_f((unsigned int)GetCurrentTimestamp() << 6, 0x82ea);
    var3[4] = (unsigned int)_u32_div_f((unsigned int)GetCurrentTimestamp() * 0xfa00, 0x82ea);

    int var4 = (var2[5] << 24) | (var2[4] << 16) | (var2[3] << 8) | var2[2];
    var3[5] = (long long)var4;

    int var5;
    for (var5 = 0; var5 < 6; var5++) {
        SeedRandom(&var0, var3[var5]);
        *(arg0 + var5 + Enum_020120f0_29950) = (unsigned char)NextRandom(&var0);
    }
}

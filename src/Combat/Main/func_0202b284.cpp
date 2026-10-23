#include <globaldefs.h>

extern "C" int func_0202d6b8(void);
extern "C" int func_0202d6a8(void);
void SleepCurrentContext(unsigned int);

// USA: func_0202b284
extern "C" ARM int func_0202b284(int arg0, int arg1) {
    unsigned int var0 = 0;
    int var1;
    while ((var1 = func_0202d6a8()) != arg1) {
        if (func_0202d6b8() == 8) return 3;
        if ((unsigned int)(var1 - 9) <= 1) return 1;
        var0++;
        if (var0 > 0x4e20) return 2;
        SleepCurrentContext(1);
    }
    return 0;
}

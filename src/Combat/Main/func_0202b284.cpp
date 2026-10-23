#include <globaldefs.h>

extern "C" int func_0202d6b8(void);
extern "C" int func_0202d6a8(void);
void SleepCurrentContext(unsigned int);

// USA: func_0202b284
extern "C" ARM int func_0202b284(int unused, int threshold) {
    unsigned int i = 0;
    int cur;
    while ((cur = func_0202d6a8()) != threshold) {
        if (func_0202d6b8() == 8) return 3;
        if ((unsigned int)(cur - 9) <= 1) return 1;
        i++;
        if (i > 0x4e20) return 2;
        SleepCurrentContext(1);
    }
    return 0;
}

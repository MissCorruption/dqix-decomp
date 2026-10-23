#include <globaldefs.h>

extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* obj);

// USA: func_020e3368
extern "C" ARM void func_020e3368(unsigned char* base, unsigned char val) {
    unsigned char* p;
    int i;
    if (!func_0202b7d8((int*)func_0202ae18())) return;
    p = base + 0x20;
    for (i = 0; i < 8; i++, p++) {
        if (*p == 0) {
            *p = val;
            return;
        }
    }
}

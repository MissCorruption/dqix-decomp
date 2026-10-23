#include <globaldefs.h>

#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif

extern "C" void func_ov017_0218b5c0(int arg0, int arg1);
extern "C" void func_ov017_0218b5f8(int arg0);

// USA: func_ov002_0216c28c
extern "C" ARM void func_ov002_0216c28c(void* arg0, int arg1) {
    int var0 = arg1 & 0xff;
    *((unsigned char*)arg0 + 0x1000 + LOW_REGION(0xb3f, 0xc7b)) = arg1;
    if (var0 != 0xb && var0 != 0xc) return;
    {
        func_ov017_0218b5c0(1, *((signed char*)arg0 + LOW_REGION(0x1ae8, 0x1c20)));
        func_ov017_0218b5c0(1, *((signed char*)arg0 + LOW_REGION(0x1ae9, 0x1c21)));
        func_ov017_0218b5f8(-1);
    }
}

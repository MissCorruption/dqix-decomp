#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov004_02153978;
extern "C" void* func_ov023_021f6590(void*);
extern "C" unsigned int func_ov023_021f6f08(Struct_ov004_02153978*);
typedef void* (*Type_ov004_0215513c)(void*, int);

// USA: func_ov004_0215513c
#pragma optimize_for_size off
extern "C" ARM int func_ov004_0215513c(void* arg0, short* arg1, short* arg2, short* arg3) {
    *arg3 = -1;
    short var0 = *arg3;
    *arg2 = var0;
    *arg1 = var0;
    void* var1 = ((Type_ov004_0215513c)func_ov023_021f6590)(arg0, 5);
    if (!var1) return (int)var1;
    unsigned int var2 = func_ov023_021f6f08((Struct_ov004_02153978*)var1);
    switch (var2) {
        case 0x1a:
            *arg1 = 0;
            return 0;
        case 0x1b:
            *arg2 = 8;
            return 8;
        case 0x1c:
            var2 = 9;
            *arg2 = 9;
            break;
    }
    return var2;
}

#include <globaldefs.h>

struct Struct_0205faf4_8;
struct Struct_0205faf4_7;
extern "C" struct Struct_0205faf4_8* func_02096134(struct Struct_0205faf4_7* arg0, int arg1);
extern "C" int* func_02094d6c(void);

// USA: func_02064904
extern "C" ARM void* func_02064904(void* arg0, int arg1, unsigned int arg2) {
    struct Struct_0205faf4_8* var0 = func_02096134((struct Struct_0205faf4_7*)func_02094d6c(), arg1);
    void* var1 = NULL;
    if (var0 != NULL && arg2 <= 9) {
        switch (arg2) {
            case 0: var1 = (char*)var0 + 0xa; break;
            case 1: var1 = (char*)var0 + 0xa; break;
            case 2: var1 = (char*)var0 + 0xc; break;
            case 3: var1 = (char*)var0 + 0xe; break;
            case 4: var1 = (char*)var0 + 0x4; break;
            case 5: var1 = (char*)var0 + 0x6; break;
            case 6: var1 = (char*)var0 + 0x8; break;
            case 7: var1 = (char*)var0 + 0xa; break;
            case 8: var1 = (char*)var0 + 0xc; break;
            case 9: var1 = (char*)var0 + 0xe; break;
        }
    }
    return var1;
}

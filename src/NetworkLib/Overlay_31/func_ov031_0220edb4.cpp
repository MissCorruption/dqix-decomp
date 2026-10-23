#include <globaldefs.h>

extern "C" int func_ov031_0220d60c(void);

// USA: func_ov031_0220edb4
extern "C" ARM int func_ov031_0220edb4(void) {
    char* var0 = (char*)func_ov031_0220d60c() + 0x2000;
    int* var1 = *(int**)(var0 + 0x270);
    int var2 = 0;
    if (var1 != NULL) {
        unsigned int var3 = *(unsigned int*)(var0 + 0x274);
        if (var3 > 0xc) {
            return *(int*)((char*)var1 + 4);
        }
    }
    return var2;
}

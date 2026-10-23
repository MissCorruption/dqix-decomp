#include <globaldefs.h>

// USA: func_020d468c
extern "C" ARM void func_020d468c(void) {
    unsigned short* var0 = (unsigned short*)0x027fff96;
    if (*var0 & 1) {
        *var0 = *var0 & ~1;
    }
}

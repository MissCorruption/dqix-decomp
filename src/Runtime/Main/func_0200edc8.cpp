#include <globaldefs.h>

extern "C" void (*ARM9_CTOR_START[])(void);

// USA: func_0200edc8
extern "C" ARM void func_0200edc8(void) {
    void (**var0)(void) = ARM9_CTOR_START;
    while (var0 != 0 && *var0 != 0) {
        (*var0)();
        var0++;
    }
}

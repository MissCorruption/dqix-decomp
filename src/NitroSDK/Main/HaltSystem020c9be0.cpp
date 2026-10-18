#include <globaldefs.h>

#if defined(jpn)
#define func_020c9bf0 func_020cb6bc
#endif

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

unsigned int DisableIRQInterrupts(void);
extern "C" void func_020c9bf0(void);

// USA: func_020c9be0  (semantic: HaltSystem020c9be0)
extern "C" ARM void func_020c9be0(void) {
    for (;;) {
        DisableIRQInterrupts();
        func_020c9bf0();
    }
}

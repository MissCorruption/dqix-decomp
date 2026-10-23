#include <globaldefs.h>

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

extern "C" void func_020d1564(int);
extern "C" void func_020c9be0(void);

// USA: func_020d192c
extern "C" ARM void func_020d192c(void) {
    func_020d1564(2);
    func_020c9be0();
}

#include <globaldefs.h>

extern "C" int func_020d135c(void);
extern "C" int func_020d1344(void);

// USA: func_020d131c
extern "C" ARM int func_020d131c(void) {
    if (func_020d135c() != 0) {
        if (func_020d1344() == 0) return 1;
    }
    return 0;
}

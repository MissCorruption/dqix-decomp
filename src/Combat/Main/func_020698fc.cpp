#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_020698fc
extern "C" ARM int func_020698fc(void** arg0) {
    void* var0 = *arg0;
    unsigned short var1 = 0xff1f;
    memcpy(var0, &var1, 2);
    return 2;
}

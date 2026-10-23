#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" bool func_02044494(void* arg0, void* arg1);

// USA: func_0206abf8
extern "C" ARM int func_0206abf8(void* arg0, void* arg1) {
    unsigned short var0;
    int var1 = 0;
    memcpy(&var0, arg1, 2);
    if (!func_02044494(arg0, &var0)) return var1;
    switch (var0) {
        case 0xff20: case 0xff21: case 0xff23: case 0xff24:
            var1 = 1;
            break;
        case 0xff22: case 0xff25:
            var1 = 2;
            break;
    }
    return var1;
}

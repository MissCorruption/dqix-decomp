#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_02087510 {
    char unknown_0_[0xf2c];
};

// USA: func_02087510
// USA: func_02087510
extern "C" ARM int func_02087510(Struct_02087510* arg0, char arg1, void* arg2) {
    int var0;
    for (var0 = 0; var0 < 3; var0++) {
        if (*(signed char*)((char*)arg0 + 0xf3c + var0 * 0x14) < 0) {
            memcpy((char*)arg0 + 0xf2c + var0 * 0x14, arg2, 0x10);
            *(char*)((char*)arg0 + 0xf3c + var0 * 0x14) = arg1;
            return 1;
        }
    }
    return 0;
}

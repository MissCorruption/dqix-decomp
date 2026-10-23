#include <globaldefs.h>

// USA: func_ov000_02169a58
extern "C" ARM void* func_ov000_02169a58(char* arg0, int arg1) {
    while (arg0 != 0) {
        int var0 = 0;
        while (var0 < *(unsigned short*)(arg0 + 4)) {
            if (arg1 == (*(unsigned short**)(arg0 + 0))[var0]) {
                return arg0;
            }
            var0++;
        }
        arg0 = *(char**)(arg0 + 0xc);
    }
    return 0;
}

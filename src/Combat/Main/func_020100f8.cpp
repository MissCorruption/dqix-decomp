#include <globaldefs.h>
extern "C" int func_0202e09c(int);

// USA: func_020100f8
extern "C" ARM int func_020100f8(char* arg0) {
    int var0 = *(int*)(arg0 + 0x3b0);
    if (var0 != 0) {
        if (func_0202e09c((int)(var0)) & 4) {
            return *(int*)(arg0 + 0x3b0);
        }
    }
    return 0;
}

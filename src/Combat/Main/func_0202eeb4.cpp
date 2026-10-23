#include <globaldefs.h>

extern "C" int func_020a10a8(int*);

// USA: func_0202eeb4
extern "C" ARM int func_0202eeb4(char* arg0) {
    int var0 = 1;
    int var1 = 1;
    if (func_020a10a8((int*)(arg0 + 0x16c)) == 0) {
        if (func_020a10a8((int*)(arg0 + 0x194)) == 0) var1 = 0;
    }
    if (var1 == 0) {
        if (func_020a10a8((int*)(arg0 + 0x1bc)) == 0) var0 = 0;
    }
    return var0;
}

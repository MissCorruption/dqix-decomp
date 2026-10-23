#include <globaldefs.h>

// USA: func_02098210
extern "C" ARM int func_02098210(int arg0, int arg1) {
    int var0 = 0xc3b5;
    return arg1 == var0 || arg1 == var0 + 0x64 || arg1 == var0 + 0xc8 || arg1 == var0 + 0x12c;
}

#include <globaldefs.h>
extern "C" int func_020d4fa4(int, int, int, int);

// USA: func_020d4f8c
extern "C" ARM int func_020d4f8c(int arg0, int arg1, int arg2, int arg3) {
    int var0 = 1;
    if (arg3 == 0) var0 |= 2;
    return func_020d4fa4((int)(arg0), (int)(arg1), (int)(arg2), (int)(var0));
}

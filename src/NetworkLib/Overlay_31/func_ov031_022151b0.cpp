#include <globaldefs.h>

extern "C" int func_ov031_0220cdd4(int arg0, int arg1, int arg2);
extern int data_ov031_02245ff4[];

// USA: func_ov031_022151b0
extern "C" ARM int func_ov031_022151b0(int arg0, int arg1, int arg2, int arg3) {
    if (arg2 > 0xc) arg2 = 0xc;
    int var0 = arg3 | data_ov031_02245ff4[arg2];
    return func_ov031_0220cdd4(arg0, arg1, var0);
}

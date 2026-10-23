#include <globaldefs.h>

extern "C" int func_ov023_021dca88(void *arg0, int arg1, int arg2, int arg3);

// USA: func_ov023_021fbddc
extern "C" ARM int func_ov023_021fbddc(void *arg0, int arg1, int arg2, int arg3) {
    return func_ov023_021dca88((char*)arg0 + 0x20, arg1, arg2, arg3);
}

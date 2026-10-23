#include <globaldefs.h>

extern "C" int func_ov031_02226fe4(void *arg0, int arg1, int arg2);
extern int data_ov031_02250c40;

// USA: func_ov031_0222708c
extern "C" ARM int func_ov031_0222708c(int arg0, int arg1) {
    return func_ov031_02226fe4(&data_ov031_02250c40, arg0, arg1);
}

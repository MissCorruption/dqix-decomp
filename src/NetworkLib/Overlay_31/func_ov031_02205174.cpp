#include <globaldefs.h>

extern "C" void func_020c7e0c(void *arg0, int arg1, int arg2);
extern int data_ov031_0224e204;

// USA: func_ov031_02205174
extern "C" ARM void func_ov031_02205174(int arg0) {
    if (arg0 == 0) {
        return;
    }
    func_020c7e0c(&data_ov031_0224e204, arg0, 0);
}

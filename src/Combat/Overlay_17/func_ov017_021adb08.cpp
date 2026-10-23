#include <globaldefs.h>

extern "C" void func_ov017_021adb1c(void* arg0);

// USA: func_ov017_021adb08
extern "C" ARM void func_ov017_021adb08(unsigned char* arg0) {
    arg0[1] = 1;
    func_ov017_021adb1c(arg0);
}

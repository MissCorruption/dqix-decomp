#include <globaldefs.h>

extern "C" void* func_ov031_022133f8(unsigned int arg0);
extern "C" int func_ov031_02215528(void* arg0, void* arg1, void* arg2);
extern "C" int func_ov031_0220764c(void* arg0);
extern "C" void func_ov031_022134cc(int arg0);

extern int data_ov031_0224e1c0;

// USA: func_ov031_02215358
extern "C" ARM int func_ov031_02215358(void* arg0) {
    void* var0 = func_ov031_022133f8(1);
    void* var1 = func_ov031_022133f8(4);
    func_ov031_02215528(var0, arg0, var1);
    data_ov031_0224e1c0 = 4;
    if (func_ov031_0220764c(var1) == 0) {
        return 0xc;
    }
    func_ov031_022134cc(2);
    return 0x11;
}

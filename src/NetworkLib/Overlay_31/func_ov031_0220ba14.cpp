#include <globaldefs.h>

extern "C" void func_ov031_0220b8f4(void*, void*, int);
extern "C" void func_ov031_0220b18c(void*, void*, int);
extern char data_ov031_022498e5;

// USA: func_ov031_0220ba14
extern "C" ARM void func_ov031_0220ba14(void* arg0, void* arg1) {
    func_ov031_0220b8f4(arg0, &data_ov031_022498e5, 0x2c);
    func_ov031_0220b18c(arg1, arg0, 0x14);
}

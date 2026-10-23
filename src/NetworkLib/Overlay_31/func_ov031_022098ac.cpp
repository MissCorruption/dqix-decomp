#include <globaldefs.h>

extern "C" void func_ov031_0220b8f4(void* arg0, int arg1, int arg2);
extern "C" void func_ov031_0220b028(void* arg0, int arg1, int arg2);

// USA: func_ov031_022098ac
extern "C" ARM void func_ov031_022098ac(void* arg0, int arg1, int arg2) {
    func_ov031_0220b8f4((char*)arg0 + 0x2ec, arg1, arg2);
    func_ov031_0220b028((char*)arg0 + 0x3a4, arg1, arg2);
}

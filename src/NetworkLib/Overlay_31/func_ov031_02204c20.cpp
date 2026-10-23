#include <globaldefs.h>

extern "C" void func_ov031_0220321c(void);
extern "C" void func_ov031_02203190(void);
extern "C" void func_ov031_02203250(void);
extern "C" void func_ov031_022031bc(int arg0, unsigned short arg1, unsigned int arg2);
extern "C" int func_ov031_022048a8(void* arg0, int arg1, void* arg2, int arg3, int arg4);

// USA: func_ov031_02204c20
extern "C" ARM int func_ov031_02204c20(void* arg0, unsigned int arg1, void* arg2) {
    if (arg1 == 0) return -1;
    func_ov031_0220321c();
    func_ov031_02203190();
    func_ov031_022031bc(0, 0x35, arg1);
    int var0 = func_ov031_022048a8(arg0, 1, arg2, 0, 0);
    func_ov031_02203250();
    return var0;
}

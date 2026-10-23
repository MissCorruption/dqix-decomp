#include <globaldefs.h>

extern "C" void func_ov004_02154748(void* arg0);
extern "C" void* func_ov004_02153944(void* arg0, int arg1);
extern "C" void func_ov023_021f809c(void* arg0, void* arg1);

// USA: func_ov004_021547fc
extern "C" ARM void* func_ov004_021547fc(void* arg0) {
    void* var0;
    func_ov004_02154748(arg0);
    var0 = func_ov004_02153944(arg0, 0x37);
    if (var0) {
        func_ov023_021f809c(var0, arg0);
    }
    return 0;
}

#include <globaldefs.h>

extern "C" void* func_0203bd08(void);
extern "C" void func_0203be4c(void* arg0);
extern "C" void func_0203be40(void* arg0);

// USA: func_02093704
extern "C" ARM void func_02093704(int arg0) {
    void* var0 = func_0203bd08();
    func_0203be4c(var0);
    if (arg0 != 0) return;
    func_0203be40(var0);
}

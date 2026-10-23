#include <globaldefs.h>

extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* arg0);
extern "C" int func_0202c508(void*);
extern "C" void func_ov017_021ced48(int, int);

// USA: func_020e36f0
extern "C" ARM void func_020e36f0(unsigned char* arg0) {
    void* var0 = func_0202ae18();
    if (!func_0202b7d8((int*)var0)) return;
    if (func_0202c508(var0)) {
        if (func_0202b7d8((int*)func_0202ae18())) {
            arg0[0] |= 1;
        }
        return;
    }
    func_ov017_021ced48(0, 0);
}
